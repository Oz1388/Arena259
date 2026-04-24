# Reflection

## 1. What changes did you make?
I changed the Creature class information from public to private. Added getter for name, health and damage. Constructors now use initializer on takeDamage, attack and isAlive. A static is added for creatureCount. 

## 2. How did you improve encapsulation?
Health, name, and damage is encapsulized by making this private. Means those values cannot be changed and now have to use a getter!

## 3. Where did you use const and why?

I used const on the getters and isAlive because only need to be read data/information from the object and do not change the objects data.

## 4. What does your static member track?

The static member creatureCount tracks how many creatures(objects) have been created. Each time creatureCount runs it is increased by one (Increments, creatureCount++;)

## 5. What enhancement did you add and why?
I added a healing factor for the Giant Leech because leeches suck blood or life force of other creatures. Also it keeps track of what leeches do in the wild. Making it feel like a real Giant Leech!
