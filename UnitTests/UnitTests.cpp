#include "pch.h"
#include "CppUnitTest.h"
#include "../Address.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace System;

namespace UnitTests
{
	TEST_CLASS(Addresses)
	{
	public:
		
		TEST_METHOD(Creation)
		{
			// Empty constructor
			Address^ addresse = gcnew Address();
			addresse->setRoadName("Rue de la paix");
			addresse->setRoadNumber("1");
			addresse->setZipCode("75001");
			addresse->setCity("Paris");
			addresse->setCountry("France");

			// Constructor with parameters
			Address^ addresse2 = gcnew Address("France", "75008", "Paris", "Avenue des Champs-Élysées", "8Bis", "A");
			
			// Some other stuff
		}
	};
}
