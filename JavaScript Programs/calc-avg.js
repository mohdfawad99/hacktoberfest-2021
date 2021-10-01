/**
 * Calculate the average of a list of numbers.
 *
 * @example
 * calculateAverage([1, 2, 3, 4, 5])  // Will return 3.
 * calculateAverage([1, "s", 3, 4, 5])  // Will throw error.
 *
 * @returns {number}
 *   The average.
 */

 function calculateAverage(list){
     if(!Array.isArray(list)){
         throw "Error: Please pass input as an array of integers.";
     }
     let sum = 0;
     list.forEach(item => {
         item = Number.parseFloat(item);
         if(isNaN(item)){
            throw "Error: Please pass input as an array of integers.";
         }
         sum += item;
     });
     return sum / list.length;
 }
console.log(calculateAverage([1, 2, 3, 4, 5]));
