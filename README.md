# Tristate Logic Circuits


---


## Introduction

This repository (TLC) is a spinoff of my earlier work on logic circuits. That repository is called AbstractLogicCircuits
(ALC), and may end up receiving more input, but for now, I've decided to shift my focus over here.

So what is a Tri-State Input? Well for now, let's just stick with what we're doing in the code. In real life, a 
tri-state logic gate will have an ON output, and OFF output, and a DISABLED output. Essentially, when the enable input
of the Tri-State input is set to high, the output of the gate is DISABLED.

So remember, instead of having true or false, or 1 or 0; we'll be having OFF, ON, and DISABLED. 

## Logic Gates

### Tri State Buffer Gate

The Tri-State Buffer Gate is the foundation for this whole thing. When analysing images online of memory circuits, aka 
RAM, it almost always includes some sort of Tri-State Buffer setup. The reason is, if you just, say, use an AND gate, 
instead of a Tri-State Buffer Gate, when you switch your write enable to low, it will actually be writing the states of 
your D-FlipFlops / Latches to false, when you want their state to be preserved. 

I will have to write in some extra logic to include this disabled state. I figured since an entire redesign was
necessary, I would create a whole new project, and try to make some revisions as I go along. 

## Decoders


## Memory