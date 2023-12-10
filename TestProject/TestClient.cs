using System.Data.SqlClient;


namespace TestProject
{
    public class TestClient
    {
        private Address deliver_address = new("France", "75001", "Paris", "Rue de la Paix", "8", "5B");
        private Address bill_address = new("Allemagne", "12345", "Berlin", "Alexanderplatz", "15", "8C");
        private Client? client1 = new();
        private Client? client2 = new();

        [SetUp]
        public void Setup()
        {
        }

        [Test, Order(1)]
        public void Creation_Through_Constructor()
        {
            client1 = new("Jean", "Dupont", DateTime.Parse("01/01/2000"), deliver_address, bill_address);
            Assert.Multiple(() =>
            {
                Assert.That(client1.getFirstName(), Is.EqualTo("Jean"));
                Assert.That(client1.getLastName(), Is.EqualTo("Dupont"));
                Assert.That(client1.getBirthdate(), Is.EqualTo(DateTime.Parse("01/01/2000")));
                Assert.That(client1.getDeliverAddress(), Is.EqualTo(deliver_address));
                Assert.That(client1.getBillingAddress(), Is.EqualTo(bill_address));
            });
        }

        [Test, Order(2)]
        public void Creation_Through_Setters()
        {
            // Create Address object through setters
            client2 = new();
            client2.setFirstName("Jean");
            client2.setLastName("Dupont");
            client2.setBirthdate(DateTime.Parse("01/01/2000"));
            client2.setDeliverAddress(deliver_address);
            client2.setBillingAddress(bill_address);

            Assert.Multiple(() =>
            {
                Assert.That(client2.getFirstName(), Is.EqualTo("Jean"));
                Assert.That(client2.getLastName(), Is.EqualTo("Dupont"));
                Assert.That(client2.getBirthdate(), Is.EqualTo(DateTime.Parse("01/01/2000")));
                Assert.That(client2.getDeliverAddress(), Is.EqualTo(deliver_address));
                Assert.That(client2.getBillingAddress(), Is.EqualTo(bill_address));
            });
        }

        [Test, Order(3)]
        public void Writing_To_DB()
        {
            client1 = CLIENT.add(client1);
            Assert.Multiple(() =>
            {
                Assert.That(client1.getId(), Is.GreaterThan(0));
                Assert.That(client1.getFirstName(), Is.EqualTo("Jean"));
                Assert.That(client1.getLastName(), Is.EqualTo("Dupont"));
                Assert.That(client1.getBirthdate(), Is.EqualTo(DateTime.Parse("01/01/2000")));
                Assert.That(client1.getDeliverAddress(), Is.EqualTo(deliver_address));
                Assert.That(client1.getBillingAddress(), Is.EqualTo(bill_address));
            }); 
        }

        [Test, Order(4)]
        public void Reading_From_DB()
        {
            client2 = CLIENT.get(client1.getId());
            Assert.Multiple(() =>
            {
                Assert.That(client2.getId(), Is.EqualTo(client1.getId()));
                Assert.That(client2.getFirstName(), Is.EqualTo(client1.getFirstName()));
                Assert.That(client2.getLastName(), Is.EqualTo(client1.getLastName()));
                Assert.That(client2.getBirthdate(), Is.EqualTo(client1.getBirthdate()));
                Assert.That(client2.getDeliverAddress(), Is.EqualTo(client1.getDeliverAddress()));
                Assert.That(client2.getBillingAddress(), Is.EqualTo(client1.getBillingAddress()));
            });
        }

        [Test, Order(5)]
        public void Updating_DB()
        {
            client1.setFirstName("Jeanne");
            client1.setLastName("Dupond");
            client1.setBirthdate(DateTime.Parse("01/01/2001"));
            client1.setDeliverAddress(bill_address);
            client1.setBillingAddress(deliver_address);

            CLIENT.edit(client1);
        }

        [Test, Order(6)]
        public void Deleting_From_DB()
        {
            CLIENT.remove(client1);
            CLIENT.remove(client2);
        }

        [OneTimeTearDown]
        public void TearDown()
        {
            ADDRESS.remove(bill_address);
            ADDRESS.remove(deliver_address);

            bill_address.Dispose();
            deliver_address.Dispose();
        }
    }
}