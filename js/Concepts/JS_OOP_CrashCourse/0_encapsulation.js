// Procedural Programming
let base = 30000;
let bonus = 20000;

function getWage(bsae, bonus) {
  return base + bonus;
}
console.log(getWage(base, bonus));

// Object Oriented Programming (Objects)
// ENCAPSULATION
let employee = {
  base: 30000,
  bonus: 20000,
  getWage: function () {
    return this.base + this.bonus;
  },
};
console.log(employee.getWage());
