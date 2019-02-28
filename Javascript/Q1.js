// Question 1: Clean the room function: given an input
// of [1,2,4,591,392,391,2,5,10,2,1,1,1,20,20], make a function that
// organizes these into individual array that is ordered. For
// example answer(ArrayFromAbove) should return: [[1,1,1,1],[2,2,2],
// 4,5,10,[20,20], 391, 392,591]. Bonus: Make it so it organizes strings
// differently from number types. i.e. [1, "2", "3", 2] should
// return [[1,2], ["2", "3"]]

const cleanRoom = (array) => {
  let answer = [];
  // Sort array numerically
  array = array.sort((a,b) => a-b);
  let temp = [];
  for(let i = 0; i < array.length; i++) {
    if(array[i] === array[i+1]) {
      temp.push(array[i]);
    }
    else {
      temp.push(array[i]);
      temp.length === 1 ?
      answer.push(array[i]):answer.push(temp)
      temp = [];
    }
  }
  console.log(answer)
}

let array = [1,2,4,591,392,391,2,5,10,2,1,1,1,20,20];

cleanRoom(array);
