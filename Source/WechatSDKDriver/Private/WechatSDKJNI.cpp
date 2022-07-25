#include "WechatSDKJNI.h"

#if PLATFORM_ANDROID
WechatSDKJNI::WechatSDKJNI() {
}

WechatSDKJNI::~WechatSDKJNI() {
}

//C++����javaʾ��(java���뾭��XXX...APL.xml�ļ���ֲ�뵽��GameActivity.java�С���Ϊ��java�����в���ʵ�ֶ�java���ļ�aar�ķ����ĵ���)
void WechatSDKJNI::CallTest() {

    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        bool bIsOptional = false;
        // 'FJavaWrapper::FindMethod' was defined in AndroidJNI.cpp
        static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "TestFunc", "()V", bIsOptional);
        // 'FJavaWrapper::CallVoidMethod' was defined in AndroidJNI.cpp
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test);

        /*
        * Ref URL1: https://blog.csdn.net/jiayizhenzhenyijia/article/details/106390109
        �����С�TestFunc��ΪҪ���õ�Java�����ĺ���������()V���Ƿ���ֵ�������ͣ�����ֵ����Ϊvoid�����������ͷ��Ŷ��ձ�������ʾ��
        sig����ʾ�⣺
        boolean��Z��
        byte��B ��
        char��C��
        short��S��
        int��I
        long��J��
        float��F��
        double��D��
        void��V��
        [����]��[����]
        Object����L���� / ����; �� ���� / ����$��ʶǶ����;
        ����(������ -> - ����Ӧ��sig)��
        void M0() -> - "()V"
        void M1(int A, int B) -> - "(II)V"
        void M2(String S) -> - "(Ljava/lang/String;)V"
        void M3(int[] I) -> - "([I)V"
        String M4(String S) -> - "(Ljava/lang/String;)Ljava/lang/String"
        long M5(int I, Class class) -> - "(ILjava/lang/Class;)J"
        void M6(long LONG) -> - "(J)V"
        */
        // If wanna to call method with arguments input and output, 
        // try 'CallObjectMethod/CallIntMethod/CallLongMethod/CallFloatMethod/CallDoubleMethod/CallBooleanMethod' with Args for input arguments
        // try 'CallObjectMethod/CallIntMethod/CallLongMethod/CallFloatMethod/CallDoubleMethod/CallBooleanMethod' for output argument 
        // Example: 'jsKey' as input argument
        /*
        static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "Log", "(Ljava/lang/String;)V", false);
        jstring jsKey = Env->NewStringUTF(TCHAR_TO_UTF8(*name));
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test, jsKey);
        */
    }
}

//C++����javaʾ��(java���뾭��XXX...APL.xml�ļ���ֲ�뵽��GameActivity.java�С���Ϊ��java�����в���ʵ�ֶ�java���ļ�aar�ķ����ĵ���)
void WechatSDKJNI::ShareTextToTimeline() {

    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        bool bIsOptional = false;
        // 'FJavaWrapper::FindMethod' was defined in AndroidJNI.cpp
        static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "ShareTextToTimeline", "()V", bIsOptional);
        // 'FJavaWrapper::CallVoidMethod' was defined in AndroidJNI.cpp
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test);

        /*
        * Ref URL1: https://blog.csdn.net/jiayizhenzhenyijia/article/details/106390109
        �����С�ShareTextToTimeline��ΪҪ���õ�Java�����ĺ���������()V���Ƿ���ֵ�������ͣ�����ֵ����Ϊvoid�����������ͷ��Ŷ��ձ�������ʾ��
        sig����ʾ�⣺
        boolean��Z��
        byte��B ��
        char��C��
        short��S��
        int��I
        long��J��
        float��F��
        double��D��
        void��V��
        [����]��[����]
        Object����L���� / ����; �� ���� / ����$��ʶǶ����;
        ����(������ -> - ����Ӧ��sig)��
        void M0() -> - "()V"
        void M1(int A, int B) -> - "(II)V"
        void M2(String S) -> - "(Ljava/lang/String;)V"
        void M3(int[] I) -> - "([I)V"
        String M4(String S) -> - "(Ljava/lang/String;)Ljava/lang/String"
        long M5(int I, Class class) -> - "(ILjava/lang/Class;)J"
        void M6(long LONG) -> - "(J)V"
        */
        // If wanna to call method with arguments input and output, 
        // try 'CallObjectMethod/CallIntMethod/CallLongMethod/CallFloatMethod/CallDoubleMethod/CallBooleanMethod' with Args for input arguments
        // try 'CallObjectMethod/CallIntMethod/CallLongMethod/CallFloatMethod/CallDoubleMethod/CallBooleanMethod' for output argument 
        // Example: 'jsKey' as input argument
        /*
        static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "Log", "(Ljava/lang/String;)V", false);
        jstring jsKey = Env->NewStringUTF(TCHAR_TO_UTF8(*name));
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test, jsKey);
        */

        //bool bIsOptional = false;
        //// 'FJavaWrapper::FindMethod' was defined in AndroidJNI.cpp
        //static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "SendTextToTimeline", "(Ljava/lang/String;)V", bIsOptional);
        //jstring jsKey = Env->NewStringUTF(TCHAR_TO_UTF8("SendTextToTimeline() demo dummy content"));
        //// 'FJavaWrapper::CallVoidMethod' was defined in AndroidJNI.cpp
        //FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test, jsKey);
    }
}

