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
                // comparer les adresses de livraison
                Assert.That(client1.getDeliverAddress().getCity(), Is.EqualTo(deliver_address.getCity()));
                Assert.That(client1.getDeliverAddress().getCountry(), Is.EqualTo(deliver_address.getCountry()));
                Assert.That(client1.getDeliverAddress().getRoadName(), Is.EqualTo(deliver_address.getRoadName()));
                Assert.That(client1.getDeliverAddress().getRoadNumber(), Is.EqualTo(deliver_address.getRoadNumber()));
                Assert.That(client1.getDeliverAddress().getZipCode(), Is.EqualTo(deliver_address.getZipCode()));
                Assert.That(client1.getDeliverAddress().getApartmentNumber(), Is.EqualTo(deliver_address.getApartmentNumber()));
                // comparer les adresses de facturation
                Assert.That(client1.getBillingAddress().getCity(), Is.EqualTo(bill_address.getCity()));
                Assert.That(client1.getBillingAddress().getCountry(), Is.EqualTo(bill_address.getCountry()));
                Assert.That(client1.getBillingAddress().getRoadName(), Is.EqualTo(bill_address.getRoadName()));
                Assert.That(client1.getBillingAddress().getRoadNumber(), Is.EqualTo(bill_address.getRoadNumber()));
                Assert.That(client1.getBillingAddress().getZipCode(), Is.EqualTo(bill_address.getZipCode()));
                Assert.That(client1.getBillingAddress().getApartmentNumber(), Is.EqualTo(bill_address.getApartmentNumber()));
            }); 
        }

        [Test, Order(4)]
        public void Reading_From_DB()
        {
            client2 = null;
            client2 = CLIENT.get(client1.getId());
            Assert.Multiple(() =>
            {
                // comparer les attributs du client
                Assert.That(client2.getId(), Is.EqualTo(client1.getId()));
                Assert.That(client2.getFirstName(), Is.EqualTo(client1.getFirstName()));
                Assert.That(client2.getLastName(), Is.EqualTo(client1.getLastName()));
                Assert.That(client2.getBirthdate(), Is.EqualTo(client1.getBirthdate()));
                // comparer les adresses de livraison
                Assert.That(client2.getDeliverAddress().getCity(), Is.EqualTo(client1.getDeliverAddress().getCity()));
                Assert.That(client2.getDeliverAddress().getCountry(), Is.EqualTo(client1.getDeliverAddress().getCountry()));
                Assert.That(client2.getDeliverAddress().getRoadName(), Is.EqualTo(client1.getDeliverAddress().getRoadName()));
                Assert.That(client2.getDeliverAddress().getRoadNumber(), Is.EqualTo(client1.getDeliverAddress().getRoadNumber()));
                Assert.That(client2.getDeliverAddress().getZipCode(), Is.EqualTo(client1.getDeliverAddress().getZipCode()));
                Assert.That(client2.getDeliverAddress().getApartmentNumber(), Is.EqualTo(client1.getDeliverAddress().getApartmentNumber()));
                // comparer les adresses de facturation
                Assert.That(client2.getBillingAddress().getCity(), Is.EqualTo(client1.getBillingAddress().getCity()));
                Assert.That(client2.getBillingAddress().getCountry(), Is.EqualTo(client1.getBillingAddress().getCountry()));
                Assert.That(client2.getBillingAddress().getRoadName(), Is.EqualTo(client1.getBillingAddress().getRoadName()));
                Assert.That(client2.getBillingAddress().getRoadNumber(), Is.EqualTo(client1.getBillingAddress().getRoadNumber()));
                Assert.That(client2.getBillingAddress().getZipCode(), Is.EqualTo(client1.getBillingAddress().getZipCode()));
                Assert.That(client2.getBillingAddress().getApartmentNumber(), Is.EqualTo(client1.getBillingAddress().getApartmentNumber()));
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

            Assert.Multiple(() =>
            {
                Assert.That(client1.getId(), Is.GreaterThan(0));
                Assert.That(client1.getFirstName(), Is.EqualTo("Jeanne"));
                Assert.That(client1.getLastName(), Is.EqualTo("Dupond"));
                Assert.That(client1.getBirthdate(), Is.EqualTo(DateTime.Parse("01/01/2001")));
                // comparer les adresses de livraison
                Assert.That(client1.getDeliverAddress().getCity(), Is.EqualTo(bill_address.getCity()));
                Assert.That(client1.getDeliverAddress().getCountry(), Is.EqualTo(bill_address.getCountry()));
                Assert.That(client1.getDeliverAddress().getRoadName(), Is.EqualTo(bill_address.getRoadName()));
                Assert.That(client1.getDeliverAddress().getRoadNumber(), Is.EqualTo(bill_address.getRoadNumber()));
                Assert.That(client1.getDeliverAddress().getZipCode(), Is.EqualTo(bill_address.getZipCode()));
                Assert.That(client1.getDeliverAddress().getApartmentNumber(), Is.EqualTo(bill_address.getApartmentNumber()));
                // comparer les adresses de facturation
                Assert.That(client1.getBillingAddress().getCity(), Is.EqualTo(deliver_address.getCity()));
                Assert.That(client1.getBillingAddress().getCountry(), Is.EqualTo(deliver_address.getCountry()));
                Assert.That(client1.getBillingAddress().getRoadName(), Is.EqualTo(deliver_address.getRoadName()));
                Assert.That(client1.getBillingAddress().getRoadNumber(), Is.EqualTo(deliver_address.getRoadNumber()));
                Assert.That(client1.getBillingAddress().getZipCode(), Is.EqualTo(deliver_address.getZipCode()));
                Assert.That(client1.getBillingAddress().getApartmentNumber(), Is.EqualTo(deliver_address.getApartmentNumber()));
            });
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