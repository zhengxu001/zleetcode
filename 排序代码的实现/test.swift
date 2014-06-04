//Swift的常量与变量
var a = 1
a = 10
var b = 2

let c = a+b

println(c)



//Swift语言的类型
var str = "Hello"
var s:String = "World"
var i:Int = 100
var words:String = "zhengxu"
//xcode 编译器分析代码不是太好

println(str)


//Swift语言的字符串连接
var str = "Hello"
var i = 200
str = str + "World"
str = str + 100//error
str = "\(str),asdhajdh,\(100)"\\ok
str = "\(str),asdhajdh,\(i)"\\ok
//很有创意的字符串连接方式
 
println(str)



//Swift语言的数组
var arr = ["Hello","World",1,3.14]

println(arr)

var arr1 = [] //空数组
var arr2 = String[]() //存放特定类型的数组

//Swift语言的字典
var dict = ["name":"zen","age":"16"]

dict["sex"] = "Male" 

println(dict)
println(dict["name"])
//灵活

//语言的循环
var arr = String[]()

for index in 0..100{
    arr.append("Item \(index)")
}

println(arr)

for value in arr{
    println(value)
}

var i = 0
while i < arr.count{    
    println(arr[i])
    i++
}
//以上三种循环效果一样

var dict = ["name":"zen","age":"21"]

for(key,value) in dict{
    println("\(key),\(value)")
}


//Swift语言的流程控制(判断分支)

for index in 0..100{
    if index%2==0 {
	println(index)
    }
}

var myName:String?="zen"//可选变量

if let name=myName {
    println("Hello \(name)")
}


//Swift语言的函数 

func sayHello(name:String){
    println("Hello \(name)")
}

sayHello("zen")

函数返回多个值!!!!!!

func getNums()->(Int,Int){
    return (2,3)
}

let (a,b) = getNums()
println(a)

var fun = sayHello
fun("zen")



//Swift语言的面向对象
class Hi{
    func sayHi(){
	println("Hi zen")
    }
}

//继承与重写
class Hello:Hi{
    override func sayHi(){
	println("zen Hello")
    }
}

var hi = Hi()
hi.sayHi()




