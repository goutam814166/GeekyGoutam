let myTodos ={
	day:'Monday',
	meeting:0,
	meetDone:0,
	}
let addMeeting=function(todo,meet=0){
	todo.meeting=todo.meeting+meet
}
 let meetDone = function(todo,meet=0)
 {
	 todo.meeting=todo.meetDone-meet;
 }
 let restDay= function(todo)
 {
	 todo.meeting=0
	 todo.meeDone=0
 }
 let getSummaryofDay=function(todo)
 {
	 let meetLeft=todo.meeting+todo.meetDone
	 return `You have ${meetLeft} meeting todo!`
 }
 addMeeting(myTodos,4)

addMeeting(myTodos,2)

meetDone(myTodos,5)

getSummaryofDay(myTodos)
console.log(myTodos);
console.log(getSummaryofDay(myTodos))