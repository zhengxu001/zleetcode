//Swift�ĳ��������
var a = 1
a = 10
var b = 2

let c = a+b

println(c)



//Swift���Ե�����
var str = "Hello"
var s:String = "World"
var i:Int = 100
var words:String = "zhengxu"
//xcode �������������벻��̫��

println(str)


//Swift���Ե��ַ�������
var str = "Hello"
var i = 200
str = str + "World"
str = str + 100//error
str = "\(str),asdhajdh,\(100)"\\ok
str = "\(str),asdhajdh,\(i)"\\ok
//���д�����ַ������ӷ�ʽ
 
println(str)



//Swift���Ե�����
var arr = ["Hello","World",1,3.14]

println(arr)

var arr1 = [] //������
var arr2 = String[]() //����ض����͵�����

//Swift���Ե��ֵ�
var dict = ["name":"zen","age":"16"]

dict["sex"] = "Male" 

println(dict)
println(dict["name"])
//���

//���Ե�ѭ��
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
//��������ѭ��Ч��һ��

var dict = ["name":"zen","age":"21"]

for(key,value) in dict{
    println("\(key),\(value)")
}


//Swift���Ե����̿���(�жϷ�֧)

for index in 0..100{
    if index%2==0 {
	println(index)
    }
}

var myName:String?="zen"//��ѡ����

if let name=myName {
    println("Hello \(name)")
}


//Swift���Եĺ��� 

func sayHello(name:String){
    println("Hello \(name)")
}

sayHello("zen")

�������ض��ֵ!!!!!!

func getNums()->(Int,Int){
    return (2,3)
}

let (a,b) = getNums()
println(a)

var fun = sayHello
fun("zen")



//Swift���Ե��������
class Hi{
    func sayHi(){
	println("Hi zen")
    }
}

//�̳�����д
class Hello:Hi{
    override func sayHi(){
	println("zen Hello")
    }
}

var hi = Hi()
hi.sayHi()