//C++����javaʾ��(java���뾭��XXX...APL.xml�ļ���ֲ�뵽��GameActivity.java�С���Ϊ��java�����в���ʵ�ֶ�java���ļ�aar�ķ����ĵ���)
void WechatSDKJNI::SendTextToTimeline(FString text) {
    //void WechatSDKJNI::SendTextToTimeline() {

    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        /*
        * Ref URL1: https://blog.csdn.net/jiayizhenzhenyijia/article/details/106390109
        �����С�ShareTextToTimeline��ΪҪ���õ�Java�����ĺ���������()V���Ƿ���ֵ�������ͣ�����ֵ����Ϊvoid�����������ͷ��Ŷ��ձ�������ʾ��
        sig����ʾ�⣺
        boolean��Z��
        byte��B ��
        char��C��
        short��S��
        int��I
        long��J��
        float��F��
        double��D��
        void��V��
        [����]��[����]
        Object����L���� / ����; �� ���� / ����$��ʶǶ����;
        ����(������ -> - ����Ӧ��sig)��
        void M0() -> - "()V"
        void M1(int A, int B) -> - "(II)V"
        void M2(String S) -> - "(Ljava/lang/String;)V"
        void M3(int[] I) -> - "([I)V"
        String M4(String S) -> - "(Ljava/lang/String;)Ljava/lang/String"
        long M5(int I, Class class) -> - "(ILjava/lang/Class;)J"
        void M6(long LONG) -> - "(J)V"
        */
        // If wanna to call method with arguments input and output, 
        // try 'CallObjectMethod/CallIntMethod/CallLongMethod/CallFloatMethod/CallDoubleMethod/CallBooleanMethod' with Args for input arguments
        // try 'CallObjectMethod/CallIntMethod/CallLongMethod/CallFloatMethod/CallDoubleMethod/CallBooleanMethod' for output argument 
        // Example: 'jsKey' as input argument
        /*
        static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "Log", "(Ljava/lang/String;)V", false);
        jstring jsKey = Env->NewStringUTF(TCHAR_TO_UTF8(*name));
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test, jsKey);
        */

        bool bIsOptional = false;
        // 'FJavaWrapper::FindMethod' was defined in AndroidJNI.cpp
        static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "SendTextToTimeline", "(Ljava/lang/String;)V", bIsOptional);
        //jstring jsKey = Env->NewStringUTF(TCHAR_TO_UTF8("SendTextToTimeline() demo dummy content"));
        jstring jsKey = Env->NewStringUTF(TCHAR_TO_UTF8(*text));
        // 'FJavaWrapper::CallVoidMethod' was defined in AndroidJNI.cpp
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test, jsKey);
    }
}

