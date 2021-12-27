    // Thermal expansion coefficient [1/K]
    Info<< "\nReading Pr " << endl;
    dimensionedScalar Pr(viscosity->lookup("Pr"));
    Info<< "\nReading Prt " << endl;
    // Turbulent Prandtl number
    dimensionedScalar Prt(viscosity->lookup("Prt"));
    Info<< "\nReading Cp0 " << endl;
    // Heat capacity
    dimensionedScalar Cp0(viscosity->lookup("Cp0"));
    Info<< "\nReading rho0 " << endl;
    // Fluid density
    dimensionedScalar rho0(viscosity->lookup("rho0"));
