# Modern-Physics-
A collection of programs revolving around Modern Physics to teach myself Special Relativity and Quantum Physics; As well as apply my C++ Programming knowledge practically. 

# Covered topics:
## Theory of Relativity:
Special relativity is a scientific theory of the relationship between space and time. In Albert Einstein's 1905 paper, "On the Electrodynamics of Moving Bodies", the theory is presented as being based on just two postulates: 
#### 1:
The laws of physics are invariant (identical) in all inertial frames of reference (that is, frames of reference with no acceleration). This is known as the principle of relativity.
#### 2:
The speed of light in vacuum is the same for all observers, regardless of the motion of light source or observer. This is known as the principle of light constancy, or the principle of light speed 
invariance.
#### Simply put,
The speed of light is always constant, and the laws of physics are invariant (identical) no matter how these laws are being applied; they simply don't change.

### Time Dilation:
Time dilation is the difference in elapsed time as measured by two clocks, either because of a relative velocity, a consequence of special relativity, or a difference in gravitational potential between their locations due to gravitational time dilation. When unspecified, "time dilation" usually refers to the effect due to velocity.
#### Gravitational Time Dilation:
Gravitational time dilation is a form of time dilation, an actual difference of elapsed time between two events, as measured by observers situated at varying distances from a gravitating mass. The lower the gravitational potential (the closer the clock is to the source of gravitation), the slower time passes, speeding up as the gravitational potential increases (the clock moving away from the source of gravitation). Albert Einstein originally predicted this in his theory of relativity, and it has since been confirmed by tests of general relativity.
#### GTD Formula in C++:
    double TOE = TIS * sqrt(1.0 - (2.0 * G * M) / (R * pow(c, 2))); 
#### Velocity Time Dilation:
An actual difference of how elapsed time between two events, as measured by observers situated at rest on earth and a space traveler traveling at a high velocity in space. The higher the velocity (the closer the vehicle is to the speed of light), the slower time passes, speeding up as the velocity decreases. Albert Einstein originally predicted this in his theory of relativity, and it has since been confirmed by tests of general relativity.
#### VTD Formula in C++:
    double timeo = tis / sqrt(1.0 - (pow(v,2) / pow(c,2)));
### Length Contraction:
Length contraction is the phenomenon that a moving object's length is measured to be shorter than its proper length, which is the length as measured in the object's own rest frame. It is also known as Lorentz contraction or Lorentz–FitzGerald contraction (after Hendrik Lorentz and George Francis FitzGerald) and is usually only noticeable at a substantial fraction of the speed of light. Length contraction is only measured in the direction in which the body is travelling. For normal objects, this effect is negligible at everyday speeds, and can be ignored for all regular purposes, only becoming significant as the object approaches the speed of light relative to the observer.
#### LC Formula in C++:
    double L = Lo * sqrt(1.0 - pow(v,2) / pow(c,2));
### Kinetic Energy:
In classical mechanics, the kinetic energy of a non-rotating object of mass m traveling at a speed v is 1 2 m v 2 {\textstyle {\frac {1}{2}}mv^{2}}.[2]. However, this doesn't apply to objects who's velocity is near the speed of light.
#### KE Formula in C++:
    double gamma = 1.0 / sqrt(1.0 - pow(v,2) / pow(c,2));
    double kinetic_energy = (gamma - 1.0) * m * pow(c,2);