//C++����javaʾ��(java���뾭��XXX...APL.xml�ļ���ֲ�뵽��GameActivity.java�С���Ϊ��java�����в���ʵ�ֶ�java���ļ�aar�ķ����ĵ���)
FString WechatSDKJNI::Screenshot() {
    FString imagePath = "";

    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        /*
        * Ref URL1: https://blog.csdn.net/jiayizhenzhenyijia/article/details/106390109
        �����С�ShareTextToTimeline��ΪҪ���õ�Java�����ĺ���������()V���Ƿ���ֵ�������ͣ�����ֵ����Ϊvoid�����������ͷ��Ŷ��ձ�������ʾ��
        sig����ʾ�⣺
        boolean��Z��
        byte��B ��
        char��C��
        short��S��
        int��I
        long��J��
        float��F��
        double��D��
        void��V��
        [����]��[����]
        Object����L���� / ����; �� ���� / ����$��ʶǶ����;
        ����(������ -> - ����Ӧ��sig)��
        void M0() -> - "()V"
        void M1(int A, int B) -> - "(II)V"
        void M2(String S) -> - "(Ljava/lang/String;)V"
        void M3(int[] I) -> - "([I)V"
        String M4(String S) -> - "(Ljava/lang/String;)Ljava/lang/String"
        long M5(int I, Class class) -> - "(ILjava/lang/Class;)J"
        void M6(long LONG) -> - "(J)V"
        */
        // If wanna to call method with arguments input and output, 
        // try 'CallObjectMethod/CallIntMethod/CallLongMethod/CallFloatMethod/CallDoubleMethod/CallBooleanMethod' with Args for input arguments
        // try 'CallObjectMethod/CallIntMethod/CallLongMethod/CallFloatMethod/CallDoubleMethod/CallBooleanMethod' for output argument 
        // Example: 'jsKey' as input argument
        /*
        static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "Log", "(Ljava/lang/String;)V", false);
        jstring jsKey = Env->NewStringUTF(TCHAR_TO_UTF8(*name));
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test, jsKey);
        */

        bool bIsOptional = false;
        // 'FJavaWrapper::FindMethod' was defined in AndroidJNI.cpp
        static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "Screenshot", "()Ljava/lang/String", bIsOptional);
        // 'FJavaWrapper::CallVoidMethod' was defined in AndroidJNI.cpp
        jstring JstringResult = (jstring)FJavaWrapper::CallObjectMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test);

        // Convert jstring to FString(Ref URL: https://www.cnblogs.com/FlyingZiming/p/14573209.html)
        if (!Env || !JstringResult || Env->IsSameObject(JstringResult, NULL))
        {
            return {};
        }

        const auto chars = Env->GetStringUTFChars(JstringResult, 0);
        FString ReturnString(UTF8_TO_TCHAR(chars));
        Env->ReleaseStringUTFChars(JstringResult, chars);
        imagePath = ReturnString;

        return imagePath;
    }

    return {};
}

