// Constructor
function Book(title, author, year) {
  console.log("Book Initialised..");
  this.title = title;
  this.author = author;
  this.year = year;
}

// getSummary - Prototype method
Book.prototype.getSummary = function () {
  return `${this.title} was written by ${this.author} in the year ${this.year}`;
};

// Magazine Constructor
function Magazine(title, author, year, month) {
  Book.call(this, title, author, year);

  this.month = month;
}

/** INHERITANCE
 *  Inheriting using 'Object.crete()'
 *  Inherit Prototype (prototype of Book)
 */
Magazine.prototype = Object.create(Book.prototype);

// Instantiate Magazine Object
const mag1 = new Magazine("Mag One", "John Doe", "2018", "Jan");
console.log(mag1);

console.log(mag1.getSummary());
