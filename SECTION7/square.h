
// extern "C"
// C++ 컴파일러에게
// 아래 함수가 C라고 알려준다.
//extern "C" int square(int a);

#ifdef __cplusplus
extern "C" {
#endif
    
     int square(int a);
     
#ifdef __cplusplus
}
#endif