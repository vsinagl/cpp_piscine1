# Diamond inheritance
- Diamond inheritance is special type of inheritance when the class inherits from two classes which have same parrent.
When we draw this inheritance in chart, it looks like diamond, therefore we called it diamond inheritance.
```
			ClapTrap
           /      \
    ScavTrap      FlagTrap
           \      /
          DiamondTrap
```

- The main challenge here is that DiamondTrap inherits from both ScavTrap and FlagTrap, which both inherit from ClapTrap.
Without special handling, this would mean DiamondTrap gets two copies of ClapTrap's members - one through ScavTrap and one through FlagTrap.
This is where the keyword `virtual` comes in.