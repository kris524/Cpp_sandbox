Exercise: Implement an Abstract Factory for a Fantasy Game

You are tasked with creating a character creation system for a fantasy game. The game has two factions: Humans and Orcs. Each faction has two types of characters: Warriors and Mages. Your goal is to implement the Abstract Factory design pattern to allow for the creation of these different types of characters without specifying their concrete classes in the client code.

Define an abstract base class called Character with common properties and methods that all characters share.

Create concrete classes HumanWarrior, HumanMage, OrcWarrior, and OrcMage that inherit from the Character class. Each class should implement the specific details for their respective character types.

Define an abstract base class called CharacterFactory with virtual methods for creating warriors and mages.

Create concrete classes HumanCharacterFactory and OrcCharacterFactory that inherit from the CharacterFactory class. Implement the virtual methods to create instances of HumanWarrior, HumanMage, OrcWarrior, and OrcMage.

In the client code (e.g., main function), use the abstract factories to create characters without explicitly specifying their concrete classes.