//C++����javaʾ��(java���뾭��XXX...APL.xml�ļ���ֲ�뵽��GameActivity.java�С���Ϊ��java�����в���ʵ�ֶ�java���ļ�aar�ķ����ĵ���)
void WechatSDKJNI::SendImageToTimeline(FString imagePath) {
    //void WechatSDKJNI::SendTextToTimeline() {

    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        /*
        * Ref URL1: https://blog.csdn.net/jiayizhenzhenyijia/article/details/106390109
        �����С�ShareTextToTimeline��ΪҪ���õ�Java�����ĺ���������()V���Ƿ���ֵ�������ͣ�����ֵ����Ϊvoid�����������ͷ��Ŷ��ձ�������ʾ��
        sig����ʾ�⣺
        boolean��Z��
        byte��B ��
        char��C��
        short��S��
        int��I
        long��J��
        float��F��
        double��D��
        void��V��
        [����]��[����]
        Object����L���� / ����; �� ���� / ����$��ʶǶ����;
        ����(������ -> - ����Ӧ��sig)��
        void M0() -> - "()V"
        void M1(int A, int B) -> - "(II)V"
        void M2(String S) -> - "(Ljava/lang/String;)V"
        void M3(int[] I) -> - "([I)V"
        String M4(String S) -> - "(Ljava/lang/String;)Ljava/lang/String"
        long M5(int I, Class class) -> - "(ILjava/lang/Class;)J"
        void M6(long LONG) -> - "(J)V"
        */
        // If wanna to call method with arguments input and output, 
        // try 'CallObjectMethod/CallIntMethod/CallLongMethod/CallFloatMethod/CallDoubleMethod/CallBooleanMethod' with Args for input arguments
        // try 'CallObjectMethod/CallIntMethod/CallLongMethod/CallFloatMethod/CallDoubleMethod/CallBooleanMethod' for output argument 
        // Example: 'jsKey' as input argument
        /*
        static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "Log", "(Ljava/lang/String;)V", false);
        jstring jsKey = Env->NewStringUTF(TCHAR_TO_UTF8(*name));
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test, jsKey);
        */

        bool bIsOptional = false;
        // 'FJavaWrapper::FindMethod' was defined in AndroidJNI.cpp
        static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "SendImageToTimeline", "(Ljava/lang/String;)V", bIsOptional);
        //jstring jsKey = Env->NewStringUTF(TCHAR_TO_UTF8("SendTextToTimeline() demo dummy content"));
        jstring jsKey = Env->NewStringUTF(TCHAR_TO_UTF8(*imagePath));
        // 'FJavaWrapper::CallVoidMethod' was defined in AndroidJNI.cpp
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test, jsKey);
    }
}

//C++����javaʾ��(java���뾭��XXX...APL.xml�ļ���ֲ�뵽��GameActivity.java�С���Ϊ��java�����в���ʵ�ֶ�java���ļ�aar�ķ����ĵ���)
void WechatSDKJNI::InitWechatSdk(FString wechatAppId) {
    //void WechatSDKJNI::SendTextToTimeline() {

    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        /*
        * Ref URL1: https://blog.csdn.net/jiayizhenzhenyijia/article/details/106390109
        �����С�ShareTextToTimeline��ΪҪ���õ�Java�����ĺ���������()V���Ƿ���ֵ�������ͣ�����ֵ����Ϊvoid�����������ͷ��Ŷ��ձ�������ʾ��
        sig����ʾ�⣺
        boolean��Z��
        byte��B ��
        char��C��
        short��S��
        int��I
        long��J��
        float��F��
        double��D��
        void��V��
        [����]��[����]
        Object����L���� / ����; �� ���� / ����$��ʶǶ����;
        ����(������ -> - ����Ӧ��sig)��
        void M0() -> - "()V"
        void M1(int A, int B) -> - "(II)V"
        void M2(String S) -> - "(Ljava/lang/String;)V"
        void M3(int[] I) -> - "([I)V"
        String M4(String S) -> - "(Ljava/lang/String;)Ljava/lang/String"
        long M5(int I, Class class) -> - "(ILjava/lang/Class;)J"
        void M6(long LONG) -> - "(J)V"
        */
        // If wanna to call method with arguments input and output, 
        // try 'CallObjectMethod/CallIntMethod/CallLongMethod/CallFloatMethod/CallDoubleMethod/CallBooleanMethod' with Args for input arguments
        // try 'CallObjectMethod/CallIntMethod/CallLongMethod/CallFloatMethod/CallDoubleMethod/CallBooleanMethod' for output argument 
        // Example: 'jsKey' as input argument
        /*
        static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "Log", "(Ljava/lang/String;)V", false);
        jstring jsKey = Env->NewStringUTF(TCHAR_TO_UTF8(*name));
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test, jsKey);
        */

        bool bIsOptional = false;
        // 'FJavaWrapper::FindMethod' was defined in AndroidJNI.cpp
        static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "InitWechatSdk", "(Ljava/lang/String;)V", bIsOptional);
        //jstring jsKey = Env->NewStringUTF(TCHAR_TO_UTF8("SendTextToTimeline() demo dummy content"));
        jstring jsKey = Env->NewStringUTF(TCHAR_TO_UTF8(*wechatAppId));
        // 'FJavaWrapper::CallVoidMethod' was defined in AndroidJNI.cpp
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test, jsKey);
    }
}

#endif
