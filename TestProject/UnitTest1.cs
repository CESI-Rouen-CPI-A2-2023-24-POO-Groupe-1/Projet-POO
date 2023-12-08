using System.Data.SqlClient;


namespace TestProject
{
    public class T_Address
    {
        private Address? address1 = new();
        private Address? address2 = new();

        [SetUp]
        public void Setup()
        {
        }

        [Test, Order(1)]
        public void Creation_Through_Constructor()
        {
            // Create Address object through constructor
            address1 = new("France", "75001", "Paris", "Rue de la Paix", "8", "5B");
            Assert.Multiple(() =>
            {
                Assert.That(address1.getCountry(), Is.EqualTo("France"));
                Assert.That(address1.getZipCode(), Is.EqualTo("75001"));
                Assert.That(address1.getCity(), Is.EqualTo("Paris"));
                Assert.That(address1.getRoadName(), Is.EqualTo("Rue de la Paix"));
                Assert.That(address1.getRoadNumber(), Is.EqualTo("8"));
                Assert.That(address1.getApartmentNumber(), Is.EqualTo("5B"));
            });
            address1 = null;
        }

        [Test, Order(2)]
        public void Creation_Through_Setters()
        {
            // Create Address object through setters
            address1 = new();
            address1.setCountry("France");
            address1.setZipCode("75001");
            address1.setCity("Paris");
            address1.setRoadName("Rue de la Paix");
            address1.setRoadNumber("8");
            address1.setApartmentNumber("5B");
            Assert.Multiple(() =>
            {
                Assert.That(address1.getCountry(), Is.EqualTo("France"));
                Assert.That(address1.getZipCode(), Is.EqualTo("75001"));
                Assert.That(address1.getCity(), Is.EqualTo("Paris"));
                Assert.That(address1.getRoadName(), Is.EqualTo("Rue de la Paix"));
                Assert.That(address1.getRoadNumber(), Is.EqualTo("8"));
                Assert.That(address1.getApartmentNumber(), Is.EqualTo("5B"));
            });
        }

        [Test, Order(3)]
        public void Writing_To_DB()
        {
            address1 = ADDRESS.add(address1);
            Assert.That(address1.getId(), Is.GreaterThan(0));
        }

        [Test, Order(4)]
        public void Reading_From_DB()
        {
            address2 = ADDRESS.get(address1.getId());
            Assert.Multiple(() =>
            {
                Assert.That(address2.getCountry(), Is.EqualTo(address1.getCountry()));
                Assert.That(address2.getZipCode(), Is.EqualTo(address1.getZipCode()));
                Assert.That(address2.getCity(), Is.EqualTo(address1.getCity()));
                Assert.That(address2.getRoadName(), Is.EqualTo(address1.getRoadName()));
                Assert.That(address2.getRoadNumber(), Is.EqualTo(address1.getRoadNumber()));
                Assert.That(address2.getApartmentNumber(), Is.EqualTo(address1.getApartmentNumber()));
            });
        }

        [Test, Order(5)]
        public void Updating_DB()
        {
            Assert.That(address1.getId(), Is.GreaterThan(0));

            // Use ADDRESS::update() to update DB
            address1 = new("France", "75001", "Paris", "Rue de la Paix", "8", "");
            address1.setCountry("France");
            address1.setZipCode("75001");
            address1.setCity("Paris");
            address1.setRoadName("Rue de la Paix");
            address1.setRoadNumber("8");
            address1.setApartmentNumber("");
            ADDRESS.edit(address1);

            // Use ADDRESS::get() to read from DB
            address2 = ADDRESS.get(address1.getId());

            Assert.Multiple(() =>
            {
                Assert.That(address2.getCountry(), Is.EqualTo(address1.getCountry()));
                Assert.That(address2.getZipCode(), Is.EqualTo(address1.getZipCode()));
                Assert.That(address2.getCity(), Is.EqualTo(address1.getCity()));
                Assert.That(address2.getRoadName(), Is.EqualTo(address1.getRoadName()));
                Assert.That(address2.getRoadNumber(), Is.EqualTo(address1.getRoadNumber()));
                Assert.That(address2.getApartmentNumber(), Is.EqualTo(address1.getApartmentNumber()));
            });
        }

        [OneTimeTearDown]
        public void TearDown()
        {
            address1.Dispose();
            address2.Dispose();
        }
    }
}