﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_tEB4537E121ED7128292F5E49486823EB846576FE;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<Sound>
struct Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// Sound[]
struct SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// AudioManager
struct AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BallChaser
struct BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0;
// BallSettings
struct BallSettings_tF6E80FEBEA71ED76CC5494DAB0AA07765D6D9DDD;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraMover
struct CameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7;
// CameraNudge
struct CameraNudge_tBAD456E428F966679846B40471521A4896503D20;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CoinBehavior
struct CoinBehavior_t723253102B555C08A8E714AA65B03B96AC36524F;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Conveyor
struct Conveyor_t8A51756DBAC36FC26AC25A1202A355165222F05D;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// CreditsScroll
struct CreditsScroll_t80B888C688D3294B00701B5BE2F04954C4097820;
// CustomizedTankManager
struct CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A;
// Customizer
struct Customizer_t900A35AA9BEDFCF1190CB9FB56693B1D76B71914;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Elevator
struct Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E;
// ExplosionDissipate
struct ExplosionDissipate_t54631AF601297033AA8D43E0069B19E94F4A5472;
// FanPush
struct FanPush_tA951F229A361BE30AB64EFCCFD008A3CD25DF2EC;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GolfHole
struct GolfHole_t2D3C773014FC80E0CD3EED1CFE4A97F353816827;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// HeadManager
struct HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// LevelData
struct LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A;
// LevelSelectManager
struct LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58;
// MainElevator
struct MainElevator_t594A71E12455EB053FBEEB751540E274F0F1BF51;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuManager
struct MenuManager_tD52BB657312ED53913E423A985CACC86F900124C;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MilitaryTankUI
struct MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OutofBounds
struct OutofBounds_t1A6BD6295712FB12F161A4E09AF6FCE96092EE23;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// Rotate
struct Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Sand
struct Sand_tCCCADCA1E08FB833B428151FCBD533F723C155CD;
// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// Sound
struct Sound_tF983595F9C621A86B56E05F9778810369E90A0FE;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// StarUpProcess
struct StarUpProcess_tF1E82E0D3882535952A8C97B3BCEF3077E13D3BF;
// System.String
struct String_t;
// TankUI
struct TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08;
// TeleportDissipate
struct TeleportDissipate_t04FF60E2EDE635C984E97DDAD0611803F094C82F;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// TextPurge4
struct TextPurge4_t3FE660073B8143042DFDC938A45E2E91C30ACEFC;
// TextPurgeScript1
struct TextPurgeScript1_t1D4B6D4604B1B60E85747F816C49001B9D7D340F;
// TextPurger2
struct TextPurger2_tB3F45C4271304B274D8C0326025641F24AFB431A;
// TextPurger3
struct TextPurger3_t676B22EDB34C1A02896E93B965ED7F39894FA8DF;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UIWiggle
struct UIWiggle_tD03AD9DC74D28D7AC244B8E8A8F73CECE79FCE78;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// WindChanger
struct WindChanger_tD64A2E22CD06A94DD92472673E664EA8FD6AAC0F;
// tutorialtext
struct tutorialtext_t63C6A96BE48D1A5E3EB914F01C6E9EF6DA794A5E;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// AudioManager/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t8BF290F40814A816D4B9EB266488218E96B9F751;
// AudioManager/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t7AEE78B6AD4458F444C79772703B864DB9257CE1;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// ExplosionDissipate/<DestructionCountdown>d__1
struct U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// MilitaryTankUI/<ScreenShake>d__63
struct U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// TankUI/<ScreenShake>d__60
struct U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4;
// TeleportDissipate/<DestructionCountdown>d__1
struct U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t8BF290F40814A816D4B9EB266488218E96B9F751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t7AEE78B6AD4458F444C79772703B864DB9257CE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral11B6E13DC6549F08170CC78DAB7988B540030884;
IL2CPP_EXTERN_C String_t* _stringLiteral14E90B9C92D2811F01D6D3722E851CAA0E563AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral189955CDBD1BC487E61591A4724B1BB433DB070E;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8D69953E1EC34DB70256CECB70604C59BCE820;
IL2CPP_EXTERN_C String_t* _stringLiteral2209FE8C05DED064D3803A9A7B3C88406726B1F8;
IL2CPP_EXTERN_C String_t* _stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615;
IL2CPP_EXTERN_C String_t* _stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A;
IL2CPP_EXTERN_C String_t* _stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28;
IL2CPP_EXTERN_C String_t* _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74;
IL2CPP_EXTERN_C String_t* _stringLiteral321C988ADEFD54C8389B79A4FB6D4E83B0AA79D5;
IL2CPP_EXTERN_C String_t* _stringLiteral3632213D60B5C0CA9BD6FD44599110D0BAC3DBF8;
IL2CPP_EXTERN_C String_t* _stringLiteral42331E0BE5113116CC9FC93123A5A17A0B269776;
IL2CPP_EXTERN_C String_t* _stringLiteral488AFFD1B4F87A447F078869FB10399780A338D7;
IL2CPP_EXTERN_C String_t* _stringLiteral490A3D896B64BA8F7AC1084B6336DC665EE1E3EA;
IL2CPP_EXTERN_C String_t* _stringLiteral4D831F59C2C7F47DD63B72A7703AD8E3312FB823;
IL2CPP_EXTERN_C String_t* _stringLiteral514A8AD09809280423A1825FBE8D19B2AB1AD4F4;
IL2CPP_EXTERN_C String_t* _stringLiteral514C5B323EB8FE02AD37D6142C456C4BFE073CA4;
IL2CPP_EXTERN_C String_t* _stringLiteral577DDC14703310DA10F7B7338964154C73A53042;
IL2CPP_EXTERN_C String_t* _stringLiteral5AECF0377C1CBC5351D8AC05FD10EDD525281DE8;
IL2CPP_EXTERN_C String_t* _stringLiteral5E695981582357762AA73756E8B4E67C77308A9E;
IL2CPP_EXTERN_C String_t* _stringLiteral5EDDF6581C5186203CC789B1C79B8AF98B0D19F4;
IL2CPP_EXTERN_C String_t* _stringLiteral6E49491A9DA0CD647B730DEC544E4BB39EC92214;
IL2CPP_EXTERN_C String_t* _stringLiteral714763C257BF1E75FAA1B7530BD502E025037B9E;
IL2CPP_EXTERN_C String_t* _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287;
IL2CPP_EXTERN_C String_t* _stringLiteral7976B8660EF1C71B6EE59C5AD2D870287AEB2474;
IL2CPP_EXTERN_C String_t* _stringLiteral7D44B231B21B8C5C862F11B3FD9AC3DE7AFCCC78;
IL2CPP_EXTERN_C String_t* _stringLiteral839C18A0BEC63009A14890191EE768A6A9613660;
IL2CPP_EXTERN_C String_t* _stringLiteral85323CB03618186B17428D8A0E612ADF774ABC3A;
IL2CPP_EXTERN_C String_t* _stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D;
IL2CPP_EXTERN_C String_t* _stringLiteral9116BDDA0E335D184074AC97C8BDD9AB1178F0BE;
IL2CPP_EXTERN_C String_t* _stringLiteral91C0C3D47449DB2E96449F1DAA6C34E8FCC2A37D;
IL2CPP_EXTERN_C String_t* _stringLiteral98BD5F80B9DB46BE38DCEAA0C64AF7C7EAB4F861;
IL2CPP_EXTERN_C String_t* _stringLiteral9A6AE81AF5DB57C61F4BA8BB6F35E91FC3627883;
IL2CPP_EXTERN_C String_t* _stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008;
IL2CPP_EXTERN_C String_t* _stringLiteral9F15E73C308C9440A4A66E65A54F37A6862F5072;
IL2CPP_EXTERN_C String_t* _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9;
IL2CPP_EXTERN_C String_t* _stringLiteralAFECE5150801691657425A6EE0640B8DC6472AF3;
IL2CPP_EXTERN_C String_t* _stringLiteralB5EBE74694A4C500E846D09A534F475E0415C6AD;
IL2CPP_EXTERN_C String_t* _stringLiteralBE62BA2E489D4C16B62A554813DDDCBF139574B1;
IL2CPP_EXTERN_C String_t* _stringLiteralBF115D5CF569C35D177A246D56167C686E41FFD8;
IL2CPP_EXTERN_C String_t* _stringLiteralC32EADFF94258C3734CED2CDE70F4733B9D5611A;
IL2CPP_EXTERN_C String_t* _stringLiteralD8224EB348914F18B459158B0498D27694A7CD12;
IL2CPP_EXTERN_C String_t* _stringLiteralDF4E5C44812D75AB3C52AB9CBE4D316AC514BE09;
IL2CPP_EXTERN_C String_t* _stringLiteralE6E50D3F729B11B2ABE38C96352EB1059A766059;
IL2CPP_EXTERN_C String_t* _stringLiteralE79C7DF47D031C1FC396033A357222754FA04713;
IL2CPP_EXTERN_C String_t* _stringLiteralE9BAE9F05831E99523DAFF4E1B43454063ABEB53;
IL2CPP_EXTERN_C String_t* _stringLiteralEF516EC7240CA160FD729299C926B5EDB246658A;
IL2CPP_EXTERN_C String_t* _stringLiteralEF7A908D7C7540D46C3BE678108BD0E90CB40F36;
IL2CPP_EXTERN_C String_t* _stringLiteralF74D191D01BEC20EB701B3871DDEC4E6FD8E1D7B;
IL2CPP_EXTERN_C String_t* _stringLiteralF7C6AB4490BFC58BDF6C531AAA10E7E2DE8FA42E;
IL2CPP_EXTERN_C String_t* _stringLiteralF94DD8519E30121BEBF6D4CF302100709E67C26B;
IL2CPP_EXTERN_C String_t* _stringLiteralFD69796AFCAE5DA2487132D2132AFC2BC3AB2532;
IL2CPP_EXTERN_C String_t* _stringLiteralFE9CF4F5F1568CDA638D37DDEBDFBB20FAAAF055;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisSound_tF983595F9C621A86B56E05F9778810369E90A0FE_m22DF23BD135E45E3AE095E0447BF106DFC09AF17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BallChaser_OnSceneLoaded_mEB26340D33C1F086561E0EF74EC3CF8CBD64C253_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7_m625C01A7AB0D19238D3BD3081BD6FD38A7101207_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A_m927FB09BF7CC9572009BC0FAE0E0329BFEFFFA11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_mDB85AB7B0E848FB670787AACE9F6412274FDDCD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0_mC9399A70630B7AA20D42A414A2B1C47CD05336E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A_m5AE06FE0ABBA1DFFED858F575F037A7EB7489F8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisElevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E_mA221C4837CC08314152B7C39AD36DA6441CACF6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m525EA90F66B89CBDB092C15CE0CBE4480F723A6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m41E2A799648B173ADBE5EC11BC96DC086099D80B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDestructionCountdownU3Ed__1_System_Collections_IEnumerator_Reset_mC288820DF9D6BD911FEBDB633044B36EBBC48F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDestructionCountdownU3Ed__1_System_Collections_IEnumerator_Reset_mEDCB12ED333D3676765C79F96813C4F5469D6FD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CScreenShakeU3Ed__60_System_Collections_IEnumerator_Reset_m65ED823C5A7AB857CE656D0808D3A1B1BF015CD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CScreenShakeU3Ed__63_System_Collections_IEnumerator_Reset_mA8E3F8BD2DC9F9037055B62AEC2D8F8460C4A393_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CPlaySoundU3Eb__0_mEB933D1FF483D0DE9BE5C7F50C006F4747062A89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CStopSoundU3Eb__0_mF04D158913C8E80FDE618C87EF1CDE8D7C00D117_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Sound
struct Sound_tF983595F9C621A86B56E05F9778810369E90A0FE  : public RuntimeObject
{
public:
	// System.String Sound::Name
	String_t* ___Name_0;
	// UnityEngine.AudioClip Sound::Audio
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Audio_1;
	// System.Single Sound::volume
	float ___volume_2;
	// System.Single Sound::pitch
	float ___pitch_3;
	// UnityEngine.AudioSource Sound::Source
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___Source_4;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Sound_tF983595F9C621A86B56E05F9778810369E90A0FE, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Audio_1() { return static_cast<int32_t>(offsetof(Sound_tF983595F9C621A86B56E05F9778810369E90A0FE, ___Audio_1)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Audio_1() const { return ___Audio_1; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Audio_1() { return &___Audio_1; }
	inline void set_Audio_1(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Audio_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Audio_1), (void*)value);
	}

	inline static int32_t get_offset_of_volume_2() { return static_cast<int32_t>(offsetof(Sound_tF983595F9C621A86B56E05F9778810369E90A0FE, ___volume_2)); }
	inline float get_volume_2() const { return ___volume_2; }
	inline float* get_address_of_volume_2() { return &___volume_2; }
	inline void set_volume_2(float value)
	{
		___volume_2 = value;
	}

	inline static int32_t get_offset_of_pitch_3() { return static_cast<int32_t>(offsetof(Sound_tF983595F9C621A86B56E05F9778810369E90A0FE, ___pitch_3)); }
	inline float get_pitch_3() const { return ___pitch_3; }
	inline float* get_address_of_pitch_3() { return &___pitch_3; }
	inline void set_pitch_3(float value)
	{
		___pitch_3 = value;
	}

	inline static int32_t get_offset_of_Source_4() { return static_cast<int32_t>(offsetof(Sound_tF983595F9C621A86B56E05F9778810369E90A0FE, ___Source_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_Source_4() const { return ___Source_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_Source_4() { return &___Source_4; }
	inline void set_Source_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___Source_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Source_4), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// AudioManager/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t8BF290F40814A816D4B9EB266488218E96B9F751  : public RuntimeObject
{
public:
	// System.String AudioManager/<>c__DisplayClass2_0::SoundName
	String_t* ___SoundName_0;

public:
	inline static int32_t get_offset_of_SoundName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t8BF290F40814A816D4B9EB266488218E96B9F751, ___SoundName_0)); }
	inline String_t* get_SoundName_0() const { return ___SoundName_0; }
	inline String_t** get_address_of_SoundName_0() { return &___SoundName_0; }
	inline void set_SoundName_0(String_t* value)
	{
		___SoundName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SoundName_0), (void*)value);
	}
};


// AudioManager/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t7AEE78B6AD4458F444C79772703B864DB9257CE1  : public RuntimeObject
{
public:
	// System.String AudioManager/<>c__DisplayClass3_0::SoundName
	String_t* ___SoundName_0;

public:
	inline static int32_t get_offset_of_SoundName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t7AEE78B6AD4458F444C79772703B864DB9257CE1, ___SoundName_0)); }
	inline String_t* get_SoundName_0() const { return ___SoundName_0; }
	inline String_t** get_address_of_SoundName_0() { return &___SoundName_0; }
	inline void set_SoundName_0(String_t* value)
	{
		___SoundName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SoundName_0), (void*)value);
	}
};


// ExplosionDissipate/<DestructionCountdown>d__1
struct U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185  : public RuntimeObject
{
public:
	// System.Int32 ExplosionDissipate/<DestructionCountdown>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExplosionDissipate/<DestructionCountdown>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ExplosionDissipate ExplosionDissipate/<DestructionCountdown>d__1::<>4__this
	ExplosionDissipate_t54631AF601297033AA8D43E0069B19E94F4A5472 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185, ___U3CU3E4__this_2)); }
	inline ExplosionDissipate_t54631AF601297033AA8D43E0069B19E94F4A5472 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ExplosionDissipate_t54631AF601297033AA8D43E0069B19E94F4A5472 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ExplosionDissipate_t54631AF601297033AA8D43E0069B19E94F4A5472 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TeleportDissipate/<DestructionCountdown>d__1
struct U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695  : public RuntimeObject
{
public:
	// System.Int32 TeleportDissipate/<DestructionCountdown>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TeleportDissipate/<DestructionCountdown>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TeleportDissipate TeleportDissipate/<DestructionCountdown>d__1::<>4__this
	TeleportDissipate_t04FF60E2EDE635C984E97DDAD0611803F094C82F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695, ___U3CU3E4__this_2)); }
	inline TeleportDissipate_t04FF60E2EDE635C984E97DDAD0611803F094C82F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TeleportDissipate_t04FF60E2EDE635C984E97DDAD0611803F094C82F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TeleportDissipate_t04FF60E2EDE635C984E97DDAD0611803F094C82F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.ForceMode
struct ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// CoinBehavior/TypeString
struct TypeString_t05B3E89F98DAD88518CA1261CDE8619D75EA781D 
{
public:
	// System.Int32 CoinBehavior/TypeString::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeString_t05B3E89F98DAD88518CA1261CDE8619D75EA781D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MilitaryTankUI/<ScreenShake>d__63
struct U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3  : public RuntimeObject
{
public:
	// System.Int32 MilitaryTankUI/<ScreenShake>d__63::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MilitaryTankUI/<ScreenShake>d__63::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MilitaryTankUI MilitaryTankUI/<ScreenShake>d__63::<>4__this
	MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * ___U3CU3E4__this_2;
	// System.Single MilitaryTankUI/<ScreenShake>d__63::<duration>5__2
	float ___U3CdurationU3E5__2_3;
	// UnityEngine.Vector3 MilitaryTankUI/<ScreenShake>d__63::<startPosition>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CstartPositionU3E5__3_4;
	// System.Single MilitaryTankUI/<ScreenShake>d__63::<elapsedTime>5__4
	float ___U3CelapsedTimeU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3, ___U3CU3E4__this_2)); }
	inline MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdurationU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3, ___U3CdurationU3E5__2_3)); }
	inline float get_U3CdurationU3E5__2_3() const { return ___U3CdurationU3E5__2_3; }
	inline float* get_address_of_U3CdurationU3E5__2_3() { return &___U3CdurationU3E5__2_3; }
	inline void set_U3CdurationU3E5__2_3(float value)
	{
		___U3CdurationU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CstartPositionU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3, ___U3CstartPositionU3E5__3_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CstartPositionU3E5__3_4() const { return ___U3CstartPositionU3E5__3_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CstartPositionU3E5__3_4() { return &___U3CstartPositionU3E5__3_4; }
	inline void set_U3CstartPositionU3E5__3_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CstartPositionU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3, ___U3CelapsedTimeU3E5__4_5)); }
	inline float get_U3CelapsedTimeU3E5__4_5() const { return ___U3CelapsedTimeU3E5__4_5; }
	inline float* get_address_of_U3CelapsedTimeU3E5__4_5() { return &___U3CelapsedTimeU3E5__4_5; }
	inline void set_U3CelapsedTimeU3E5__4_5(float value)
	{
		___U3CelapsedTimeU3E5__4_5 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Scrollbar/Direction
struct Direction_tCE7C4B78403A18007E901268411DB754E7B784B7 
{
public:
	// System.Int32 UnityEngine.UI.Scrollbar/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tCE7C4B78403A18007E901268411DB754E7B784B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TankUI/<ScreenShake>d__60
struct U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4  : public RuntimeObject
{
public:
	// System.Int32 TankUI/<ScreenShake>d__60::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TankUI/<ScreenShake>d__60::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TankUI TankUI/<ScreenShake>d__60::<>4__this
	TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * ___U3CU3E4__this_2;
	// System.Single TankUI/<ScreenShake>d__60::<duration>5__2
	float ___U3CdurationU3E5__2_3;
	// UnityEngine.Vector3 TankUI/<ScreenShake>d__60::<startPosition>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CstartPositionU3E5__3_4;
	// System.Single TankUI/<ScreenShake>d__60::<elapsedTime>5__4
	float ___U3CelapsedTimeU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4, ___U3CU3E4__this_2)); }
	inline TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdurationU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4, ___U3CdurationU3E5__2_3)); }
	inline float get_U3CdurationU3E5__2_3() const { return ___U3CdurationU3E5__2_3; }
	inline float* get_address_of_U3CdurationU3E5__2_3() { return &___U3CdurationU3E5__2_3; }
	inline void set_U3CdurationU3E5__2_3(float value)
	{
		___U3CdurationU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CstartPositionU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4, ___U3CstartPositionU3E5__3_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CstartPositionU3E5__3_4() const { return ___U3CstartPositionU3E5__3_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CstartPositionU3E5__3_4() { return &___U3CstartPositionU3E5__3_4; }
	inline void set_U3CstartPositionU3E5__3_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CstartPositionU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4, ___U3CelapsedTimeU3E5__4_5)); }
	inline float get_U3CelapsedTimeU3E5__4_5() const { return ___U3CelapsedTimeU3E5__4_5; }
	inline float* get_address_of_U3CelapsedTimeU3E5__4_5() { return &___U3CelapsedTimeU3E5__4_5; }
	inline void set_U3CelapsedTimeU3E5__4_5(float value)
	{
		___U3CelapsedTimeU3E5__4_5 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Predicate`1<Sound>
struct Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// AudioManager
struct AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Sound[] AudioManager::Sounds
	SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* ___Sounds_4;

public:
	inline static int32_t get_offset_of_Sounds_4() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148, ___Sounds_4)); }
	inline SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* get_Sounds_4() const { return ___Sounds_4; }
	inline SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF** get_address_of_Sounds_4() { return &___Sounds_4; }
	inline void set_Sounds_4(SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* value)
	{
		___Sounds_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sounds_4), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BallChaser
struct BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject BallChaser::CurrentBall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CurrentBall_4;
	// UnityEngine.GameObject BallChaser::Tank
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Tank_5;
	// System.Boolean BallChaser::LevelPreview
	bool ___LevelPreview_6;
	// System.Boolean BallChaser::FollowingBall
	bool ___FollowingBall_7;
	// UnityEngine.GameObject BallChaser::HolePoint
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___HolePoint_8;
	// UnityEngine.GameObject BallChaser::TankPoint
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TankPoint_9;
	// UnityEngine.GameObject BallChaser::Buffer1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Buffer1_10;
	// UnityEngine.GameObject BallChaser::Buffer2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Buffer2_11;
	// System.String BallChaser::LevelName
	String_t* ___LevelName_12;
	// System.Int32 BallChaser::PreviewSteps
	int32_t ___PreviewSteps_13;
	// UnityEngine.Vector3 BallChaser::p01
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p01_14;
	// System.Single BallChaser::timeStart
	float ___timeStart_15;
	// System.Single BallChaser::timeDuration
	float ___timeDuration_16;
	// UnityEngine.UI.Text BallChaser::LevelTitle
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___LevelTitle_17;
	// UnityEngine.GameObject BallChaser::LevelTitleObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LevelTitleObject_18;
	// UnityEngine.Color BallChaser::c01
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c01_19;
	// UnityEngine.Color BallChaser::c12
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c12_20;
	// UnityEngine.Color BallChaser::c012
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c012_21;

public:
	inline static int32_t get_offset_of_CurrentBall_4() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___CurrentBall_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CurrentBall_4() const { return ___CurrentBall_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CurrentBall_4() { return &___CurrentBall_4; }
	inline void set_CurrentBall_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CurrentBall_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentBall_4), (void*)value);
	}

	inline static int32_t get_offset_of_Tank_5() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___Tank_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Tank_5() const { return ___Tank_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Tank_5() { return &___Tank_5; }
	inline void set_Tank_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Tank_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tank_5), (void*)value);
	}

	inline static int32_t get_offset_of_LevelPreview_6() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___LevelPreview_6)); }
	inline bool get_LevelPreview_6() const { return ___LevelPreview_6; }
	inline bool* get_address_of_LevelPreview_6() { return &___LevelPreview_6; }
	inline void set_LevelPreview_6(bool value)
	{
		___LevelPreview_6 = value;
	}

	inline static int32_t get_offset_of_FollowingBall_7() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___FollowingBall_7)); }
	inline bool get_FollowingBall_7() const { return ___FollowingBall_7; }
	inline bool* get_address_of_FollowingBall_7() { return &___FollowingBall_7; }
	inline void set_FollowingBall_7(bool value)
	{
		___FollowingBall_7 = value;
	}

	inline static int32_t get_offset_of_HolePoint_8() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___HolePoint_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_HolePoint_8() const { return ___HolePoint_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_HolePoint_8() { return &___HolePoint_8; }
	inline void set_HolePoint_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___HolePoint_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HolePoint_8), (void*)value);
	}

	inline static int32_t get_offset_of_TankPoint_9() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___TankPoint_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TankPoint_9() const { return ___TankPoint_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TankPoint_9() { return &___TankPoint_9; }
	inline void set_TankPoint_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TankPoint_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TankPoint_9), (void*)value);
	}

	inline static int32_t get_offset_of_Buffer1_10() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___Buffer1_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Buffer1_10() const { return ___Buffer1_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Buffer1_10() { return &___Buffer1_10; }
	inline void set_Buffer1_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Buffer1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Buffer1_10), (void*)value);
	}

	inline static int32_t get_offset_of_Buffer2_11() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___Buffer2_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Buffer2_11() const { return ___Buffer2_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Buffer2_11() { return &___Buffer2_11; }
	inline void set_Buffer2_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Buffer2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Buffer2_11), (void*)value);
	}

	inline static int32_t get_offset_of_LevelName_12() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___LevelName_12)); }
	inline String_t* get_LevelName_12() const { return ___LevelName_12; }
	inline String_t** get_address_of_LevelName_12() { return &___LevelName_12; }
	inline void set_LevelName_12(String_t* value)
	{
		___LevelName_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelName_12), (void*)value);
	}

	inline static int32_t get_offset_of_PreviewSteps_13() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___PreviewSteps_13)); }
	inline int32_t get_PreviewSteps_13() const { return ___PreviewSteps_13; }
	inline int32_t* get_address_of_PreviewSteps_13() { return &___PreviewSteps_13; }
	inline void set_PreviewSteps_13(int32_t value)
	{
		___PreviewSteps_13 = value;
	}

	inline static int32_t get_offset_of_p01_14() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___p01_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_p01_14() const { return ___p01_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_p01_14() { return &___p01_14; }
	inline void set_p01_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___p01_14 = value;
	}

	inline static int32_t get_offset_of_timeStart_15() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___timeStart_15)); }
	inline float get_timeStart_15() const { return ___timeStart_15; }
	inline float* get_address_of_timeStart_15() { return &___timeStart_15; }
	inline void set_timeStart_15(float value)
	{
		___timeStart_15 = value;
	}

	inline static int32_t get_offset_of_timeDuration_16() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___timeDuration_16)); }
	inline float get_timeDuration_16() const { return ___timeDuration_16; }
	inline float* get_address_of_timeDuration_16() { return &___timeDuration_16; }
	inline void set_timeDuration_16(float value)
	{
		___timeDuration_16 = value;
	}

	inline static int32_t get_offset_of_LevelTitle_17() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___LevelTitle_17)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_LevelTitle_17() const { return ___LevelTitle_17; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_LevelTitle_17() { return &___LevelTitle_17; }
	inline void set_LevelTitle_17(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___LevelTitle_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelTitle_17), (void*)value);
	}

	inline static int32_t get_offset_of_LevelTitleObject_18() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___LevelTitleObject_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LevelTitleObject_18() const { return ___LevelTitleObject_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LevelTitleObject_18() { return &___LevelTitleObject_18; }
	inline void set_LevelTitleObject_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LevelTitleObject_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelTitleObject_18), (void*)value);
	}

	inline static int32_t get_offset_of_c01_19() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___c01_19)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_c01_19() const { return ___c01_19; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_c01_19() { return &___c01_19; }
	inline void set_c01_19(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___c01_19 = value;
	}

	inline static int32_t get_offset_of_c12_20() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___c12_20)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_c12_20() const { return ___c12_20; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_c12_20() { return &___c12_20; }
	inline void set_c12_20(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___c12_20 = value;
	}

	inline static int32_t get_offset_of_c012_21() { return static_cast<int32_t>(offsetof(BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0, ___c012_21)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_c012_21() const { return ___c012_21; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_c012_21() { return &___c012_21; }
	inline void set_c012_21(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___c012_21 = value;
	}
};


// BallSettings
struct BallSettings_tF6E80FEBEA71ED76CC5494DAB0AA07765D6D9DDD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject BallSettings::Tank
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Tank_4;
	// System.Boolean BallSettings::SwitchableBallType
	bool ___SwitchableBallType_5;
	// System.Boolean BallSettings::NormalBall
	bool ___NormalBall_6;
	// System.Boolean BallSettings::PlatformBall
	bool ___PlatformBall_7;
	// System.Boolean BallSettings::WallBall
	bool ___WallBall_8;
	// System.Boolean BallSettings::SpikyBall
	bool ___SpikyBall_9;
	// System.String BallSettings::CurrentBall
	String_t* ___CurrentBall_10;
	// UnityEngine.GameObject BallSettings::NormalButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___NormalButton_11;
	// UnityEngine.GameObject BallSettings::PlatformButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PlatformButton_12;
	// UnityEngine.GameObject BallSettings::WallButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___WallButton_13;
	// UnityEngine.GameObject BallSettings::SpikyButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SpikyButton_14;

public:
	inline static int32_t get_offset_of_Tank_4() { return static_cast<int32_t>(offsetof(BallSettings_tF6E80FEBEA71ED76CC5494DAB0AA07765D6D9DDD, ___Tank_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Tank_4() const { return ___Tank_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Tank_4() { return &___Tank_4; }
	inline void set_Tank_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Tank_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tank_4), (void*)value);
	}

	inline static int32_t get_offset_of_SwitchableBallType_5() { return static_cast<int32_t>(offsetof(BallSettings_tF6E80FEBEA71ED76CC5494DAB0AA07765D6D9DDD, ___SwitchableBallType_5)); }
	inline bool get_SwitchableBallType_5() const { return ___SwitchableBallType_5; }
	inline bool* get_address_of_SwitchableBallType_5() { return &___SwitchableBallType_5; }
	inline void set_SwitchableBallType_5(bool value)
	{
		___SwitchableBallType_5 = value;
	}

	inline static int32_t get_offset_of_NormalBall_6() { return static_cast<int32_t>(offsetof(BallSettings_tF6E80FEBEA71ED76CC5494DAB0AA07765D6D9DDD, ___NormalBall_6)); }
	inline bool get_NormalBall_6() const { return ___NormalBall_6; }
	inline bool* get_address_of_NormalBall_6() { return &___NormalBall_6; }
	inline void set_NormalBall_6(bool value)
	{
		___NormalBall_6 = value;
	}

	inline static int32_t get_offset_of_PlatformBall_7() { return static_cast<int32_t>(offsetof(BallSettings_tF6E80FEBEA71ED76CC5494DAB0AA07765D6D9DDD, ___PlatformBall_7)); }
	inline bool get_PlatformBall_7() const { return ___PlatformBall_7; }
	inline bool* get_address_of_PlatformBall_7() { return &___PlatformBall_7; }
	inline void set_PlatformBall_7(bool value)
	{
		___PlatformBall_7 = value;
	}

	inline static int32_t get_offset_of_WallBall_8() { return static_cast<int32_t>(offsetof(BallSettings_tF6E80FEBEA71ED76CC5494DAB0AA07765D6D9DDD, ___WallBall_8)); }
	inline bool get_WallBall_8() const { return ___WallBall_8; }
	inline bool* get_address_of_WallBall_8() { return &___WallBall_8; }
	inline void set_WallBall_8(bool value)
	{
		___WallBall_8 = value;
	}

	inline static int32_t get_offset_of_SpikyBall_9() { return static_cast<int32_t>(offsetof(BallSettings_tF6E80FEBEA71ED76CC5494DAB0AA07765D6D9DDD, ___SpikyBall_9)); }
	inline bool get_SpikyBall_9() const { return ___SpikyBall_9; }
	inline bool* get_address_of_SpikyBall_9() { return &___SpikyBall_9; }
	inline void set_SpikyBall_9(bool value)
	{
		___SpikyBall_9 = value;
	}

	inline static int32_t get_offset_of_CurrentBall_10() { return static_cast<int32_t>(offsetof(BallSettings_tF6E80FEBEA71ED76CC5494DAB0AA07765D6D9DDD, ___CurrentBall_10)); }
	inline String_t* get_CurrentBall_10() const { return ___CurrentBall_10; }
	inline String_t** get_address_of_CurrentBall_10() { return &___CurrentBall_10; }
	inline void set_CurrentBall_10(String_t* value)
	{
		___CurrentBall_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentBall_10), (void*)value);
	}

	inline static int32_t get_offset_of_NormalButton_11() { return static_cast<int32_t>(offsetof(BallSettings_tF6E80FEBEA71ED76CC5494DAB0AA07765D6D9DDD, ___NormalButton_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_NormalButton_11() const { return ___NormalButton_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_NormalButton_11() { return &___NormalButton_11; }
	inline void set_NormalButton_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___NormalButton_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NormalButton_11), (void*)value);
	}

	inline static int32_t get_offset_of_PlatformButton_12() { return static_cast<int32_t>(offsetof(BallSettings_tF6E80FEBEA71ED76CC5494DAB0AA07765D6D9DDD, ___PlatformButton_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PlatformButton_12() const { return ___PlatformButton_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PlatformButton_12() { return &___PlatformButton_12; }
	inline void set_PlatformButton_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PlatformButton_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlatformButton_12), (void*)value);
	}

	inline static int32_t get_offset_of_WallButton_13() { return static_cast<int32_t>(offsetof(BallSettings_tF6E80FEBEA71ED76CC5494DAB0AA07765D6D9DDD, ___WallButton_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_WallButton_13() const { return ___WallButton_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_WallButton_13() { return &___WallButton_13; }
	inline void set_WallButton_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___WallButton_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WallButton_13), (void*)value);
	}

	inline static int32_t get_offset_of_SpikyButton_14() { return static_cast<int32_t>(offsetof(BallSettings_tF6E80FEBEA71ED76CC5494DAB0AA07765D6D9DDD, ___SpikyButton_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SpikyButton_14() const { return ___SpikyButton_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SpikyButton_14() { return &___SpikyButton_14; }
	inline void set_SpikyButton_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SpikyButton_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpikyButton_14), (void*)value);
	}
};


// CameraMover
struct CameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CameraMover::CameraTarget
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CameraTarget_4;
	// System.Boolean CameraMover::Nudging
	bool ___Nudging_5;

public:
	inline static int32_t get_offset_of_CameraTarget_4() { return static_cast<int32_t>(offsetof(CameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7, ___CameraTarget_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CameraTarget_4() const { return ___CameraTarget_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CameraTarget_4() { return &___CameraTarget_4; }
	inline void set_CameraTarget_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CameraTarget_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraTarget_4), (void*)value);
	}

	inline static int32_t get_offset_of_Nudging_5() { return static_cast<int32_t>(offsetof(CameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7, ___Nudging_5)); }
	inline bool get_Nudging_5() const { return ___Nudging_5; }
	inline bool* get_address_of_Nudging_5() { return &___Nudging_5; }
	inline void set_Nudging_5(bool value)
	{
		___Nudging_5 = value;
	}
};


// CameraNudge
struct CameraNudge_tBAD456E428F966679846B40471521A4896503D20  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 CameraNudge::CameraPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___CameraPoint_4;
	// UnityEngine.GameObject CameraNudge::CameraTarget
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CameraTarget_5;
	// UnityEngine.Vector3 CameraNudge::NewCameraPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___NewCameraPoint_6;
	// UnityEngine.Camera CameraNudge::SceneCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___SceneCamera_7;
	// UnityEngine.GameObject CameraNudge::Tank
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Tank_8;
	// System.Boolean CameraNudge::Movable
	bool ___Movable_9;

public:
	inline static int32_t get_offset_of_CameraPoint_4() { return static_cast<int32_t>(offsetof(CameraNudge_tBAD456E428F966679846B40471521A4896503D20, ___CameraPoint_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_CameraPoint_4() const { return ___CameraPoint_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_CameraPoint_4() { return &___CameraPoint_4; }
	inline void set_CameraPoint_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___CameraPoint_4 = value;
	}

	inline static int32_t get_offset_of_CameraTarget_5() { return static_cast<int32_t>(offsetof(CameraNudge_tBAD456E428F966679846B40471521A4896503D20, ___CameraTarget_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CameraTarget_5() const { return ___CameraTarget_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CameraTarget_5() { return &___CameraTarget_5; }
	inline void set_CameraTarget_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CameraTarget_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraTarget_5), (void*)value);
	}

	inline static int32_t get_offset_of_NewCameraPoint_6() { return static_cast<int32_t>(offsetof(CameraNudge_tBAD456E428F966679846B40471521A4896503D20, ___NewCameraPoint_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_NewCameraPoint_6() const { return ___NewCameraPoint_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_NewCameraPoint_6() { return &___NewCameraPoint_6; }
	inline void set_NewCameraPoint_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___NewCameraPoint_6 = value;
	}

	inline static int32_t get_offset_of_SceneCamera_7() { return static_cast<int32_t>(offsetof(CameraNudge_tBAD456E428F966679846B40471521A4896503D20, ___SceneCamera_7)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_SceneCamera_7() const { return ___SceneCamera_7; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_SceneCamera_7() { return &___SceneCamera_7; }
	inline void set_SceneCamera_7(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___SceneCamera_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneCamera_7), (void*)value);
	}

	inline static int32_t get_offset_of_Tank_8() { return static_cast<int32_t>(offsetof(CameraNudge_tBAD456E428F966679846B40471521A4896503D20, ___Tank_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Tank_8() const { return ___Tank_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Tank_8() { return &___Tank_8; }
	inline void set_Tank_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Tank_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tank_8), (void*)value);
	}

	inline static int32_t get_offset_of_Movable_9() { return static_cast<int32_t>(offsetof(CameraNudge_tBAD456E428F966679846B40471521A4896503D20, ___Movable_9)); }
	inline bool get_Movable_9() const { return ___Movable_9; }
	inline bool* get_address_of_Movable_9() { return &___Movable_9; }
	inline void set_Movable_9(bool value)
	{
		___Movable_9 = value;
	}
};


// CoinBehavior
struct CoinBehavior_t723253102B555C08A8E714AA65B03B96AC36524F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CoinBehavior::Tank
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Tank_4;
	// CoinBehavior/TypeString CoinBehavior::Typing
	int32_t ___Typing_5;
	// System.Int32 CoinBehavior::Amount
	int32_t ___Amount_6;

public:
	inline static int32_t get_offset_of_Tank_4() { return static_cast<int32_t>(offsetof(CoinBehavior_t723253102B555C08A8E714AA65B03B96AC36524F, ___Tank_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Tank_4() const { return ___Tank_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Tank_4() { return &___Tank_4; }
	inline void set_Tank_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Tank_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tank_4), (void*)value);
	}

	inline static int32_t get_offset_of_Typing_5() { return static_cast<int32_t>(offsetof(CoinBehavior_t723253102B555C08A8E714AA65B03B96AC36524F, ___Typing_5)); }
	inline int32_t get_Typing_5() const { return ___Typing_5; }
	inline int32_t* get_address_of_Typing_5() { return &___Typing_5; }
	inline void set_Typing_5(int32_t value)
	{
		___Typing_5 = value;
	}

	inline static int32_t get_offset_of_Amount_6() { return static_cast<int32_t>(offsetof(CoinBehavior_t723253102B555C08A8E714AA65B03B96AC36524F, ___Amount_6)); }
	inline int32_t get_Amount_6() const { return ___Amount_6; }
	inline int32_t* get_address_of_Amount_6() { return &___Amount_6; }
	inline void set_Amount_6(int32_t value)
	{
		___Amount_6 = value;
	}
};


// Conveyor
struct Conveyor_t8A51756DBAC36FC26AC25A1202A355165222F05D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Conveyor::Ball
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ball_4;
	// System.Boolean Conveyor::directional
	bool ___directional_5;

public:
	inline static int32_t get_offset_of_Ball_4() { return static_cast<int32_t>(offsetof(Conveyor_t8A51756DBAC36FC26AC25A1202A355165222F05D, ___Ball_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Ball_4() const { return ___Ball_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Ball_4() { return &___Ball_4; }
	inline void set_Ball_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Ball_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ball_4), (void*)value);
	}

	inline static int32_t get_offset_of_directional_5() { return static_cast<int32_t>(offsetof(Conveyor_t8A51756DBAC36FC26AC25A1202A355165222F05D, ___directional_5)); }
	inline bool get_directional_5() const { return ___directional_5; }
	inline bool* get_address_of_directional_5() { return &___directional_5; }
	inline void set_directional_5(bool value)
	{
		___directional_5 = value;
	}
};


// CreditsScroll
struct CreditsScroll_t80B888C688D3294B00701B5BE2F04954C4097820  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CreditsScroll::ylevel
	float ___ylevel_4;

public:
	inline static int32_t get_offset_of_ylevel_4() { return static_cast<int32_t>(offsetof(CreditsScroll_t80B888C688D3294B00701B5BE2F04954C4097820, ___ylevel_4)); }
	inline float get_ylevel_4() const { return ___ylevel_4; }
	inline float* get_address_of_ylevel_4() { return &___ylevel_4; }
	inline void set_ylevel_4(float value)
	{
		___ylevel_4 = value;
	}
};


// CustomizedTankManager
struct CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material CustomizedTankManager::Green
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___Green_4;
	// UnityEngine.Material CustomizedTankManager::Red
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___Red_5;
	// UnityEngine.Material CustomizedTankManager::Blue
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___Blue_6;
	// UnityEngine.Material CustomizedTankManager::CurrentColor
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___CurrentColor_7;
	// UnityEngine.GameObject CustomizedTankManager::TankBody
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TankBody_8;

public:
	inline static int32_t get_offset_of_Green_4() { return static_cast<int32_t>(offsetof(CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A, ___Green_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_Green_4() const { return ___Green_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_Green_4() { return &___Green_4; }
	inline void set_Green_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___Green_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Green_4), (void*)value);
	}

	inline static int32_t get_offset_of_Red_5() { return static_cast<int32_t>(offsetof(CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A, ___Red_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_Red_5() const { return ___Red_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_Red_5() { return &___Red_5; }
	inline void set_Red_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___Red_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Red_5), (void*)value);
	}

	inline static int32_t get_offset_of_Blue_6() { return static_cast<int32_t>(offsetof(CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A, ___Blue_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_Blue_6() const { return ___Blue_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_Blue_6() { return &___Blue_6; }
	inline void set_Blue_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___Blue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Blue_6), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentColor_7() { return static_cast<int32_t>(offsetof(CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A, ___CurrentColor_7)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_CurrentColor_7() const { return ___CurrentColor_7; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_CurrentColor_7() { return &___CurrentColor_7; }
	inline void set_CurrentColor_7(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___CurrentColor_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentColor_7), (void*)value);
	}

	inline static int32_t get_offset_of_TankBody_8() { return static_cast<int32_t>(offsetof(CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A, ___TankBody_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TankBody_8() const { return ___TankBody_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TankBody_8() { return &___TankBody_8; }
	inline void set_TankBody_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TankBody_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TankBody_8), (void*)value);
	}
};


// Customizer
struct Customizer_t900A35AA9BEDFCF1190CB9FB56693B1D76B71914  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Customizer::MainMenuUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MainMenuUI_4;
	// UnityEngine.GameObject Customizer::CustomizerUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CustomizerUI_5;
	// UnityEngine.Material Customizer::Blue
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___Blue_6;
	// UnityEngine.Material Customizer::Red
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___Red_7;
	// UnityEngine.Material Customizer::Green
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___Green_8;
	// UnityEngine.GameObject Customizer::TankBody
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TankBody_9;

public:
	inline static int32_t get_offset_of_MainMenuUI_4() { return static_cast<int32_t>(offsetof(Customizer_t900A35AA9BEDFCF1190CB9FB56693B1D76B71914, ___MainMenuUI_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MainMenuUI_4() const { return ___MainMenuUI_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MainMenuUI_4() { return &___MainMenuUI_4; }
	inline void set_MainMenuUI_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MainMenuUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MainMenuUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_CustomizerUI_5() { return static_cast<int32_t>(offsetof(Customizer_t900A35AA9BEDFCF1190CB9FB56693B1D76B71914, ___CustomizerUI_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CustomizerUI_5() const { return ___CustomizerUI_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CustomizerUI_5() { return &___CustomizerUI_5; }
	inline void set_CustomizerUI_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CustomizerUI_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomizerUI_5), (void*)value);
	}

	inline static int32_t get_offset_of_Blue_6() { return static_cast<int32_t>(offsetof(Customizer_t900A35AA9BEDFCF1190CB9FB56693B1D76B71914, ___Blue_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_Blue_6() const { return ___Blue_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_Blue_6() { return &___Blue_6; }
	inline void set_Blue_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___Blue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Blue_6), (void*)value);
	}

	inline static int32_t get_offset_of_Red_7() { return static_cast<int32_t>(offsetof(Customizer_t900A35AA9BEDFCF1190CB9FB56693B1D76B71914, ___Red_7)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_Red_7() const { return ___Red_7; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_Red_7() { return &___Red_7; }
	inline void set_Red_7(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___Red_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Red_7), (void*)value);
	}

	inline static int32_t get_offset_of_Green_8() { return static_cast<int32_t>(offsetof(Customizer_t900A35AA9BEDFCF1190CB9FB56693B1D76B71914, ___Green_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_Green_8() const { return ___Green_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_Green_8() { return &___Green_8; }
	inline void set_Green_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___Green_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Green_8), (void*)value);
	}

	inline static int32_t get_offset_of_TankBody_9() { return static_cast<int32_t>(offsetof(Customizer_t900A35AA9BEDFCF1190CB9FB56693B1D76B71914, ___TankBody_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TankBody_9() const { return ___TankBody_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TankBody_9() { return &___TankBody_9; }
	inline void set_TankBody_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TankBody_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TankBody_9), (void*)value);
	}
};


// Elevator
struct Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Elevator::Floor
	int32_t ___Floor_4;
	// System.Boolean Elevator::UP
	bool ___UP_5;
	// UnityEngine.GameObject Elevator::ElevatorObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ElevatorObject_6;
	// System.Boolean Elevator::MovingUp
	bool ___MovingUp_7;
	// System.Boolean Elevator::MovingDown
	bool ___MovingDown_8;
	// System.Int32 Elevator::Floor1Height
	int32_t ___Floor1Height_9;
	// System.Int32 Elevator::Floor2Height
	int32_t ___Floor2Height_10;
	// System.Int32 Elevator::FloorM1Height
	int32_t ___FloorM1Height_11;
	// UnityEngine.GameObject Elevator::Door
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Door_12;
	// UnityEngine.GameObject Elevator::Tank
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Tank_13;
	// System.Boolean Elevator::TankOn
	bool ___TankOn_14;
	// System.Boolean Elevator::Interactable
	bool ___Interactable_15;
	// UnityEngine.GameObject Elevator::Light
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Light_16;
	// System.Single Elevator::timeStart
	float ___timeStart_17;
	// System.Single Elevator::timeDuration
	float ___timeDuration_18;
	// UnityEngine.Vector3 Elevator::p0
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p0_19;
	// UnityEngine.Vector3 Elevator::p1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p1_20;
	// UnityEngine.Vector3 Elevator::p01
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p01_21;
	// UnityEngine.Vector3 Elevator::t0
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___t0_22;
	// UnityEngine.Vector3 Elevator::t1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___t1_23;
	// UnityEngine.Vector3 Elevator::t01
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___t01_24;

public:
	inline static int32_t get_offset_of_Floor_4() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___Floor_4)); }
	inline int32_t get_Floor_4() const { return ___Floor_4; }
	inline int32_t* get_address_of_Floor_4() { return &___Floor_4; }
	inline void set_Floor_4(int32_t value)
	{
		___Floor_4 = value;
	}

	inline static int32_t get_offset_of_UP_5() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___UP_5)); }
	inline bool get_UP_5() const { return ___UP_5; }
	inline bool* get_address_of_UP_5() { return &___UP_5; }
	inline void set_UP_5(bool value)
	{
		___UP_5 = value;
	}

	inline static int32_t get_offset_of_ElevatorObject_6() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___ElevatorObject_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ElevatorObject_6() const { return ___ElevatorObject_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ElevatorObject_6() { return &___ElevatorObject_6; }
	inline void set_ElevatorObject_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ElevatorObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ElevatorObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_MovingUp_7() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___MovingUp_7)); }
	inline bool get_MovingUp_7() const { return ___MovingUp_7; }
	inline bool* get_address_of_MovingUp_7() { return &___MovingUp_7; }
	inline void set_MovingUp_7(bool value)
	{
		___MovingUp_7 = value;
	}

	inline static int32_t get_offset_of_MovingDown_8() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___MovingDown_8)); }
	inline bool get_MovingDown_8() const { return ___MovingDown_8; }
	inline bool* get_address_of_MovingDown_8() { return &___MovingDown_8; }
	inline void set_MovingDown_8(bool value)
	{
		___MovingDown_8 = value;
	}

	inline static int32_t get_offset_of_Floor1Height_9() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___Floor1Height_9)); }
	inline int32_t get_Floor1Height_9() const { return ___Floor1Height_9; }
	inline int32_t* get_address_of_Floor1Height_9() { return &___Floor1Height_9; }
	inline void set_Floor1Height_9(int32_t value)
	{
		___Floor1Height_9 = value;
	}

	inline static int32_t get_offset_of_Floor2Height_10() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___Floor2Height_10)); }
	inline int32_t get_Floor2Height_10() const { return ___Floor2Height_10; }
	inline int32_t* get_address_of_Floor2Height_10() { return &___Floor2Height_10; }
	inline void set_Floor2Height_10(int32_t value)
	{
		___Floor2Height_10 = value;
	}

	inline static int32_t get_offset_of_FloorM1Height_11() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___FloorM1Height_11)); }
	inline int32_t get_FloorM1Height_11() const { return ___FloorM1Height_11; }
	inline int32_t* get_address_of_FloorM1Height_11() { return &___FloorM1Height_11; }
	inline void set_FloorM1Height_11(int32_t value)
	{
		___FloorM1Height_11 = value;
	}

	inline static int32_t get_offset_of_Door_12() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___Door_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Door_12() const { return ___Door_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Door_12() { return &___Door_12; }
	inline void set_Door_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Door_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Door_12), (void*)value);
	}

	inline static int32_t get_offset_of_Tank_13() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___Tank_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Tank_13() const { return ___Tank_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Tank_13() { return &___Tank_13; }
	inline void set_Tank_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Tank_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tank_13), (void*)value);
	}

	inline static int32_t get_offset_of_TankOn_14() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___TankOn_14)); }
	inline bool get_TankOn_14() const { return ___TankOn_14; }
	inline bool* get_address_of_TankOn_14() { return &___TankOn_14; }
	inline void set_TankOn_14(bool value)
	{
		___TankOn_14 = value;
	}

	inline static int32_t get_offset_of_Interactable_15() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___Interactable_15)); }
	inline bool get_Interactable_15() const { return ___Interactable_15; }
	inline bool* get_address_of_Interactable_15() { return &___Interactable_15; }
	inline void set_Interactable_15(bool value)
	{
		___Interactable_15 = value;
	}

	inline static int32_t get_offset_of_Light_16() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___Light_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Light_16() const { return ___Light_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Light_16() { return &___Light_16; }
	inline void set_Light_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Light_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Light_16), (void*)value);
	}

	inline static int32_t get_offset_of_timeStart_17() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___timeStart_17)); }
	inline float get_timeStart_17() const { return ___timeStart_17; }
	inline float* get_address_of_timeStart_17() { return &___timeStart_17; }
	inline void set_timeStart_17(float value)
	{
		___timeStart_17 = value;
	}

	inline static int32_t get_offset_of_timeDuration_18() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___timeDuration_18)); }
	inline float get_timeDuration_18() const { return ___timeDuration_18; }
	inline float* get_address_of_timeDuration_18() { return &___timeDuration_18; }
	inline void set_timeDuration_18(float value)
	{
		___timeDuration_18 = value;
	}

	inline static int32_t get_offset_of_p0_19() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___p0_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_p0_19() const { return ___p0_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_p0_19() { return &___p0_19; }
	inline void set_p0_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___p0_19 = value;
	}

	inline static int32_t get_offset_of_p1_20() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___p1_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_p1_20() const { return ___p1_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_p1_20() { return &___p1_20; }
	inline void set_p1_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___p1_20 = value;
	}

	inline static int32_t get_offset_of_p01_21() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___p01_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_p01_21() const { return ___p01_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_p01_21() { return &___p01_21; }
	inline void set_p01_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___p01_21 = value;
	}

	inline static int32_t get_offset_of_t0_22() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___t0_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_t0_22() const { return ___t0_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_t0_22() { return &___t0_22; }
	inline void set_t0_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___t0_22 = value;
	}

	inline static int32_t get_offset_of_t1_23() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___t1_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_t1_23() const { return ___t1_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_t1_23() { return &___t1_23; }
	inline void set_t1_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___t1_23 = value;
	}

	inline static int32_t get_offset_of_t01_24() { return static_cast<int32_t>(offsetof(Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E, ___t01_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_t01_24() const { return ___t01_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_t01_24() { return &___t01_24; }
	inline void set_t01_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___t01_24 = value;
	}
};


// ExplosionDissipate
struct ExplosionDissipate_t54631AF601297033AA8D43E0069B19E94F4A5472  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// FanPush
struct FanPush_tA951F229A361BE30AB64EFCCFD008A3CD25DF2EC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject FanPush::Ball
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ball_4;
	// System.Single FanPush::force
	float ___force_5;

public:
	inline static int32_t get_offset_of_Ball_4() { return static_cast<int32_t>(offsetof(FanPush_tA951F229A361BE30AB64EFCCFD008A3CD25DF2EC, ___Ball_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Ball_4() const { return ___Ball_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Ball_4() { return &___Ball_4; }
	inline void set_Ball_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Ball_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ball_4), (void*)value);
	}

	inline static int32_t get_offset_of_force_5() { return static_cast<int32_t>(offsetof(FanPush_tA951F229A361BE30AB64EFCCFD008A3CD25DF2EC, ___force_5)); }
	inline float get_force_5() const { return ___force_5; }
	inline float* get_address_of_force_5() { return &___force_5; }
	inline void set_force_5(float value)
	{
		___force_5 = value;
	}
};


// GolfHole
struct GolfHole_t2D3C773014FC80E0CD3EED1CFE4A97F353816827  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GolfHole::Ball
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ball_4;
	// UnityEngine.GameObject GolfHole::Tank
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Tank_5;

public:
	inline static int32_t get_offset_of_Ball_4() { return static_cast<int32_t>(offsetof(GolfHole_t2D3C773014FC80E0CD3EED1CFE4A97F353816827, ___Ball_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Ball_4() const { return ___Ball_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Ball_4() { return &___Ball_4; }
	inline void set_Ball_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Ball_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ball_4), (void*)value);
	}

	inline static int32_t get_offset_of_Tank_5() { return static_cast<int32_t>(offsetof(GolfHole_t2D3C773014FC80E0CD3EED1CFE4A97F353816827, ___Tank_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Tank_5() const { return ___Tank_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Tank_5() { return &___Tank_5; }
	inline void set_Tank_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Tank_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tank_5), (void*)value);
	}
};


// HeadManager
struct HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 HeadManager::Level1HiScore
	int32_t ___Level1HiScore_5;
	// System.Int32 HeadManager::Level2HiScore
	int32_t ___Level2HiScore_6;
	// System.Int32 HeadManager::Level3HiScore
	int32_t ___Level3HiScore_7;
	// System.Int32 HeadManager::Level4HiScore
	int32_t ___Level4HiScore_8;
	// System.Int32 HeadManager::BLevel1HiScore
	int32_t ___BLevel1HiScore_9;
	// System.Int32 HeadManager::BLevel2HiScore
	int32_t ___BLevel2HiScore_10;
	// System.Int32 HeadManager::BLevel3HiScore
	int32_t ___BLevel3HiScore_11;
	// System.Int32 HeadManager::BLevel4HiScore
	int32_t ___BLevel4HiScore_12;
	// System.Int32 HeadManager::BLevel5HiScore
	int32_t ___BLevel5HiScore_13;
	// System.Int32 HeadManager::BLevel6HiScore
	int32_t ___BLevel6HiScore_14;
	// System.Int32 HeadManager::Level1Star1
	int32_t ___Level1Star1_15;
	// System.Int32 HeadManager::Level1Star2
	int32_t ___Level1Star2_16;
	// System.Int32 HeadManager::Level1Star3
	int32_t ___Level1Star3_17;
	// System.Int32 HeadManager::Level1Star4
	int32_t ___Level1Star4_18;
	// System.Int32 HeadManager::Level2Star1
	int32_t ___Level2Star1_19;
	// System.Int32 HeadManager::Level2Star2
	int32_t ___Level2Star2_20;
	// System.Int32 HeadManager::Level2Star3
	int32_t ___Level2Star3_21;
	// System.Int32 HeadManager::Level2Star4
	int32_t ___Level2Star4_22;
	// System.Int32 HeadManager::Level3Star1
	int32_t ___Level3Star1_23;
	// System.Int32 HeadManager::Level3Star2
	int32_t ___Level3Star2_24;
	// System.Int32 HeadManager::Level3Star3
	int32_t ___Level3Star3_25;
	// System.Int32 HeadManager::Level3Star4
	int32_t ___Level3Star4_26;
	// System.Int32 HeadManager::Level4Star1
	int32_t ___Level4Star1_27;
	// System.Int32 HeadManager::Level4Star2
	int32_t ___Level4Star2_28;
	// System.Int32 HeadManager::Level4Star3
	int32_t ___Level4Star3_29;
	// System.Int32 HeadManager::Level4Star4
	int32_t ___Level4Star4_30;
	// System.Int32 HeadManager::BLevel1Star1
	int32_t ___BLevel1Star1_31;
	// System.Int32 HeadManager::BLevel1Star2
	int32_t ___BLevel1Star2_32;
	// System.Int32 HeadManager::BLevel1Star3
	int32_t ___BLevel1Star3_33;
	// System.Int32 HeadManager::BLevel1Star4
	int32_t ___BLevel1Star4_34;
	// System.Int32 HeadManager::BLevel2Star1
	int32_t ___BLevel2Star1_35;
	// System.Int32 HeadManager::BLevel2Star2
	int32_t ___BLevel2Star2_36;
	// System.Int32 HeadManager::BLevel2Star3
	int32_t ___BLevel2Star3_37;
	// System.Int32 HeadManager::BLevel2Star4
	int32_t ___BLevel2Star4_38;
	// System.Int32 HeadManager::BLevel3Star1
	int32_t ___BLevel3Star1_39;
	// System.Int32 HeadManager::BLevel3Star2
	int32_t ___BLevel3Star2_40;
	// System.Int32 HeadManager::BLevel3Star3
	int32_t ___BLevel3Star3_41;
	// System.Int32 HeadManager::BLevel3Star4
	int32_t ___BLevel3Star4_42;
	// System.Int32 HeadManager::BLevel4Star1
	int32_t ___BLevel4Star1_43;
	// System.Int32 HeadManager::BLevel4Star2
	int32_t ___BLevel4Star2_44;
	// System.Int32 HeadManager::BLevel4Star3
	int32_t ___BLevel4Star3_45;
	// System.Int32 HeadManager::BLevel4Star4
	int32_t ___BLevel4Star4_46;
	// System.Int32 HeadManager::BLevel5Star1
	int32_t ___BLevel5Star1_47;
	// System.Int32 HeadManager::BLevel5Star2
	int32_t ___BLevel5Star2_48;
	// System.Int32 HeadManager::BLevel5Star3
	int32_t ___BLevel5Star3_49;
	// System.Int32 HeadManager::BLevel5Star4
	int32_t ___BLevel5Star4_50;
	// System.Int32 HeadManager::BLevel6Star1
	int32_t ___BLevel6Star1_51;
	// System.Int32 HeadManager::BLevel6Star2
	int32_t ___BLevel6Star2_52;
	// System.Int32 HeadManager::BLevel6Star3
	int32_t ___BLevel6Star3_53;
	// System.Int32 HeadManager::BLevel6Star4
	int32_t ___BLevel6Star4_54;
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> HeadManager::LevelDatas
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___LevelDatas_55;

public:
	inline static int32_t get_offset_of_Level1HiScore_5() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level1HiScore_5)); }
	inline int32_t get_Level1HiScore_5() const { return ___Level1HiScore_5; }
	inline int32_t* get_address_of_Level1HiScore_5() { return &___Level1HiScore_5; }
	inline void set_Level1HiScore_5(int32_t value)
	{
		___Level1HiScore_5 = value;
	}

	inline static int32_t get_offset_of_Level2HiScore_6() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level2HiScore_6)); }
	inline int32_t get_Level2HiScore_6() const { return ___Level2HiScore_6; }
	inline int32_t* get_address_of_Level2HiScore_6() { return &___Level2HiScore_6; }
	inline void set_Level2HiScore_6(int32_t value)
	{
		___Level2HiScore_6 = value;
	}

	inline static int32_t get_offset_of_Level3HiScore_7() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level3HiScore_7)); }
	inline int32_t get_Level3HiScore_7() const { return ___Level3HiScore_7; }
	inline int32_t* get_address_of_Level3HiScore_7() { return &___Level3HiScore_7; }
	inline void set_Level3HiScore_7(int32_t value)
	{
		___Level3HiScore_7 = value;
	}

	inline static int32_t get_offset_of_Level4HiScore_8() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level4HiScore_8)); }
	inline int32_t get_Level4HiScore_8() const { return ___Level4HiScore_8; }
	inline int32_t* get_address_of_Level4HiScore_8() { return &___Level4HiScore_8; }
	inline void set_Level4HiScore_8(int32_t value)
	{
		___Level4HiScore_8 = value;
	}

	inline static int32_t get_offset_of_BLevel1HiScore_9() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel1HiScore_9)); }
	inline int32_t get_BLevel1HiScore_9() const { return ___BLevel1HiScore_9; }
	inline int32_t* get_address_of_BLevel1HiScore_9() { return &___BLevel1HiScore_9; }
	inline void set_BLevel1HiScore_9(int32_t value)
	{
		___BLevel1HiScore_9 = value;
	}

	inline static int32_t get_offset_of_BLevel2HiScore_10() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel2HiScore_10)); }
	inline int32_t get_BLevel2HiScore_10() const { return ___BLevel2HiScore_10; }
	inline int32_t* get_address_of_BLevel2HiScore_10() { return &___BLevel2HiScore_10; }
	inline void set_BLevel2HiScore_10(int32_t value)
	{
		___BLevel2HiScore_10 = value;
	}

	inline static int32_t get_offset_of_BLevel3HiScore_11() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel3HiScore_11)); }
	inline int32_t get_BLevel3HiScore_11() const { return ___BLevel3HiScore_11; }
	inline int32_t* get_address_of_BLevel3HiScore_11() { return &___BLevel3HiScore_11; }
	inline void set_BLevel3HiScore_11(int32_t value)
	{
		___BLevel3HiScore_11 = value;
	}

	inline static int32_t get_offset_of_BLevel4HiScore_12() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel4HiScore_12)); }
	inline int32_t get_BLevel4HiScore_12() const { return ___BLevel4HiScore_12; }
	inline int32_t* get_address_of_BLevel4HiScore_12() { return &___BLevel4HiScore_12; }
	inline void set_BLevel4HiScore_12(int32_t value)
	{
		___BLevel4HiScore_12 = value;
	}

	inline static int32_t get_offset_of_BLevel5HiScore_13() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel5HiScore_13)); }
	inline int32_t get_BLevel5HiScore_13() const { return ___BLevel5HiScore_13; }
	inline int32_t* get_address_of_BLevel5HiScore_13() { return &___BLevel5HiScore_13; }
	inline void set_BLevel5HiScore_13(int32_t value)
	{
		___BLevel5HiScore_13 = value;
	}

	inline static int32_t get_offset_of_BLevel6HiScore_14() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel6HiScore_14)); }
	inline int32_t get_BLevel6HiScore_14() const { return ___BLevel6HiScore_14; }
	inline int32_t* get_address_of_BLevel6HiScore_14() { return &___BLevel6HiScore_14; }
	inline void set_BLevel6HiScore_14(int32_t value)
	{
		___BLevel6HiScore_14 = value;
	}

	inline static int32_t get_offset_of_Level1Star1_15() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level1Star1_15)); }
	inline int32_t get_Level1Star1_15() const { return ___Level1Star1_15; }
	inline int32_t* get_address_of_Level1Star1_15() { return &___Level1Star1_15; }
	inline void set_Level1Star1_15(int32_t value)
	{
		___Level1Star1_15 = value;
	}

	inline static int32_t get_offset_of_Level1Star2_16() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level1Star2_16)); }
	inline int32_t get_Level1Star2_16() const { return ___Level1Star2_16; }
	inline int32_t* get_address_of_Level1Star2_16() { return &___Level1Star2_16; }
	inline void set_Level1Star2_16(int32_t value)
	{
		___Level1Star2_16 = value;
	}

	inline static int32_t get_offset_of_Level1Star3_17() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level1Star3_17)); }
	inline int32_t get_Level1Star3_17() const { return ___Level1Star3_17; }
	inline int32_t* get_address_of_Level1Star3_17() { return &___Level1Star3_17; }
	inline void set_Level1Star3_17(int32_t value)
	{
		___Level1Star3_17 = value;
	}

	inline static int32_t get_offset_of_Level1Star4_18() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level1Star4_18)); }
	inline int32_t get_Level1Star4_18() const { return ___Level1Star4_18; }
	inline int32_t* get_address_of_Level1Star4_18() { return &___Level1Star4_18; }
	inline void set_Level1Star4_18(int32_t value)
	{
		___Level1Star4_18 = value;
	}

	inline static int32_t get_offset_of_Level2Star1_19() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level2Star1_19)); }
	inline int32_t get_Level2Star1_19() const { return ___Level2Star1_19; }
	inline int32_t* get_address_of_Level2Star1_19() { return &___Level2Star1_19; }
	inline void set_Level2Star1_19(int32_t value)
	{
		___Level2Star1_19 = value;
	}

	inline static int32_t get_offset_of_Level2Star2_20() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level2Star2_20)); }
	inline int32_t get_Level2Star2_20() const { return ___Level2Star2_20; }
	inline int32_t* get_address_of_Level2Star2_20() { return &___Level2Star2_20; }
	inline void set_Level2Star2_20(int32_t value)
	{
		___Level2Star2_20 = value;
	}

	inline static int32_t get_offset_of_Level2Star3_21() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level2Star3_21)); }
	inline int32_t get_Level2Star3_21() const { return ___Level2Star3_21; }
	inline int32_t* get_address_of_Level2Star3_21() { return &___Level2Star3_21; }
	inline void set_Level2Star3_21(int32_t value)
	{
		___Level2Star3_21 = value;
	}

	inline static int32_t get_offset_of_Level2Star4_22() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level2Star4_22)); }
	inline int32_t get_Level2Star4_22() const { return ___Level2Star4_22; }
	inline int32_t* get_address_of_Level2Star4_22() { return &___Level2Star4_22; }
	inline void set_Level2Star4_22(int32_t value)
	{
		___Level2Star4_22 = value;
	}

	inline static int32_t get_offset_of_Level3Star1_23() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level3Star1_23)); }
	inline int32_t get_Level3Star1_23() const { return ___Level3Star1_23; }
	inline int32_t* get_address_of_Level3Star1_23() { return &___Level3Star1_23; }
	inline void set_Level3Star1_23(int32_t value)
	{
		___Level3Star1_23 = value;
	}

	inline static int32_t get_offset_of_Level3Star2_24() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level3Star2_24)); }
	inline int32_t get_Level3Star2_24() const { return ___Level3Star2_24; }
	inline int32_t* get_address_of_Level3Star2_24() { return &___Level3Star2_24; }
	inline void set_Level3Star2_24(int32_t value)
	{
		___Level3Star2_24 = value;
	}

	inline static int32_t get_offset_of_Level3Star3_25() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level3Star3_25)); }
	inline int32_t get_Level3Star3_25() const { return ___Level3Star3_25; }
	inline int32_t* get_address_of_Level3Star3_25() { return &___Level3Star3_25; }
	inline void set_Level3Star3_25(int32_t value)
	{
		___Level3Star3_25 = value;
	}

	inline static int32_t get_offset_of_Level3Star4_26() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level3Star4_26)); }
	inline int32_t get_Level3Star4_26() const { return ___Level3Star4_26; }
	inline int32_t* get_address_of_Level3Star4_26() { return &___Level3Star4_26; }
	inline void set_Level3Star4_26(int32_t value)
	{
		___Level3Star4_26 = value;
	}

	inline static int32_t get_offset_of_Level4Star1_27() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level4Star1_27)); }
	inline int32_t get_Level4Star1_27() const { return ___Level4Star1_27; }
	inline int32_t* get_address_of_Level4Star1_27() { return &___Level4Star1_27; }
	inline void set_Level4Star1_27(int32_t value)
	{
		___Level4Star1_27 = value;
	}

	inline static int32_t get_offset_of_Level4Star2_28() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level4Star2_28)); }
	inline int32_t get_Level4Star2_28() const { return ___Level4Star2_28; }
	inline int32_t* get_address_of_Level4Star2_28() { return &___Level4Star2_28; }
	inline void set_Level4Star2_28(int32_t value)
	{
		___Level4Star2_28 = value;
	}

	inline static int32_t get_offset_of_Level4Star3_29() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level4Star3_29)); }
	inline int32_t get_Level4Star3_29() const { return ___Level4Star3_29; }
	inline int32_t* get_address_of_Level4Star3_29() { return &___Level4Star3_29; }
	inline void set_Level4Star3_29(int32_t value)
	{
		___Level4Star3_29 = value;
	}

	inline static int32_t get_offset_of_Level4Star4_30() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___Level4Star4_30)); }
	inline int32_t get_Level4Star4_30() const { return ___Level4Star4_30; }
	inline int32_t* get_address_of_Level4Star4_30() { return &___Level4Star4_30; }
	inline void set_Level4Star4_30(int32_t value)
	{
		___Level4Star4_30 = value;
	}

	inline static int32_t get_offset_of_BLevel1Star1_31() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel1Star1_31)); }
	inline int32_t get_BLevel1Star1_31() const { return ___BLevel1Star1_31; }
	inline int32_t* get_address_of_BLevel1Star1_31() { return &___BLevel1Star1_31; }
	inline void set_BLevel1Star1_31(int32_t value)
	{
		___BLevel1Star1_31 = value;
	}

	inline static int32_t get_offset_of_BLevel1Star2_32() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel1Star2_32)); }
	inline int32_t get_BLevel1Star2_32() const { return ___BLevel1Star2_32; }
	inline int32_t* get_address_of_BLevel1Star2_32() { return &___BLevel1Star2_32; }
	inline void set_BLevel1Star2_32(int32_t value)
	{
		___BLevel1Star2_32 = value;
	}

	inline static int32_t get_offset_of_BLevel1Star3_33() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel1Star3_33)); }
	inline int32_t get_BLevel1Star3_33() const { return ___BLevel1Star3_33; }
	inline int32_t* get_address_of_BLevel1Star3_33() { return &___BLevel1Star3_33; }
	inline void set_BLevel1Star3_33(int32_t value)
	{
		___BLevel1Star3_33 = value;
	}

	inline static int32_t get_offset_of_BLevel1Star4_34() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel1Star4_34)); }
	inline int32_t get_BLevel1Star4_34() const { return ___BLevel1Star4_34; }
	inline int32_t* get_address_of_BLevel1Star4_34() { return &___BLevel1Star4_34; }
	inline void set_BLevel1Star4_34(int32_t value)
	{
		___BLevel1Star4_34 = value;
	}

	inline static int32_t get_offset_of_BLevel2Star1_35() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel2Star1_35)); }
	inline int32_t get_BLevel2Star1_35() const { return ___BLevel2Star1_35; }
	inline int32_t* get_address_of_BLevel2Star1_35() { return &___BLevel2Star1_35; }
	inline void set_BLevel2Star1_35(int32_t value)
	{
		___BLevel2Star1_35 = value;
	}

	inline static int32_t get_offset_of_BLevel2Star2_36() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel2Star2_36)); }
	inline int32_t get_BLevel2Star2_36() const { return ___BLevel2Star2_36; }
	inline int32_t* get_address_of_BLevel2Star2_36() { return &___BLevel2Star2_36; }
	inline void set_BLevel2Star2_36(int32_t value)
	{
		___BLevel2Star2_36 = value;
	}

	inline static int32_t get_offset_of_BLevel2Star3_37() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel2Star3_37)); }
	inline int32_t get_BLevel2Star3_37() const { return ___BLevel2Star3_37; }
	inline int32_t* get_address_of_BLevel2Star3_37() { return &___BLevel2Star3_37; }
	inline void set_BLevel2Star3_37(int32_t value)
	{
		___BLevel2Star3_37 = value;
	}

	inline static int32_t get_offset_of_BLevel2Star4_38() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel2Star4_38)); }
	inline int32_t get_BLevel2Star4_38() const { return ___BLevel2Star4_38; }
	inline int32_t* get_address_of_BLevel2Star4_38() { return &___BLevel2Star4_38; }
	inline void set_BLevel2Star4_38(int32_t value)
	{
		___BLevel2Star4_38 = value;
	}

	inline static int32_t get_offset_of_BLevel3Star1_39() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel3Star1_39)); }
	inline int32_t get_BLevel3Star1_39() const { return ___BLevel3Star1_39; }
	inline int32_t* get_address_of_BLevel3Star1_39() { return &___BLevel3Star1_39; }
	inline void set_BLevel3Star1_39(int32_t value)
	{
		___BLevel3Star1_39 = value;
	}

	inline static int32_t get_offset_of_BLevel3Star2_40() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel3Star2_40)); }
	inline int32_t get_BLevel3Star2_40() const { return ___BLevel3Star2_40; }
	inline int32_t* get_address_of_BLevel3Star2_40() { return &___BLevel3Star2_40; }
	inline void set_BLevel3Star2_40(int32_t value)
	{
		___BLevel3Star2_40 = value;
	}

	inline static int32_t get_offset_of_BLevel3Star3_41() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel3Star3_41)); }
	inline int32_t get_BLevel3Star3_41() const { return ___BLevel3Star3_41; }
	inline int32_t* get_address_of_BLevel3Star3_41() { return &___BLevel3Star3_41; }
	inline void set_BLevel3Star3_41(int32_t value)
	{
		___BLevel3Star3_41 = value;
	}

	inline static int32_t get_offset_of_BLevel3Star4_42() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel3Star4_42)); }
	inline int32_t get_BLevel3Star4_42() const { return ___BLevel3Star4_42; }
	inline int32_t* get_address_of_BLevel3Star4_42() { return &___BLevel3Star4_42; }
	inline void set_BLevel3Star4_42(int32_t value)
	{
		___BLevel3Star4_42 = value;
	}

	inline static int32_t get_offset_of_BLevel4Star1_43() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel4Star1_43)); }
	inline int32_t get_BLevel4Star1_43() const { return ___BLevel4Star1_43; }
	inline int32_t* get_address_of_BLevel4Star1_43() { return &___BLevel4Star1_43; }
	inline void set_BLevel4Star1_43(int32_t value)
	{
		___BLevel4Star1_43 = value;
	}

	inline static int32_t get_offset_of_BLevel4Star2_44() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel4Star2_44)); }
	inline int32_t get_BLevel4Star2_44() const { return ___BLevel4Star2_44; }
	inline int32_t* get_address_of_BLevel4Star2_44() { return &___BLevel4Star2_44; }
	inline void set_BLevel4Star2_44(int32_t value)
	{
		___BLevel4Star2_44 = value;
	}

	inline static int32_t get_offset_of_BLevel4Star3_45() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel4Star3_45)); }
	inline int32_t get_BLevel4Star3_45() const { return ___BLevel4Star3_45; }
	inline int32_t* get_address_of_BLevel4Star3_45() { return &___BLevel4Star3_45; }
	inline void set_BLevel4Star3_45(int32_t value)
	{
		___BLevel4Star3_45 = value;
	}

	inline static int32_t get_offset_of_BLevel4Star4_46() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel4Star4_46)); }
	inline int32_t get_BLevel4Star4_46() const { return ___BLevel4Star4_46; }
	inline int32_t* get_address_of_BLevel4Star4_46() { return &___BLevel4Star4_46; }
	inline void set_BLevel4Star4_46(int32_t value)
	{
		___BLevel4Star4_46 = value;
	}

	inline static int32_t get_offset_of_BLevel5Star1_47() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel5Star1_47)); }
	inline int32_t get_BLevel5Star1_47() const { return ___BLevel5Star1_47; }
	inline int32_t* get_address_of_BLevel5Star1_47() { return &___BLevel5Star1_47; }
	inline void set_BLevel5Star1_47(int32_t value)
	{
		___BLevel5Star1_47 = value;
	}

	inline static int32_t get_offset_of_BLevel5Star2_48() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel5Star2_48)); }
	inline int32_t get_BLevel5Star2_48() const { return ___BLevel5Star2_48; }
	inline int32_t* get_address_of_BLevel5Star2_48() { return &___BLevel5Star2_48; }
	inline void set_BLevel5Star2_48(int32_t value)
	{
		___BLevel5Star2_48 = value;
	}

	inline static int32_t get_offset_of_BLevel5Star3_49() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel5Star3_49)); }
	inline int32_t get_BLevel5Star3_49() const { return ___BLevel5Star3_49; }
	inline int32_t* get_address_of_BLevel5Star3_49() { return &___BLevel5Star3_49; }
	inline void set_BLevel5Star3_49(int32_t value)
	{
		___BLevel5Star3_49 = value;
	}

	inline static int32_t get_offset_of_BLevel5Star4_50() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel5Star4_50)); }
	inline int32_t get_BLevel5Star4_50() const { return ___BLevel5Star4_50; }
	inline int32_t* get_address_of_BLevel5Star4_50() { return &___BLevel5Star4_50; }
	inline void set_BLevel5Star4_50(int32_t value)
	{
		___BLevel5Star4_50 = value;
	}

	inline static int32_t get_offset_of_BLevel6Star1_51() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel6Star1_51)); }
	inline int32_t get_BLevel6Star1_51() const { return ___BLevel6Star1_51; }
	inline int32_t* get_address_of_BLevel6Star1_51() { return &___BLevel6Star1_51; }
	inline void set_BLevel6Star1_51(int32_t value)
	{
		___BLevel6Star1_51 = value;
	}

	inline static int32_t get_offset_of_BLevel6Star2_52() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel6Star2_52)); }
	inline int32_t get_BLevel6Star2_52() const { return ___BLevel6Star2_52; }
	inline int32_t* get_address_of_BLevel6Star2_52() { return &___BLevel6Star2_52; }
	inline void set_BLevel6Star2_52(int32_t value)
	{
		___BLevel6Star2_52 = value;
	}

	inline static int32_t get_offset_of_BLevel6Star3_53() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel6Star3_53)); }
	inline int32_t get_BLevel6Star3_53() const { return ___BLevel6Star3_53; }
	inline int32_t* get_address_of_BLevel6Star3_53() { return &___BLevel6Star3_53; }
	inline void set_BLevel6Star3_53(int32_t value)
	{
		___BLevel6Star3_53 = value;
	}

	inline static int32_t get_offset_of_BLevel6Star4_54() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___BLevel6Star4_54)); }
	inline int32_t get_BLevel6Star4_54() const { return ___BLevel6Star4_54; }
	inline int32_t* get_address_of_BLevel6Star4_54() { return &___BLevel6Star4_54; }
	inline void set_BLevel6Star4_54(int32_t value)
	{
		___BLevel6Star4_54 = value;
	}

	inline static int32_t get_offset_of_LevelDatas_55() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0, ___LevelDatas_55)); }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE * get_LevelDatas_55() const { return ___LevelDatas_55; }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE ** get_address_of_LevelDatas_55() { return &___LevelDatas_55; }
	inline void set_LevelDatas_55(List_1_tEB4537E121ED7128292F5E49486823EB846576FE * value)
	{
		___LevelDatas_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelDatas_55), (void*)value);
	}
};

struct HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0_StaticFields
{
public:
	// HeadManager HeadManager::<Instance>k__BackingField
	HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// LevelData
struct LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 LevelData::par
	int32_t ___par_4;
	// System.Int32 LevelData::shots
	int32_t ___shots_5;
	// System.Int32 LevelData::LevelID
	int32_t ___LevelID_6;
	// System.String LevelData::LevelName
	String_t* ___LevelName_7;
	// System.Int32 LevelData::HighScore
	int32_t ___HighScore_8;
	// System.Int32 LevelData::score
	int32_t ___score_9;
	// System.Int32 LevelData::punishment
	int32_t ___punishment_10;
	// System.Int32 LevelData::reward
	int32_t ___reward_11;
	// System.Int32 LevelData::StarScore1
	int32_t ___StarScore1_12;
	// System.Int32 LevelData::StarScore2
	int32_t ___StarScore2_13;
	// System.Int32 LevelData::StarScore3
	int32_t ___StarScore3_14;
	// System.Int32 LevelData::SuperStarScore
	int32_t ___SuperStarScore_15;
	// UnityEngine.GameObject LevelData::Star1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Star1_16;
	// UnityEngine.GameObject LevelData::Star2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Star2_17;
	// UnityEngine.GameObject LevelData::Star3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Star3_18;
	// UnityEngine.GameObject LevelData::SuperStar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SuperStar_19;
	// UnityEngine.GameObject LevelData::ScoringUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ScoringUI_20;
	// UnityEngine.UI.Text LevelData::ScoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ScoreText_21;
	// UnityEngine.UI.Text LevelData::ScoreNameText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ScoreNameText_22;
	// System.Int32 LevelData::tempscore
	int32_t ___tempscore_23;
	// System.String LevelData::ScoreName
	String_t* ___ScoreName_24;

public:
	inline static int32_t get_offset_of_par_4() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___par_4)); }
	inline int32_t get_par_4() const { return ___par_4; }
	inline int32_t* get_address_of_par_4() { return &___par_4; }
	inline void set_par_4(int32_t value)
	{
		___par_4 = value;
	}

	inline static int32_t get_offset_of_shots_5() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___shots_5)); }
	inline int32_t get_shots_5() const { return ___shots_5; }
	inline int32_t* get_address_of_shots_5() { return &___shots_5; }
	inline void set_shots_5(int32_t value)
	{
		___shots_5 = value;
	}

	inline static int32_t get_offset_of_LevelID_6() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___LevelID_6)); }
	inline int32_t get_LevelID_6() const { return ___LevelID_6; }
	inline int32_t* get_address_of_LevelID_6() { return &___LevelID_6; }
	inline void set_LevelID_6(int32_t value)
	{
		___LevelID_6 = value;
	}

	inline static int32_t get_offset_of_LevelName_7() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___LevelName_7)); }
	inline String_t* get_LevelName_7() const { return ___LevelName_7; }
	inline String_t** get_address_of_LevelName_7() { return &___LevelName_7; }
	inline void set_LevelName_7(String_t* value)
	{
		___LevelName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelName_7), (void*)value);
	}

	inline static int32_t get_offset_of_HighScore_8() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___HighScore_8)); }
	inline int32_t get_HighScore_8() const { return ___HighScore_8; }
	inline int32_t* get_address_of_HighScore_8() { return &___HighScore_8; }
	inline void set_HighScore_8(int32_t value)
	{
		___HighScore_8 = value;
	}

	inline static int32_t get_offset_of_score_9() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___score_9)); }
	inline int32_t get_score_9() const { return ___score_9; }
	inline int32_t* get_address_of_score_9() { return &___score_9; }
	inline void set_score_9(int32_t value)
	{
		___score_9 = value;
	}

	inline static int32_t get_offset_of_punishment_10() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___punishment_10)); }
	inline int32_t get_punishment_10() const { return ___punishment_10; }
	inline int32_t* get_address_of_punishment_10() { return &___punishment_10; }
	inline void set_punishment_10(int32_t value)
	{
		___punishment_10 = value;
	}

	inline static int32_t get_offset_of_reward_11() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___reward_11)); }
	inline int32_t get_reward_11() const { return ___reward_11; }
	inline int32_t* get_address_of_reward_11() { return &___reward_11; }
	inline void set_reward_11(int32_t value)
	{
		___reward_11 = value;
	}

	inline static int32_t get_offset_of_StarScore1_12() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___StarScore1_12)); }
	inline int32_t get_StarScore1_12() const { return ___StarScore1_12; }
	inline int32_t* get_address_of_StarScore1_12() { return &___StarScore1_12; }
	inline void set_StarScore1_12(int32_t value)
	{
		___StarScore1_12 = value;
	}

	inline static int32_t get_offset_of_StarScore2_13() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___StarScore2_13)); }
	inline int32_t get_StarScore2_13() const { return ___StarScore2_13; }
	inline int32_t* get_address_of_StarScore2_13() { return &___StarScore2_13; }
	inline void set_StarScore2_13(int32_t value)
	{
		___StarScore2_13 = value;
	}

	inline static int32_t get_offset_of_StarScore3_14() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___StarScore3_14)); }
	inline int32_t get_StarScore3_14() const { return ___StarScore3_14; }
	inline int32_t* get_address_of_StarScore3_14() { return &___StarScore3_14; }
	inline void set_StarScore3_14(int32_t value)
	{
		___StarScore3_14 = value;
	}

	inline static int32_t get_offset_of_SuperStarScore_15() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___SuperStarScore_15)); }
	inline int32_t get_SuperStarScore_15() const { return ___SuperStarScore_15; }
	inline int32_t* get_address_of_SuperStarScore_15() { return &___SuperStarScore_15; }
	inline void set_SuperStarScore_15(int32_t value)
	{
		___SuperStarScore_15 = value;
	}

	inline static int32_t get_offset_of_Star1_16() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___Star1_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Star1_16() const { return ___Star1_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Star1_16() { return &___Star1_16; }
	inline void set_Star1_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Star1_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Star1_16), (void*)value);
	}

	inline static int32_t get_offset_of_Star2_17() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___Star2_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Star2_17() const { return ___Star2_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Star2_17() { return &___Star2_17; }
	inline void set_Star2_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Star2_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Star2_17), (void*)value);
	}

	inline static int32_t get_offset_of_Star3_18() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___Star3_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Star3_18() const { return ___Star3_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Star3_18() { return &___Star3_18; }
	inline void set_Star3_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Star3_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Star3_18), (void*)value);
	}

	inline static int32_t get_offset_of_SuperStar_19() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___SuperStar_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SuperStar_19() const { return ___SuperStar_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SuperStar_19() { return &___SuperStar_19; }
	inline void set_SuperStar_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SuperStar_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SuperStar_19), (void*)value);
	}

	inline static int32_t get_offset_of_ScoringUI_20() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___ScoringUI_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ScoringUI_20() const { return ___ScoringUI_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ScoringUI_20() { return &___ScoringUI_20; }
	inline void set_ScoringUI_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ScoringUI_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScoringUI_20), (void*)value);
	}

	inline static int32_t get_offset_of_ScoreText_21() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___ScoreText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ScoreText_21() const { return ___ScoreText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ScoreText_21() { return &___ScoreText_21; }
	inline void set_ScoreText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ScoreText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScoreText_21), (void*)value);
	}

	inline static int32_t get_offset_of_ScoreNameText_22() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___ScoreNameText_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ScoreNameText_22() const { return ___ScoreNameText_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ScoreNameText_22() { return &___ScoreNameText_22; }
	inline void set_ScoreNameText_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ScoreNameText_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScoreNameText_22), (void*)value);
	}

	inline static int32_t get_offset_of_tempscore_23() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___tempscore_23)); }
	inline int32_t get_tempscore_23() const { return ___tempscore_23; }
	inline int32_t* get_address_of_tempscore_23() { return &___tempscore_23; }
	inline void set_tempscore_23(int32_t value)
	{
		___tempscore_23 = value;
	}

	inline static int32_t get_offset_of_ScoreName_24() { return static_cast<int32_t>(offsetof(LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A, ___ScoreName_24)); }
	inline String_t* get_ScoreName_24() const { return ___ScoreName_24; }
	inline String_t** get_address_of_ScoreName_24() { return &___ScoreName_24; }
	inline void set_ScoreName_24(String_t* value)
	{
		___ScoreName_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScoreName_24), (void*)value);
	}
};


// LevelSelectManager
struct LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 LevelSelectManager::Level1Highscore
	int32_t ___Level1Highscore_4;
	// System.Int32 LevelSelectManager::Level2Highscore
	int32_t ___Level2Highscore_5;
	// System.Int32 LevelSelectManager::Level3Highscore
	int32_t ___Level3Highscore_6;
	// System.Int32 LevelSelectManager::Level4Highscore
	int32_t ___Level4Highscore_7;
	// System.Int32 LevelSelectManager::BLevel1Highscore
	int32_t ___BLevel1Highscore_8;
	// System.Int32 LevelSelectManager::BLevel2Highscore
	int32_t ___BLevel2Highscore_9;
	// System.Int32 LevelSelectManager::BLevel3Highscore
	int32_t ___BLevel3Highscore_10;
	// System.Int32 LevelSelectManager::BLevel4Highscore
	int32_t ___BLevel4Highscore_11;
	// System.Int32 LevelSelectManager::BLevel5Highscore
	int32_t ___BLevel5Highscore_12;
	// System.Int32 LevelSelectManager::BLevel6Highscore
	int32_t ___BLevel6Highscore_13;
	// UnityEngine.UI.Text LevelSelectManager::Level1Score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Level1Score_14;
	// UnityEngine.UI.Text LevelSelectManager::Level2Score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Level2Score_15;
	// UnityEngine.UI.Text LevelSelectManager::Level3Score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Level3Score_16;
	// UnityEngine.UI.Text LevelSelectManager::Level4Score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Level4Score_17;
	// UnityEngine.UI.Text LevelSelectManager::BLevel1Score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___BLevel1Score_18;
	// UnityEngine.UI.Text LevelSelectManager::BLevel2Score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___BLevel2Score_19;
	// UnityEngine.UI.Text LevelSelectManager::BLevel3Score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___BLevel3Score_20;
	// UnityEngine.UI.Text LevelSelectManager::BLevel4Score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___BLevel4Score_21;
	// UnityEngine.UI.Text LevelSelectManager::BLevel5Score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___BLevel5Score_22;
	// UnityEngine.UI.Text LevelSelectManager::BLevel6Score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___BLevel6Score_23;
	// UnityEngine.GameObject LevelSelectManager::Level1Star1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level1Star1_24;
	// UnityEngine.GameObject LevelSelectManager::Level1Star2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level1Star2_25;
	// UnityEngine.GameObject LevelSelectManager::Level1Star3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level1Star3_26;
	// UnityEngine.GameObject LevelSelectManager::Level1Star4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level1Star4_27;
	// UnityEngine.GameObject LevelSelectManager::Level2Star1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level2Star1_28;
	// UnityEngine.GameObject LevelSelectManager::Level2Star2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level2Star2_29;
	// UnityEngine.GameObject LevelSelectManager::Level2Star3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level2Star3_30;
	// UnityEngine.GameObject LevelSelectManager::Level2Star4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level2Star4_31;
	// UnityEngine.GameObject LevelSelectManager::Level3Star1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level3Star1_32;
	// UnityEngine.GameObject LevelSelectManager::Level3Star2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level3Star2_33;
	// UnityEngine.GameObject LevelSelectManager::Level3Star3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level3Star3_34;
	// UnityEngine.GameObject LevelSelectManager::Level3Star4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level3Star4_35;
	// UnityEngine.GameObject LevelSelectManager::Level4Star1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level4Star1_36;
	// UnityEngine.GameObject LevelSelectManager::Level4Star2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level4Star2_37;
	// UnityEngine.GameObject LevelSelectManager::Level4Star3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level4Star3_38;
	// UnityEngine.GameObject LevelSelectManager::Level4Star4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level4Star4_39;
	// UnityEngine.GameObject LevelSelectManager::BLevel1Star1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel1Star1_40;
	// UnityEngine.GameObject LevelSelectManager::BLevel1Star2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel1Star2_41;
	// UnityEngine.GameObject LevelSelectManager::BLevel1Star3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel1Star3_42;
	// UnityEngine.GameObject LevelSelectManager::BLevel1Star4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel1Star4_43;
	// UnityEngine.GameObject LevelSelectManager::BLevel2Star1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel2Star1_44;
	// UnityEngine.GameObject LevelSelectManager::BLevel2Star2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel2Star2_45;
	// UnityEngine.GameObject LevelSelectManager::BLevel2Star3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel2Star3_46;
	// UnityEngine.GameObject LevelSelectManager::BLevel2Star4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel2Star4_47;
	// UnityEngine.GameObject LevelSelectManager::BLevel3Star1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel3Star1_48;
	// UnityEngine.GameObject LevelSelectManager::BLevel3Star2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel3Star2_49;
	// UnityEngine.GameObject LevelSelectManager::BLevel3Star3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel3Star3_50;
	// UnityEngine.GameObject LevelSelectManager::BLevel3Star4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel3Star4_51;
	// UnityEngine.GameObject LevelSelectManager::BLevel4Star1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel4Star1_52;
	// UnityEngine.GameObject LevelSelectManager::BLevel4Star2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel4Star2_53;
	// UnityEngine.GameObject LevelSelectManager::BLevel4Star3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel4Star3_54;
	// UnityEngine.GameObject LevelSelectManager::BLevel4Star4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel4Star4_55;
	// UnityEngine.GameObject LevelSelectManager::BLevel5Star1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel5Star1_56;
	// UnityEngine.GameObject LevelSelectManager::BLevel5Star2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel5Star2_57;
	// UnityEngine.GameObject LevelSelectManager::BLevel5Star3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel5Star3_58;
	// UnityEngine.GameObject LevelSelectManager::BLevel5Star4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel5Star4_59;
	// UnityEngine.GameObject LevelSelectManager::BLevel6Star1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel6Star1_60;
	// UnityEngine.GameObject LevelSelectManager::BLevel6Star2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel6Star2_61;
	// UnityEngine.GameObject LevelSelectManager::BLevel6Star3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel6Star3_62;
	// UnityEngine.GameObject LevelSelectManager::BLevel6Star4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BLevel6Star4_63;
	// UnityEngine.UI.Button LevelSelectManager::Level1Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Level1Button_64;
	// UnityEngine.UI.Button LevelSelectManager::Level2Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Level2Button_65;
	// UnityEngine.UI.Button LevelSelectManager::Level3Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Level3Button_66;
	// UnityEngine.UI.Button LevelSelectManager::Level4Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Level4Button_67;
	// UnityEngine.UI.Button LevelSelectManager::Level5Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Level5Button_68;
	// UnityEngine.UI.Button LevelSelectManager::Level6Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Level6Button_69;
	// UnityEngine.UI.Text LevelSelectManager::StarCounter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___StarCounter_70;
	// System.Int32 LevelSelectManager::Stars
	int32_t ___Stars_71;
	// System.Int32 LevelSelectManager::Page
	int32_t ___Page_72;
	// UnityEngine.GameObject LevelSelectManager::Page1UI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Page1UI_73;
	// UnityEngine.GameObject LevelSelectManager::Page2UI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Page2UI_74;

public:
	inline static int32_t get_offset_of_Level1Highscore_4() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level1Highscore_4)); }
	inline int32_t get_Level1Highscore_4() const { return ___Level1Highscore_4; }
	inline int32_t* get_address_of_Level1Highscore_4() { return &___Level1Highscore_4; }
	inline void set_Level1Highscore_4(int32_t value)
	{
		___Level1Highscore_4 = value;
	}

	inline static int32_t get_offset_of_Level2Highscore_5() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level2Highscore_5)); }
	inline int32_t get_Level2Highscore_5() const { return ___Level2Highscore_5; }
	inline int32_t* get_address_of_Level2Highscore_5() { return &___Level2Highscore_5; }
	inline void set_Level2Highscore_5(int32_t value)
	{
		___Level2Highscore_5 = value;
	}

	inline static int32_t get_offset_of_Level3Highscore_6() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level3Highscore_6)); }
	inline int32_t get_Level3Highscore_6() const { return ___Level3Highscore_6; }
	inline int32_t* get_address_of_Level3Highscore_6() { return &___Level3Highscore_6; }
	inline void set_Level3Highscore_6(int32_t value)
	{
		___Level3Highscore_6 = value;
	}

	inline static int32_t get_offset_of_Level4Highscore_7() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level4Highscore_7)); }
	inline int32_t get_Level4Highscore_7() const { return ___Level4Highscore_7; }
	inline int32_t* get_address_of_Level4Highscore_7() { return &___Level4Highscore_7; }
	inline void set_Level4Highscore_7(int32_t value)
	{
		___Level4Highscore_7 = value;
	}

	inline static int32_t get_offset_of_BLevel1Highscore_8() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel1Highscore_8)); }
	inline int32_t get_BLevel1Highscore_8() const { return ___BLevel1Highscore_8; }
	inline int32_t* get_address_of_BLevel1Highscore_8() { return &___BLevel1Highscore_8; }
	inline void set_BLevel1Highscore_8(int32_t value)
	{
		___BLevel1Highscore_8 = value;
	}

	inline static int32_t get_offset_of_BLevel2Highscore_9() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel2Highscore_9)); }
	inline int32_t get_BLevel2Highscore_9() const { return ___BLevel2Highscore_9; }
	inline int32_t* get_address_of_BLevel2Highscore_9() { return &___BLevel2Highscore_9; }
	inline void set_BLevel2Highscore_9(int32_t value)
	{
		___BLevel2Highscore_9 = value;
	}

	inline static int32_t get_offset_of_BLevel3Highscore_10() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel3Highscore_10)); }
	inline int32_t get_BLevel3Highscore_10() const { return ___BLevel3Highscore_10; }
	inline int32_t* get_address_of_BLevel3Highscore_10() { return &___BLevel3Highscore_10; }
	inline void set_BLevel3Highscore_10(int32_t value)
	{
		___BLevel3Highscore_10 = value;
	}

	inline static int32_t get_offset_of_BLevel4Highscore_11() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel4Highscore_11)); }
	inline int32_t get_BLevel4Highscore_11() const { return ___BLevel4Highscore_11; }
	inline int32_t* get_address_of_BLevel4Highscore_11() { return &___BLevel4Highscore_11; }
	inline void set_BLevel4Highscore_11(int32_t value)
	{
		___BLevel4Highscore_11 = value;
	}

	inline static int32_t get_offset_of_BLevel5Highscore_12() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel5Highscore_12)); }
	inline int32_t get_BLevel5Highscore_12() const { return ___BLevel5Highscore_12; }
	inline int32_t* get_address_of_BLevel5Highscore_12() { return &___BLevel5Highscore_12; }
	inline void set_BLevel5Highscore_12(int32_t value)
	{
		___BLevel5Highscore_12 = value;
	}

	inline static int32_t get_offset_of_BLevel6Highscore_13() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel6Highscore_13)); }
	inline int32_t get_BLevel6Highscore_13() const { return ___BLevel6Highscore_13; }
	inline int32_t* get_address_of_BLevel6Highscore_13() { return &___BLevel6Highscore_13; }
	inline void set_BLevel6Highscore_13(int32_t value)
	{
		___BLevel6Highscore_13 = value;
	}

	inline static int32_t get_offset_of_Level1Score_14() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level1Score_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Level1Score_14() const { return ___Level1Score_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Level1Score_14() { return &___Level1Score_14; }
	inline void set_Level1Score_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Level1Score_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level1Score_14), (void*)value);
	}

	inline static int32_t get_offset_of_Level2Score_15() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level2Score_15)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Level2Score_15() const { return ___Level2Score_15; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Level2Score_15() { return &___Level2Score_15; }
	inline void set_Level2Score_15(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Level2Score_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level2Score_15), (void*)value);
	}

	inline static int32_t get_offset_of_Level3Score_16() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level3Score_16)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Level3Score_16() const { return ___Level3Score_16; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Level3Score_16() { return &___Level3Score_16; }
	inline void set_Level3Score_16(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Level3Score_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level3Score_16), (void*)value);
	}

	inline static int32_t get_offset_of_Level4Score_17() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level4Score_17)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Level4Score_17() const { return ___Level4Score_17; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Level4Score_17() { return &___Level4Score_17; }
	inline void set_Level4Score_17(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Level4Score_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level4Score_17), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel1Score_18() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel1Score_18)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_BLevel1Score_18() const { return ___BLevel1Score_18; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_BLevel1Score_18() { return &___BLevel1Score_18; }
	inline void set_BLevel1Score_18(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___BLevel1Score_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel1Score_18), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel2Score_19() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel2Score_19)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_BLevel2Score_19() const { return ___BLevel2Score_19; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_BLevel2Score_19() { return &___BLevel2Score_19; }
	inline void set_BLevel2Score_19(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___BLevel2Score_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel2Score_19), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel3Score_20() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel3Score_20)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_BLevel3Score_20() const { return ___BLevel3Score_20; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_BLevel3Score_20() { return &___BLevel3Score_20; }
	inline void set_BLevel3Score_20(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___BLevel3Score_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel3Score_20), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel4Score_21() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel4Score_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_BLevel4Score_21() const { return ___BLevel4Score_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_BLevel4Score_21() { return &___BLevel4Score_21; }
	inline void set_BLevel4Score_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___BLevel4Score_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel4Score_21), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel5Score_22() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel5Score_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_BLevel5Score_22() const { return ___BLevel5Score_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_BLevel5Score_22() { return &___BLevel5Score_22; }
	inline void set_BLevel5Score_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___BLevel5Score_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel5Score_22), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel6Score_23() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel6Score_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_BLevel6Score_23() const { return ___BLevel6Score_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_BLevel6Score_23() { return &___BLevel6Score_23; }
	inline void set_BLevel6Score_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___BLevel6Score_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel6Score_23), (void*)value);
	}

	inline static int32_t get_offset_of_Level1Star1_24() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level1Star1_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level1Star1_24() const { return ___Level1Star1_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level1Star1_24() { return &___Level1Star1_24; }
	inline void set_Level1Star1_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level1Star1_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level1Star1_24), (void*)value);
	}

	inline static int32_t get_offset_of_Level1Star2_25() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level1Star2_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level1Star2_25() const { return ___Level1Star2_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level1Star2_25() { return &___Level1Star2_25; }
	inline void set_Level1Star2_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level1Star2_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level1Star2_25), (void*)value);
	}

	inline static int32_t get_offset_of_Level1Star3_26() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level1Star3_26)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level1Star3_26() const { return ___Level1Star3_26; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level1Star3_26() { return &___Level1Star3_26; }
	inline void set_Level1Star3_26(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level1Star3_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level1Star3_26), (void*)value);
	}

	inline static int32_t get_offset_of_Level1Star4_27() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level1Star4_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level1Star4_27() const { return ___Level1Star4_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level1Star4_27() { return &___Level1Star4_27; }
	inline void set_Level1Star4_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level1Star4_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level1Star4_27), (void*)value);
	}

	inline static int32_t get_offset_of_Level2Star1_28() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level2Star1_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level2Star1_28() const { return ___Level2Star1_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level2Star1_28() { return &___Level2Star1_28; }
	inline void set_Level2Star1_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level2Star1_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level2Star1_28), (void*)value);
	}

	inline static int32_t get_offset_of_Level2Star2_29() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level2Star2_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level2Star2_29() const { return ___Level2Star2_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level2Star2_29() { return &___Level2Star2_29; }
	inline void set_Level2Star2_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level2Star2_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level2Star2_29), (void*)value);
	}

	inline static int32_t get_offset_of_Level2Star3_30() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level2Star3_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level2Star3_30() const { return ___Level2Star3_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level2Star3_30() { return &___Level2Star3_30; }
	inline void set_Level2Star3_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level2Star3_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level2Star3_30), (void*)value);
	}

	inline static int32_t get_offset_of_Level2Star4_31() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level2Star4_31)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level2Star4_31() const { return ___Level2Star4_31; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level2Star4_31() { return &___Level2Star4_31; }
	inline void set_Level2Star4_31(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level2Star4_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level2Star4_31), (void*)value);
	}

	inline static int32_t get_offset_of_Level3Star1_32() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level3Star1_32)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level3Star1_32() const { return ___Level3Star1_32; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level3Star1_32() { return &___Level3Star1_32; }
	inline void set_Level3Star1_32(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level3Star1_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level3Star1_32), (void*)value);
	}

	inline static int32_t get_offset_of_Level3Star2_33() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level3Star2_33)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level3Star2_33() const { return ___Level3Star2_33; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level3Star2_33() { return &___Level3Star2_33; }
	inline void set_Level3Star2_33(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level3Star2_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level3Star2_33), (void*)value);
	}

	inline static int32_t get_offset_of_Level3Star3_34() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level3Star3_34)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level3Star3_34() const { return ___Level3Star3_34; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level3Star3_34() { return &___Level3Star3_34; }
	inline void set_Level3Star3_34(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level3Star3_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level3Star3_34), (void*)value);
	}

	inline static int32_t get_offset_of_Level3Star4_35() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level3Star4_35)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level3Star4_35() const { return ___Level3Star4_35; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level3Star4_35() { return &___Level3Star4_35; }
	inline void set_Level3Star4_35(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level3Star4_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level3Star4_35), (void*)value);
	}

	inline static int32_t get_offset_of_Level4Star1_36() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level4Star1_36)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level4Star1_36() const { return ___Level4Star1_36; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level4Star1_36() { return &___Level4Star1_36; }
	inline void set_Level4Star1_36(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level4Star1_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level4Star1_36), (void*)value);
	}

	inline static int32_t get_offset_of_Level4Star2_37() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level4Star2_37)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level4Star2_37() const { return ___Level4Star2_37; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level4Star2_37() { return &___Level4Star2_37; }
	inline void set_Level4Star2_37(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level4Star2_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level4Star2_37), (void*)value);
	}

	inline static int32_t get_offset_of_Level4Star3_38() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level4Star3_38)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level4Star3_38() const { return ___Level4Star3_38; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level4Star3_38() { return &___Level4Star3_38; }
	inline void set_Level4Star3_38(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level4Star3_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level4Star3_38), (void*)value);
	}

	inline static int32_t get_offset_of_Level4Star4_39() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level4Star4_39)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level4Star4_39() const { return ___Level4Star4_39; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level4Star4_39() { return &___Level4Star4_39; }
	inline void set_Level4Star4_39(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level4Star4_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level4Star4_39), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel1Star1_40() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel1Star1_40)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel1Star1_40() const { return ___BLevel1Star1_40; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel1Star1_40() { return &___BLevel1Star1_40; }
	inline void set_BLevel1Star1_40(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel1Star1_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel1Star1_40), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel1Star2_41() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel1Star2_41)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel1Star2_41() const { return ___BLevel1Star2_41; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel1Star2_41() { return &___BLevel1Star2_41; }
	inline void set_BLevel1Star2_41(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel1Star2_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel1Star2_41), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel1Star3_42() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel1Star3_42)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel1Star3_42() const { return ___BLevel1Star3_42; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel1Star3_42() { return &___BLevel1Star3_42; }
	inline void set_BLevel1Star3_42(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel1Star3_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel1Star3_42), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel1Star4_43() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel1Star4_43)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel1Star4_43() const { return ___BLevel1Star4_43; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel1Star4_43() { return &___BLevel1Star4_43; }
	inline void set_BLevel1Star4_43(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel1Star4_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel1Star4_43), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel2Star1_44() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel2Star1_44)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel2Star1_44() const { return ___BLevel2Star1_44; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel2Star1_44() { return &___BLevel2Star1_44; }
	inline void set_BLevel2Star1_44(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel2Star1_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel2Star1_44), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel2Star2_45() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel2Star2_45)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel2Star2_45() const { return ___BLevel2Star2_45; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel2Star2_45() { return &___BLevel2Star2_45; }
	inline void set_BLevel2Star2_45(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel2Star2_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel2Star2_45), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel2Star3_46() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel2Star3_46)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel2Star3_46() const { return ___BLevel2Star3_46; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel2Star3_46() { return &___BLevel2Star3_46; }
	inline void set_BLevel2Star3_46(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel2Star3_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel2Star3_46), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel2Star4_47() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel2Star4_47)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel2Star4_47() const { return ___BLevel2Star4_47; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel2Star4_47() { return &___BLevel2Star4_47; }
	inline void set_BLevel2Star4_47(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel2Star4_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel2Star4_47), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel3Star1_48() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel3Star1_48)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel3Star1_48() const { return ___BLevel3Star1_48; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel3Star1_48() { return &___BLevel3Star1_48; }
	inline void set_BLevel3Star1_48(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel3Star1_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel3Star1_48), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel3Star2_49() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel3Star2_49)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel3Star2_49() const { return ___BLevel3Star2_49; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel3Star2_49() { return &___BLevel3Star2_49; }
	inline void set_BLevel3Star2_49(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel3Star2_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel3Star2_49), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel3Star3_50() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel3Star3_50)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel3Star3_50() const { return ___BLevel3Star3_50; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel3Star3_50() { return &___BLevel3Star3_50; }
	inline void set_BLevel3Star3_50(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel3Star3_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel3Star3_50), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel3Star4_51() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel3Star4_51)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel3Star4_51() const { return ___BLevel3Star4_51; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel3Star4_51() { return &___BLevel3Star4_51; }
	inline void set_BLevel3Star4_51(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel3Star4_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel3Star4_51), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel4Star1_52() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel4Star1_52)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel4Star1_52() const { return ___BLevel4Star1_52; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel4Star1_52() { return &___BLevel4Star1_52; }
	inline void set_BLevel4Star1_52(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel4Star1_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel4Star1_52), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel4Star2_53() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel4Star2_53)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel4Star2_53() const { return ___BLevel4Star2_53; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel4Star2_53() { return &___BLevel4Star2_53; }
	inline void set_BLevel4Star2_53(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel4Star2_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel4Star2_53), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel4Star3_54() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel4Star3_54)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel4Star3_54() const { return ___BLevel4Star3_54; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel4Star3_54() { return &___BLevel4Star3_54; }
	inline void set_BLevel4Star3_54(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel4Star3_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel4Star3_54), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel4Star4_55() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel4Star4_55)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel4Star4_55() const { return ___BLevel4Star4_55; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel4Star4_55() { return &___BLevel4Star4_55; }
	inline void set_BLevel4Star4_55(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel4Star4_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel4Star4_55), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel5Star1_56() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel5Star1_56)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel5Star1_56() const { return ___BLevel5Star1_56; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel5Star1_56() { return &___BLevel5Star1_56; }
	inline void set_BLevel5Star1_56(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel5Star1_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel5Star1_56), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel5Star2_57() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel5Star2_57)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel5Star2_57() const { return ___BLevel5Star2_57; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel5Star2_57() { return &___BLevel5Star2_57; }
	inline void set_BLevel5Star2_57(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel5Star2_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel5Star2_57), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel5Star3_58() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel5Star3_58)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel5Star3_58() const { return ___BLevel5Star3_58; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel5Star3_58() { return &___BLevel5Star3_58; }
	inline void set_BLevel5Star3_58(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel5Star3_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel5Star3_58), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel5Star4_59() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel5Star4_59)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel5Star4_59() const { return ___BLevel5Star4_59; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel5Star4_59() { return &___BLevel5Star4_59; }
	inline void set_BLevel5Star4_59(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel5Star4_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel5Star4_59), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel6Star1_60() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel6Star1_60)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel6Star1_60() const { return ___BLevel6Star1_60; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel6Star1_60() { return &___BLevel6Star1_60; }
	inline void set_BLevel6Star1_60(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel6Star1_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel6Star1_60), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel6Star2_61() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel6Star2_61)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel6Star2_61() const { return ___BLevel6Star2_61; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel6Star2_61() { return &___BLevel6Star2_61; }
	inline void set_BLevel6Star2_61(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel6Star2_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel6Star2_61), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel6Star3_62() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel6Star3_62)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel6Star3_62() const { return ___BLevel6Star3_62; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel6Star3_62() { return &___BLevel6Star3_62; }
	inline void set_BLevel6Star3_62(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel6Star3_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel6Star3_62), (void*)value);
	}

	inline static int32_t get_offset_of_BLevel6Star4_63() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___BLevel6Star4_63)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BLevel6Star4_63() const { return ___BLevel6Star4_63; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BLevel6Star4_63() { return &___BLevel6Star4_63; }
	inline void set_BLevel6Star4_63(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BLevel6Star4_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BLevel6Star4_63), (void*)value);
	}

	inline static int32_t get_offset_of_Level1Button_64() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level1Button_64)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Level1Button_64() const { return ___Level1Button_64; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Level1Button_64() { return &___Level1Button_64; }
	inline void set_Level1Button_64(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Level1Button_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level1Button_64), (void*)value);
	}

	inline static int32_t get_offset_of_Level2Button_65() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level2Button_65)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Level2Button_65() const { return ___Level2Button_65; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Level2Button_65() { return &___Level2Button_65; }
	inline void set_Level2Button_65(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Level2Button_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level2Button_65), (void*)value);
	}

	inline static int32_t get_offset_of_Level3Button_66() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level3Button_66)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Level3Button_66() const { return ___Level3Button_66; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Level3Button_66() { return &___Level3Button_66; }
	inline void set_Level3Button_66(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Level3Button_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level3Button_66), (void*)value);
	}

	inline static int32_t get_offset_of_Level4Button_67() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level4Button_67)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Level4Button_67() const { return ___Level4Button_67; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Level4Button_67() { return &___Level4Button_67; }
	inline void set_Level4Button_67(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Level4Button_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level4Button_67), (void*)value);
	}

	inline static int32_t get_offset_of_Level5Button_68() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level5Button_68)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Level5Button_68() const { return ___Level5Button_68; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Level5Button_68() { return &___Level5Button_68; }
	inline void set_Level5Button_68(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Level5Button_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level5Button_68), (void*)value);
	}

	inline static int32_t get_offset_of_Level6Button_69() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Level6Button_69)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Level6Button_69() const { return ___Level6Button_69; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Level6Button_69() { return &___Level6Button_69; }
	inline void set_Level6Button_69(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Level6Button_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level6Button_69), (void*)value);
	}

	inline static int32_t get_offset_of_StarCounter_70() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___StarCounter_70)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_StarCounter_70() const { return ___StarCounter_70; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_StarCounter_70() { return &___StarCounter_70; }
	inline void set_StarCounter_70(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___StarCounter_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StarCounter_70), (void*)value);
	}

	inline static int32_t get_offset_of_Stars_71() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Stars_71)); }
	inline int32_t get_Stars_71() const { return ___Stars_71; }
	inline int32_t* get_address_of_Stars_71() { return &___Stars_71; }
	inline void set_Stars_71(int32_t value)
	{
		___Stars_71 = value;
	}

	inline static int32_t get_offset_of_Page_72() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Page_72)); }
	inline int32_t get_Page_72() const { return ___Page_72; }
	inline int32_t* get_address_of_Page_72() { return &___Page_72; }
	inline void set_Page_72(int32_t value)
	{
		___Page_72 = value;
	}

	inline static int32_t get_offset_of_Page1UI_73() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Page1UI_73)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Page1UI_73() const { return ___Page1UI_73; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Page1UI_73() { return &___Page1UI_73; }
	inline void set_Page1UI_73(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Page1UI_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Page1UI_73), (void*)value);
	}

	inline static int32_t get_offset_of_Page2UI_74() { return static_cast<int32_t>(offsetof(LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58, ___Page2UI_74)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Page2UI_74() const { return ___Page2UI_74; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Page2UI_74() { return &___Page2UI_74; }
	inline void set_Page2UI_74(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Page2UI_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Page2UI_74), (void*)value);
	}
};


// MainElevator
struct MainElevator_t594A71E12455EB053FBEEB751540E274F0F1BF51  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MainElevator::Button1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Button1_4;
	// UnityEngine.GameObject MainElevator::Button2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Button2_5;
	// UnityEngine.GameObject MainElevator::Tank
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Tank_6;

public:
	inline static int32_t get_offset_of_Button1_4() { return static_cast<int32_t>(offsetof(MainElevator_t594A71E12455EB053FBEEB751540E274F0F1BF51, ___Button1_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Button1_4() const { return ___Button1_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Button1_4() { return &___Button1_4; }
	inline void set_Button1_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Button1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Button1_4), (void*)value);
	}

	inline static int32_t get_offset_of_Button2_5() { return static_cast<int32_t>(offsetof(MainElevator_t594A71E12455EB053FBEEB751540E274F0F1BF51, ___Button2_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Button2_5() const { return ___Button2_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Button2_5() { return &___Button2_5; }
	inline void set_Button2_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Button2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Button2_5), (void*)value);
	}

	inline static int32_t get_offset_of_Tank_6() { return static_cast<int32_t>(offsetof(MainElevator_t594A71E12455EB053FBEEB751540E274F0F1BF51, ___Tank_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Tank_6() const { return ___Tank_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Tank_6() { return &___Tank_6; }
	inline void set_Tank_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Tank_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tank_6), (void*)value);
	}
};


// MenuManager
struct MenuManager_tD52BB657312ED53913E423A985CACC86F900124C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MenuManager::Controls1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Controls1_4;
	// UnityEngine.GameObject MenuManager::Controls2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Controls2_5;
	// UnityEngine.GameObject MenuManager::Controls3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Controls3_6;
	// UnityEngine.GameObject MenuManager::ControlButtons
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ControlButtons_7;

public:
	inline static int32_t get_offset_of_Controls1_4() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___Controls1_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Controls1_4() const { return ___Controls1_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Controls1_4() { return &___Controls1_4; }
	inline void set_Controls1_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Controls1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Controls1_4), (void*)value);
	}

	inline static int32_t get_offset_of_Controls2_5() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___Controls2_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Controls2_5() const { return ___Controls2_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Controls2_5() { return &___Controls2_5; }
	inline void set_Controls2_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Controls2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Controls2_5), (void*)value);
	}

	inline static int32_t get_offset_of_Controls3_6() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___Controls3_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Controls3_6() const { return ___Controls3_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Controls3_6() { return &___Controls3_6; }
	inline void set_Controls3_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Controls3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Controls3_6), (void*)value);
	}

	inline static int32_t get_offset_of_ControlButtons_7() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___ControlButtons_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ControlButtons_7() const { return ___ControlButtons_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ControlButtons_7() { return &___ControlButtons_7; }
	inline void set_ControlButtons_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ControlButtons_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ControlButtons_7), (void*)value);
	}
};


// MilitaryTankUI
struct MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 MilitaryTankUI::SceneNum
	int32_t ___SceneNum_4;
	// UnityEngine.GameObject MilitaryTankUI::Tank
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Tank_5;
	// UnityEngine.UI.Slider MilitaryTankUI::PowerBar
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___PowerBar_6;
	// UnityEngine.UI.Text MilitaryTankUI::PowerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___PowerText_7;
	// UnityEngine.GameObject MilitaryTankUI::GolfBall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GolfBall_8;
	// UnityEngine.GameObject MilitaryTankUI::PlatBall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PlatBall_9;
	// UnityEngine.GameObject MilitaryTankUI::Platform
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Platform_10;
	// UnityEngine.GameObject MilitaryTankUI::WallBall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___WallBall_11;
	// UnityEngine.GameObject MilitaryTankUI::Wall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Wall_12;
	// UnityEngine.GameObject MilitaryTankUI::SpikeBall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SpikeBall_13;
	// UnityEngine.GameObject MilitaryTankUI::Explosion
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Explosion_14;
	// UnityEngine.GameObject MilitaryTankUI::TeleportEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TeleportEffect_15;
	// UnityEngine.GameObject MilitaryTankUI::CurrentBall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CurrentBall_16;
	// UnityEngine.Transform MilitaryTankUI::ShootPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___ShootPoint_17;
	// UnityEngine.GameObject MilitaryTankUI::TurretPivot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TurretPivot_18;
	// UnityEngine.GameObject MilitaryTankUI::TurretObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TurretObject_19;
	// UnityEngine.Vector3 MilitaryTankUI::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_20;
	// System.Single MilitaryTankUI::YLevel
	float ___YLevel_21;
	// System.Single MilitaryTankUI::XLevel
	float ___XLevel_22;
	// UnityEngine.GameObject MilitaryTankUI::CameraTarget
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CameraTarget_23;
	// System.Single MilitaryTankUI::CurrentTurretRotation
	float ___CurrentTurretRotation_24;
	// UnityEngine.GameObject MilitaryTankUI::FiringUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___FiringUI_25;
	// UnityEngine.GameObject MilitaryTankUI::BallUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BallUI_26;
	// UnityEngine.GameObject MilitaryTankUI::GameOverUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameOverUI_27;
	// UnityEngine.GameObject MilitaryTankUI::TeleportButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TeleportButton_28;
	// UnityEngine.GameObject MilitaryTankUI::ExplodeButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ExplodeButton_29;
	// UnityEngine.GameObject MilitaryTankUI::PlatformButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PlatformButton_30;
	// UnityEngine.GameObject MilitaryTankUI::WallButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___WallButton_31;
	// UnityEngine.GameObject MilitaryTankUI::ExplodeWarning
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ExplodeWarning_32;
	// UnityEngine.GameObject MilitaryTankUI::TeleportWarning
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TeleportWarning_33;
	// UnityEngine.UI.Text MilitaryTankUI::BallCounter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___BallCounter_34;
	// System.Int32 MilitaryTankUI::Balls
	int32_t ___Balls_35;
	// UnityEngine.UI.Text MilitaryTankUI::ShotCounter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ShotCounter_36;
	// System.Int32 MilitaryTankUI::Shots
	int32_t ___Shots_37;
	// UnityEngine.GameObject MilitaryTankUI::PauseMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PauseMenu_38;
	// System.Boolean MilitaryTankUI::speedachieved
	bool ___speedachieved_39;
	// System.Int32 MilitaryTankUI::movementSpeed
	int32_t ___movementSpeed_40;
	// UnityEngine.Vector3 MilitaryTankUI::movement
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___movement_41;
	// System.Int32 MilitaryTankUI::FuelLevel
	int32_t ___FuelLevel_42;
	// System.Single MilitaryTankUI::FuelMax
	float ___FuelMax_43;
	// UnityEngine.UI.Text MilitaryTankUI::FuelTank
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___FuelTank_44;
	// UnityEngine.UI.Scrollbar MilitaryTankUI::FuelGauge
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___FuelGauge_45;
	// System.Int32 MilitaryTankUI::BallType
	int32_t ___BallType_46;
	// UnityEngine.GameObject MilitaryTankUI::SecretMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SecretMenu_47;
	// UnityEngine.GameObject MilitaryTankUI::levelData
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___levelData_48;
	// System.String MilitaryTankUI::LevelName
	String_t* ___LevelName_49;
	// System.Boolean MilitaryTankUI::ScreenShakeOn
	bool ___ScreenShakeOn_50;
	// System.Int32 MilitaryTankUI::WindPower
	int32_t ___WindPower_51;
	// System.Int32 MilitaryTankUI::WindDirection
	int32_t ___WindDirection_52;
	// UnityEngine.GameObject MilitaryTankUI::TankBody
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TankBody_53;

public:
	inline static int32_t get_offset_of_SceneNum_4() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___SceneNum_4)); }
	inline int32_t get_SceneNum_4() const { return ___SceneNum_4; }
	inline int32_t* get_address_of_SceneNum_4() { return &___SceneNum_4; }
	inline void set_SceneNum_4(int32_t value)
	{
		___SceneNum_4 = value;
	}

	inline static int32_t get_offset_of_Tank_5() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___Tank_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Tank_5() const { return ___Tank_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Tank_5() { return &___Tank_5; }
	inline void set_Tank_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Tank_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tank_5), (void*)value);
	}

	inline static int32_t get_offset_of_PowerBar_6() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___PowerBar_6)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_PowerBar_6() const { return ___PowerBar_6; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_PowerBar_6() { return &___PowerBar_6; }
	inline void set_PowerBar_6(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___PowerBar_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PowerBar_6), (void*)value);
	}

	inline static int32_t get_offset_of_PowerText_7() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___PowerText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_PowerText_7() const { return ___PowerText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_PowerText_7() { return &___PowerText_7; }
	inline void set_PowerText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___PowerText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PowerText_7), (void*)value);
	}

	inline static int32_t get_offset_of_GolfBall_8() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___GolfBall_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GolfBall_8() const { return ___GolfBall_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GolfBall_8() { return &___GolfBall_8; }
	inline void set_GolfBall_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GolfBall_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GolfBall_8), (void*)value);
	}

	inline static int32_t get_offset_of_PlatBall_9() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___PlatBall_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PlatBall_9() const { return ___PlatBall_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PlatBall_9() { return &___PlatBall_9; }
	inline void set_PlatBall_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PlatBall_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlatBall_9), (void*)value);
	}

	inline static int32_t get_offset_of_Platform_10() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___Platform_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Platform_10() const { return ___Platform_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Platform_10() { return &___Platform_10; }
	inline void set_Platform_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Platform_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Platform_10), (void*)value);
	}

	inline static int32_t get_offset_of_WallBall_11() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___WallBall_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_WallBall_11() const { return ___WallBall_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_WallBall_11() { return &___WallBall_11; }
	inline void set_WallBall_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___WallBall_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WallBall_11), (void*)value);
	}

	inline static int32_t get_offset_of_Wall_12() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___Wall_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Wall_12() const { return ___Wall_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Wall_12() { return &___Wall_12; }
	inline void set_Wall_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Wall_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Wall_12), (void*)value);
	}

	inline static int32_t get_offset_of_SpikeBall_13() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___SpikeBall_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SpikeBall_13() const { return ___SpikeBall_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SpikeBall_13() { return &___SpikeBall_13; }
	inline void set_SpikeBall_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SpikeBall_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpikeBall_13), (void*)value);
	}

	inline static int32_t get_offset_of_Explosion_14() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___Explosion_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Explosion_14() const { return ___Explosion_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Explosion_14() { return &___Explosion_14; }
	inline void set_Explosion_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Explosion_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Explosion_14), (void*)value);
	}

	inline static int32_t get_offset_of_TeleportEffect_15() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___TeleportEffect_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TeleportEffect_15() const { return ___TeleportEffect_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TeleportEffect_15() { return &___TeleportEffect_15; }
	inline void set_TeleportEffect_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TeleportEffect_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TeleportEffect_15), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentBall_16() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___CurrentBall_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CurrentBall_16() const { return ___CurrentBall_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CurrentBall_16() { return &___CurrentBall_16; }
	inline void set_CurrentBall_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CurrentBall_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentBall_16), (void*)value);
	}

	inline static int32_t get_offset_of_ShootPoint_17() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___ShootPoint_17)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_ShootPoint_17() const { return ___ShootPoint_17; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_ShootPoint_17() { return &___ShootPoint_17; }
	inline void set_ShootPoint_17(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___ShootPoint_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShootPoint_17), (void*)value);
	}

	inline static int32_t get_offset_of_TurretPivot_18() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___TurretPivot_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TurretPivot_18() const { return ___TurretPivot_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TurretPivot_18() { return &___TurretPivot_18; }
	inline void set_TurretPivot_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TurretPivot_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TurretPivot_18), (void*)value);
	}

	inline static int32_t get_offset_of_TurretObject_19() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___TurretObject_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TurretObject_19() const { return ___TurretObject_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TurretObject_19() { return &___TurretObject_19; }
	inline void set_TurretObject_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TurretObject_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TurretObject_19), (void*)value);
	}

	inline static int32_t get_offset_of_direction_20() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___direction_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_20() const { return ___direction_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_20() { return &___direction_20; }
	inline void set_direction_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_20 = value;
	}

	inline static int32_t get_offset_of_YLevel_21() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___YLevel_21)); }
	inline float get_YLevel_21() const { return ___YLevel_21; }
	inline float* get_address_of_YLevel_21() { return &___YLevel_21; }
	inline void set_YLevel_21(float value)
	{
		___YLevel_21 = value;
	}

	inline static int32_t get_offset_of_XLevel_22() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___XLevel_22)); }
	inline float get_XLevel_22() const { return ___XLevel_22; }
	inline float* get_address_of_XLevel_22() { return &___XLevel_22; }
	inline void set_XLevel_22(float value)
	{
		___XLevel_22 = value;
	}

	inline static int32_t get_offset_of_CameraTarget_23() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___CameraTarget_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CameraTarget_23() const { return ___CameraTarget_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CameraTarget_23() { return &___CameraTarget_23; }
	inline void set_CameraTarget_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CameraTarget_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraTarget_23), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentTurretRotation_24() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___CurrentTurretRotation_24)); }
	inline float get_CurrentTurretRotation_24() const { return ___CurrentTurretRotation_24; }
	inline float* get_address_of_CurrentTurretRotation_24() { return &___CurrentTurretRotation_24; }
	inline void set_CurrentTurretRotation_24(float value)
	{
		___CurrentTurretRotation_24 = value;
	}

	inline static int32_t get_offset_of_FiringUI_25() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___FiringUI_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_FiringUI_25() const { return ___FiringUI_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_FiringUI_25() { return &___FiringUI_25; }
	inline void set_FiringUI_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___FiringUI_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FiringUI_25), (void*)value);
	}

	inline static int32_t get_offset_of_BallUI_26() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___BallUI_26)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BallUI_26() const { return ___BallUI_26; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BallUI_26() { return &___BallUI_26; }
	inline void set_BallUI_26(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BallUI_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BallUI_26), (void*)value);
	}

	inline static int32_t get_offset_of_GameOverUI_27() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___GameOverUI_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameOverUI_27() const { return ___GameOverUI_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameOverUI_27() { return &___GameOverUI_27; }
	inline void set_GameOverUI_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameOverUI_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverUI_27), (void*)value);
	}

	inline static int32_t get_offset_of_TeleportButton_28() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___TeleportButton_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TeleportButton_28() const { return ___TeleportButton_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TeleportButton_28() { return &___TeleportButton_28; }
	inline void set_TeleportButton_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TeleportButton_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TeleportButton_28), (void*)value);
	}

	inline static int32_t get_offset_of_ExplodeButton_29() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___ExplodeButton_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ExplodeButton_29() const { return ___ExplodeButton_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ExplodeButton_29() { return &___ExplodeButton_29; }
	inline void set_ExplodeButton_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ExplodeButton_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExplodeButton_29), (void*)value);
	}

	inline static int32_t get_offset_of_PlatformButton_30() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___PlatformButton_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PlatformButton_30() const { return ___PlatformButton_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PlatformButton_30() { return &___PlatformButton_30; }
	inline void set_PlatformButton_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PlatformButton_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlatformButton_30), (void*)value);
	}

	inline static int32_t get_offset_of_WallButton_31() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___WallButton_31)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_WallButton_31() const { return ___WallButton_31; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_WallButton_31() { return &___WallButton_31; }
	inline void set_WallButton_31(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___WallButton_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WallButton_31), (void*)value);
	}

	inline static int32_t get_offset_of_ExplodeWarning_32() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___ExplodeWarning_32)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ExplodeWarning_32() const { return ___ExplodeWarning_32; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ExplodeWarning_32() { return &___ExplodeWarning_32; }
	inline void set_ExplodeWarning_32(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ExplodeWarning_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExplodeWarning_32), (void*)value);
	}

	inline static int32_t get_offset_of_TeleportWarning_33() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___TeleportWarning_33)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TeleportWarning_33() const { return ___TeleportWarning_33; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TeleportWarning_33() { return &___TeleportWarning_33; }
	inline void set_TeleportWarning_33(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TeleportWarning_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TeleportWarning_33), (void*)value);
	}

	inline static int32_t get_offset_of_BallCounter_34() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___BallCounter_34)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_BallCounter_34() const { return ___BallCounter_34; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_BallCounter_34() { return &___BallCounter_34; }
	inline void set_BallCounter_34(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___BallCounter_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BallCounter_34), (void*)value);
	}

	inline static int32_t get_offset_of_Balls_35() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___Balls_35)); }
	inline int32_t get_Balls_35() const { return ___Balls_35; }
	inline int32_t* get_address_of_Balls_35() { return &___Balls_35; }
	inline void set_Balls_35(int32_t value)
	{
		___Balls_35 = value;
	}

	inline static int32_t get_offset_of_ShotCounter_36() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___ShotCounter_36)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ShotCounter_36() const { return ___ShotCounter_36; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ShotCounter_36() { return &___ShotCounter_36; }
	inline void set_ShotCounter_36(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ShotCounter_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShotCounter_36), (void*)value);
	}

	inline static int32_t get_offset_of_Shots_37() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___Shots_37)); }
	inline int32_t get_Shots_37() const { return ___Shots_37; }
	inline int32_t* get_address_of_Shots_37() { return &___Shots_37; }
	inline void set_Shots_37(int32_t value)
	{
		___Shots_37 = value;
	}

	inline static int32_t get_offset_of_PauseMenu_38() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___PauseMenu_38)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PauseMenu_38() const { return ___PauseMenu_38; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PauseMenu_38() { return &___PauseMenu_38; }
	inline void set_PauseMenu_38(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PauseMenu_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PauseMenu_38), (void*)value);
	}

	inline static int32_t get_offset_of_speedachieved_39() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___speedachieved_39)); }
	inline bool get_speedachieved_39() const { return ___speedachieved_39; }
	inline bool* get_address_of_speedachieved_39() { return &___speedachieved_39; }
	inline void set_speedachieved_39(bool value)
	{
		___speedachieved_39 = value;
	}

	inline static int32_t get_offset_of_movementSpeed_40() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___movementSpeed_40)); }
	inline int32_t get_movementSpeed_40() const { return ___movementSpeed_40; }
	inline int32_t* get_address_of_movementSpeed_40() { return &___movementSpeed_40; }
	inline void set_movementSpeed_40(int32_t value)
	{
		___movementSpeed_40 = value;
	}

	inline static int32_t get_offset_of_movement_41() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___movement_41)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_movement_41() const { return ___movement_41; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_movement_41() { return &___movement_41; }
	inline void set_movement_41(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___movement_41 = value;
	}

	inline static int32_t get_offset_of_FuelLevel_42() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___FuelLevel_42)); }
	inline int32_t get_FuelLevel_42() const { return ___FuelLevel_42; }
	inline int32_t* get_address_of_FuelLevel_42() { return &___FuelLevel_42; }
	inline void set_FuelLevel_42(int32_t value)
	{
		___FuelLevel_42 = value;
	}

	inline static int32_t get_offset_of_FuelMax_43() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___FuelMax_43)); }
	inline float get_FuelMax_43() const { return ___FuelMax_43; }
	inline float* get_address_of_FuelMax_43() { return &___FuelMax_43; }
	inline void set_FuelMax_43(float value)
	{
		___FuelMax_43 = value;
	}

	inline static int32_t get_offset_of_FuelTank_44() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___FuelTank_44)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_FuelTank_44() const { return ___FuelTank_44; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_FuelTank_44() { return &___FuelTank_44; }
	inline void set_FuelTank_44(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___FuelTank_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FuelTank_44), (void*)value);
	}

	inline static int32_t get_offset_of_FuelGauge_45() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___FuelGauge_45)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_FuelGauge_45() const { return ___FuelGauge_45; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_FuelGauge_45() { return &___FuelGauge_45; }
	inline void set_FuelGauge_45(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___FuelGauge_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FuelGauge_45), (void*)value);
	}

	inline static int32_t get_offset_of_BallType_46() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___BallType_46)); }
	inline int32_t get_BallType_46() const { return ___BallType_46; }
	inline int32_t* get_address_of_BallType_46() { return &___BallType_46; }
	inline void set_BallType_46(int32_t value)
	{
		___BallType_46 = value;
	}

	inline static int32_t get_offset_of_SecretMenu_47() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___SecretMenu_47)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SecretMenu_47() const { return ___SecretMenu_47; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SecretMenu_47() { return &___SecretMenu_47; }
	inline void set_SecretMenu_47(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SecretMenu_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SecretMenu_47), (void*)value);
	}

	inline static int32_t get_offset_of_levelData_48() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___levelData_48)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_levelData_48() const { return ___levelData_48; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_levelData_48() { return &___levelData_48; }
	inline void set_levelData_48(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___levelData_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelData_48), (void*)value);
	}

	inline static int32_t get_offset_of_LevelName_49() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___LevelName_49)); }
	inline String_t* get_LevelName_49() const { return ___LevelName_49; }
	inline String_t** get_address_of_LevelName_49() { return &___LevelName_49; }
	inline void set_LevelName_49(String_t* value)
	{
		___LevelName_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelName_49), (void*)value);
	}

	inline static int32_t get_offset_of_ScreenShakeOn_50() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___ScreenShakeOn_50)); }
	inline bool get_ScreenShakeOn_50() const { return ___ScreenShakeOn_50; }
	inline bool* get_address_of_ScreenShakeOn_50() { return &___ScreenShakeOn_50; }
	inline void set_ScreenShakeOn_50(bool value)
	{
		___ScreenShakeOn_50 = value;
	}

	inline static int32_t get_offset_of_WindPower_51() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___WindPower_51)); }
	inline int32_t get_WindPower_51() const { return ___WindPower_51; }
	inline int32_t* get_address_of_WindPower_51() { return &___WindPower_51; }
	inline void set_WindPower_51(int32_t value)
	{
		___WindPower_51 = value;
	}

	inline static int32_t get_offset_of_WindDirection_52() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___WindDirection_52)); }
	inline int32_t get_WindDirection_52() const { return ___WindDirection_52; }
	inline int32_t* get_address_of_WindDirection_52() { return &___WindDirection_52; }
	inline void set_WindDirection_52(int32_t value)
	{
		___WindDirection_52 = value;
	}

	inline static int32_t get_offset_of_TankBody_53() { return static_cast<int32_t>(offsetof(MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113, ___TankBody_53)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TankBody_53() const { return ___TankBody_53; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TankBody_53() { return &___TankBody_53; }
	inline void set_TankBody_53(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TankBody_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TankBody_53), (void*)value);
	}
};


// OutofBounds
struct OutofBounds_t1A6BD6295712FB12F161A4E09AF6FCE96092EE23  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject OutofBounds::Tank
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Tank_4;
	// UnityEngine.GameObject OutofBounds::RespawnPoint
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RespawnPoint_5;

public:
	inline static int32_t get_offset_of_Tank_4() { return static_cast<int32_t>(offsetof(OutofBounds_t1A6BD6295712FB12F161A4E09AF6FCE96092EE23, ___Tank_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Tank_4() const { return ___Tank_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Tank_4() { return &___Tank_4; }
	inline void set_Tank_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Tank_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tank_4), (void*)value);
	}

	inline static int32_t get_offset_of_RespawnPoint_5() { return static_cast<int32_t>(offsetof(OutofBounds_t1A6BD6295712FB12F161A4E09AF6FCE96092EE23, ___RespawnPoint_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RespawnPoint_5() const { return ___RespawnPoint_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RespawnPoint_5() { return &___RespawnPoint_5; }
	inline void set_RespawnPoint_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RespawnPoint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RespawnPoint_5), (void*)value);
	}
};


// Rotate
struct Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Rotate::twist
	float ___twist_4;

public:
	inline static int32_t get_offset_of_twist_4() { return static_cast<int32_t>(offsetof(Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789, ___twist_4)); }
	inline float get_twist_4() const { return ___twist_4; }
	inline float* get_address_of_twist_4() { return &___twist_4; }
	inline void set_twist_4(float value)
	{
		___twist_4 = value;
	}
};


// Sand
struct Sand_tCCCADCA1E08FB833B428151FCBD533F723C155CD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Sand::Tank
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Tank_4;
	// UnityEngine.GameObject Sand::Ball
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ball_5;

public:
	inline static int32_t get_offset_of_Tank_4() { return static_cast<int32_t>(offsetof(Sand_tCCCADCA1E08FB833B428151FCBD533F723C155CD, ___Tank_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Tank_4() const { return ___Tank_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Tank_4() { return &___Tank_4; }
	inline void set_Tank_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Tank_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tank_4), (void*)value);
	}

	inline static int32_t get_offset_of_Ball_5() { return static_cast<int32_t>(offsetof(Sand_tCCCADCA1E08FB833B428151FCBD533F723C155CD, ___Ball_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Ball_5() const { return ___Ball_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Ball_5() { return &___Ball_5; }
	inline void set_Ball_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Ball_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ball_5), (void*)value);
	}
};


// StarUpProcess
struct StarUpProcess_tF1E82E0D3882535952A8C97B3BCEF3077E13D3BF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// TankUI
struct TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 TankUI::SceneNum
	int32_t ___SceneNum_4;
	// UnityEngine.GameObject TankUI::Tank
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Tank_5;
	// UnityEngine.UI.Slider TankUI::PowerBar
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___PowerBar_6;
	// UnityEngine.UI.Text TankUI::PowerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___PowerText_7;
	// UnityEngine.GameObject TankUI::GolfBall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GolfBall_8;
	// UnityEngine.GameObject TankUI::PlatBall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PlatBall_9;
	// UnityEngine.GameObject TankUI::Platform
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Platform_10;
	// UnityEngine.GameObject TankUI::WallBall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___WallBall_11;
	// UnityEngine.GameObject TankUI::Wall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Wall_12;
	// UnityEngine.GameObject TankUI::SpikeBall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SpikeBall_13;
	// UnityEngine.GameObject TankUI::Explosion
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Explosion_14;
	// UnityEngine.GameObject TankUI::TeleportEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TeleportEffect_15;
	// UnityEngine.GameObject TankUI::CurrentBall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CurrentBall_16;
	// UnityEngine.Transform TankUI::ShootPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___ShootPoint_17;
	// UnityEngine.GameObject TankUI::TurretPivot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TurretPivot_18;
	// UnityEngine.Vector3 TankUI::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_19;
	// System.Single TankUI::YLevel
	float ___YLevel_20;
	// System.Single TankUI::XLevel
	float ___XLevel_21;
	// UnityEngine.GameObject TankUI::CameraTarget
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CameraTarget_22;
	// System.Single TankUI::CurrentTurretRotation
	float ___CurrentTurretRotation_23;
	// UnityEngine.GameObject TankUI::FiringUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___FiringUI_24;
	// UnityEngine.GameObject TankUI::BallUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BallUI_25;
	// UnityEngine.GameObject TankUI::GameOverUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameOverUI_26;
	// UnityEngine.GameObject TankUI::TeleportButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TeleportButton_27;
	// UnityEngine.GameObject TankUI::ExplodeButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ExplodeButton_28;
	// UnityEngine.GameObject TankUI::PlatformButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PlatformButton_29;
	// UnityEngine.GameObject TankUI::WallButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___WallButton_30;
	// UnityEngine.GameObject TankUI::ExplodeWarning
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ExplodeWarning_31;
	// UnityEngine.GameObject TankUI::TeleportWarning
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TeleportWarning_32;
	// UnityEngine.UI.Text TankUI::BallCounter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___BallCounter_33;
	// System.Int32 TankUI::Balls
	int32_t ___Balls_34;
	// UnityEngine.UI.Text TankUI::ShotCounter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ShotCounter_35;
	// System.Int32 TankUI::Shots
	int32_t ___Shots_36;
	// UnityEngine.GameObject TankUI::PauseMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PauseMenu_37;
	// System.Boolean TankUI::speedachieved
	bool ___speedachieved_38;
	// System.Int32 TankUI::movementSpeed
	int32_t ___movementSpeed_39;
	// UnityEngine.Vector3 TankUI::movement
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___movement_40;
	// System.Int32 TankUI::FuelLevel
	int32_t ___FuelLevel_41;
	// System.Single TankUI::FuelMax
	float ___FuelMax_42;
	// UnityEngine.UI.Text TankUI::FuelTank
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___FuelTank_43;
	// UnityEngine.UI.Scrollbar TankUI::FuelGauge
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___FuelGauge_44;
	// System.Int32 TankUI::BallType
	int32_t ___BallType_45;
	// UnityEngine.GameObject TankUI::SecretMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SecretMenu_46;
	// UnityEngine.GameObject TankUI::levelData
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___levelData_47;
	// System.String TankUI::LevelName
	String_t* ___LevelName_48;
	// System.Boolean TankUI::ScreenShakeOn
	bool ___ScreenShakeOn_49;
	// UnityEngine.Camera TankUI::MainCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___MainCamera_50;

public:
	inline static int32_t get_offset_of_SceneNum_4() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___SceneNum_4)); }
	inline int32_t get_SceneNum_4() const { return ___SceneNum_4; }
	inline int32_t* get_address_of_SceneNum_4() { return &___SceneNum_4; }
	inline void set_SceneNum_4(int32_t value)
	{
		___SceneNum_4 = value;
	}

	inline static int32_t get_offset_of_Tank_5() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___Tank_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Tank_5() const { return ___Tank_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Tank_5() { return &___Tank_5; }
	inline void set_Tank_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Tank_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tank_5), (void*)value);
	}

	inline static int32_t get_offset_of_PowerBar_6() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___PowerBar_6)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_PowerBar_6() const { return ___PowerBar_6; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_PowerBar_6() { return &___PowerBar_6; }
	inline void set_PowerBar_6(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___PowerBar_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PowerBar_6), (void*)value);
	}

	inline static int32_t get_offset_of_PowerText_7() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___PowerText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_PowerText_7() const { return ___PowerText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_PowerText_7() { return &___PowerText_7; }
	inline void set_PowerText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___PowerText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PowerText_7), (void*)value);
	}

	inline static int32_t get_offset_of_GolfBall_8() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___GolfBall_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GolfBall_8() const { return ___GolfBall_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GolfBall_8() { return &___GolfBall_8; }
	inline void set_GolfBall_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GolfBall_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GolfBall_8), (void*)value);
	}

	inline static int32_t get_offset_of_PlatBall_9() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___PlatBall_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PlatBall_9() const { return ___PlatBall_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PlatBall_9() { return &___PlatBall_9; }
	inline void set_PlatBall_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PlatBall_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlatBall_9), (void*)value);
	}

	inline static int32_t get_offset_of_Platform_10() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___Platform_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Platform_10() const { return ___Platform_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Platform_10() { return &___Platform_10; }
	inline void set_Platform_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Platform_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Platform_10), (void*)value);
	}

	inline static int32_t get_offset_of_WallBall_11() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___WallBall_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_WallBall_11() const { return ___WallBall_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_WallBall_11() { return &___WallBall_11; }
	inline void set_WallBall_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___WallBall_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WallBall_11), (void*)value);
	}

	inline static int32_t get_offset_of_Wall_12() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___Wall_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Wall_12() const { return ___Wall_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Wall_12() { return &___Wall_12; }
	inline void set_Wall_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Wall_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Wall_12), (void*)value);
	}

	inline static int32_t get_offset_of_SpikeBall_13() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___SpikeBall_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SpikeBall_13() const { return ___SpikeBall_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SpikeBall_13() { return &___SpikeBall_13; }
	inline void set_SpikeBall_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SpikeBall_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpikeBall_13), (void*)value);
	}

	inline static int32_t get_offset_of_Explosion_14() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___Explosion_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Explosion_14() const { return ___Explosion_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Explosion_14() { return &___Explosion_14; }
	inline void set_Explosion_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Explosion_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Explosion_14), (void*)value);
	}

	inline static int32_t get_offset_of_TeleportEffect_15() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___TeleportEffect_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TeleportEffect_15() const { return ___TeleportEffect_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TeleportEffect_15() { return &___TeleportEffect_15; }
	inline void set_TeleportEffect_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TeleportEffect_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TeleportEffect_15), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentBall_16() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___CurrentBall_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CurrentBall_16() const { return ___CurrentBall_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CurrentBall_16() { return &___CurrentBall_16; }
	inline void set_CurrentBall_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CurrentBall_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentBall_16), (void*)value);
	}

	inline static int32_t get_offset_of_ShootPoint_17() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___ShootPoint_17)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_ShootPoint_17() const { return ___ShootPoint_17; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_ShootPoint_17() { return &___ShootPoint_17; }
	inline void set_ShootPoint_17(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___ShootPoint_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShootPoint_17), (void*)value);
	}

	inline static int32_t get_offset_of_TurretPivot_18() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___TurretPivot_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TurretPivot_18() const { return ___TurretPivot_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TurretPivot_18() { return &___TurretPivot_18; }
	inline void set_TurretPivot_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TurretPivot_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TurretPivot_18), (void*)value);
	}

	inline static int32_t get_offset_of_direction_19() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___direction_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_19() const { return ___direction_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_19() { return &___direction_19; }
	inline void set_direction_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_19 = value;
	}

	inline static int32_t get_offset_of_YLevel_20() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___YLevel_20)); }
	inline float get_YLevel_20() const { return ___YLevel_20; }
	inline float* get_address_of_YLevel_20() { return &___YLevel_20; }
	inline void set_YLevel_20(float value)
	{
		___YLevel_20 = value;
	}

	inline static int32_t get_offset_of_XLevel_21() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___XLevel_21)); }
	inline float get_XLevel_21() const { return ___XLevel_21; }
	inline float* get_address_of_XLevel_21() { return &___XLevel_21; }
	inline void set_XLevel_21(float value)
	{
		___XLevel_21 = value;
	}

	inline static int32_t get_offset_of_CameraTarget_22() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___CameraTarget_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CameraTarget_22() const { return ___CameraTarget_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CameraTarget_22() { return &___CameraTarget_22; }
	inline void set_CameraTarget_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CameraTarget_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraTarget_22), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentTurretRotation_23() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___CurrentTurretRotation_23)); }
	inline float get_CurrentTurretRotation_23() const { return ___CurrentTurretRotation_23; }
	inline float* get_address_of_CurrentTurretRotation_23() { return &___CurrentTurretRotation_23; }
	inline void set_CurrentTurretRotation_23(float value)
	{
		___CurrentTurretRotation_23 = value;
	}

	inline static int32_t get_offset_of_FiringUI_24() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___FiringUI_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_FiringUI_24() const { return ___FiringUI_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_FiringUI_24() { return &___FiringUI_24; }
	inline void set_FiringUI_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___FiringUI_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FiringUI_24), (void*)value);
	}

	inline static int32_t get_offset_of_BallUI_25() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___BallUI_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BallUI_25() const { return ___BallUI_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BallUI_25() { return &___BallUI_25; }
	inline void set_BallUI_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BallUI_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BallUI_25), (void*)value);
	}

	inline static int32_t get_offset_of_GameOverUI_26() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___GameOverUI_26)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameOverUI_26() const { return ___GameOverUI_26; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameOverUI_26() { return &___GameOverUI_26; }
	inline void set_GameOverUI_26(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameOverUI_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverUI_26), (void*)value);
	}

	inline static int32_t get_offset_of_TeleportButton_27() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___TeleportButton_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TeleportButton_27() const { return ___TeleportButton_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TeleportButton_27() { return &___TeleportButton_27; }
	inline void set_TeleportButton_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TeleportButton_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TeleportButton_27), (void*)value);
	}

	inline static int32_t get_offset_of_ExplodeButton_28() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___ExplodeButton_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ExplodeButton_28() const { return ___ExplodeButton_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ExplodeButton_28() { return &___ExplodeButton_28; }
	inline void set_ExplodeButton_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ExplodeButton_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExplodeButton_28), (void*)value);
	}

	inline static int32_t get_offset_of_PlatformButton_29() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___PlatformButton_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PlatformButton_29() const { return ___PlatformButton_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PlatformButton_29() { return &___PlatformButton_29; }
	inline void set_PlatformButton_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PlatformButton_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlatformButton_29), (void*)value);
	}

	inline static int32_t get_offset_of_WallButton_30() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___WallButton_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_WallButton_30() const { return ___WallButton_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_WallButton_30() { return &___WallButton_30; }
	inline void set_WallButton_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___WallButton_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WallButton_30), (void*)value);
	}

	inline static int32_t get_offset_of_ExplodeWarning_31() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___ExplodeWarning_31)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ExplodeWarning_31() const { return ___ExplodeWarning_31; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ExplodeWarning_31() { return &___ExplodeWarning_31; }
	inline void set_ExplodeWarning_31(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ExplodeWarning_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExplodeWarning_31), (void*)value);
	}

	inline static int32_t get_offset_of_TeleportWarning_32() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___TeleportWarning_32)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TeleportWarning_32() const { return ___TeleportWarning_32; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TeleportWarning_32() { return &___TeleportWarning_32; }
	inline void set_TeleportWarning_32(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TeleportWarning_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TeleportWarning_32), (void*)value);
	}

	inline static int32_t get_offset_of_BallCounter_33() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___BallCounter_33)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_BallCounter_33() const { return ___BallCounter_33; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_BallCounter_33() { return &___BallCounter_33; }
	inline void set_BallCounter_33(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___BallCounter_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BallCounter_33), (void*)value);
	}

	inline static int32_t get_offset_of_Balls_34() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___Balls_34)); }
	inline int32_t get_Balls_34() const { return ___Balls_34; }
	inline int32_t* get_address_of_Balls_34() { return &___Balls_34; }
	inline void set_Balls_34(int32_t value)
	{
		___Balls_34 = value;
	}

	inline static int32_t get_offset_of_ShotCounter_35() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___ShotCounter_35)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ShotCounter_35() const { return ___ShotCounter_35; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ShotCounter_35() { return &___ShotCounter_35; }
	inline void set_ShotCounter_35(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ShotCounter_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShotCounter_35), (void*)value);
	}

	inline static int32_t get_offset_of_Shots_36() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___Shots_36)); }
	inline int32_t get_Shots_36() const { return ___Shots_36; }
	inline int32_t* get_address_of_Shots_36() { return &___Shots_36; }
	inline void set_Shots_36(int32_t value)
	{
		___Shots_36 = value;
	}

	inline static int32_t get_offset_of_PauseMenu_37() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___PauseMenu_37)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PauseMenu_37() const { return ___PauseMenu_37; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PauseMenu_37() { return &___PauseMenu_37; }
	inline void set_PauseMenu_37(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PauseMenu_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PauseMenu_37), (void*)value);
	}

	inline static int32_t get_offset_of_speedachieved_38() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___speedachieved_38)); }
	inline bool get_speedachieved_38() const { return ___speedachieved_38; }
	inline bool* get_address_of_speedachieved_38() { return &___speedachieved_38; }
	inline void set_speedachieved_38(bool value)
	{
		___speedachieved_38 = value;
	}

	inline static int32_t get_offset_of_movementSpeed_39() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___movementSpeed_39)); }
	inline int32_t get_movementSpeed_39() const { return ___movementSpeed_39; }
	inline int32_t* get_address_of_movementSpeed_39() { return &___movementSpeed_39; }
	inline void set_movementSpeed_39(int32_t value)
	{
		___movementSpeed_39 = value;
	}

	inline static int32_t get_offset_of_movement_40() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___movement_40)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_movement_40() const { return ___movement_40; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_movement_40() { return &___movement_40; }
	inline void set_movement_40(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___movement_40 = value;
	}

	inline static int32_t get_offset_of_FuelLevel_41() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___FuelLevel_41)); }
	inline int32_t get_FuelLevel_41() const { return ___FuelLevel_41; }
	inline int32_t* get_address_of_FuelLevel_41() { return &___FuelLevel_41; }
	inline void set_FuelLevel_41(int32_t value)
	{
		___FuelLevel_41 = value;
	}

	inline static int32_t get_offset_of_FuelMax_42() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___FuelMax_42)); }
	inline float get_FuelMax_42() const { return ___FuelMax_42; }
	inline float* get_address_of_FuelMax_42() { return &___FuelMax_42; }
	inline void set_FuelMax_42(float value)
	{
		___FuelMax_42 = value;
	}

	inline static int32_t get_offset_of_FuelTank_43() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___FuelTank_43)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_FuelTank_43() const { return ___FuelTank_43; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_FuelTank_43() { return &___FuelTank_43; }
	inline void set_FuelTank_43(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___FuelTank_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FuelTank_43), (void*)value);
	}

	inline static int32_t get_offset_of_FuelGauge_44() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___FuelGauge_44)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_FuelGauge_44() const { return ___FuelGauge_44; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_FuelGauge_44() { return &___FuelGauge_44; }
	inline void set_FuelGauge_44(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___FuelGauge_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FuelGauge_44), (void*)value);
	}

	inline static int32_t get_offset_of_BallType_45() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___BallType_45)); }
	inline int32_t get_BallType_45() const { return ___BallType_45; }
	inline int32_t* get_address_of_BallType_45() { return &___BallType_45; }
	inline void set_BallType_45(int32_t value)
	{
		___BallType_45 = value;
	}

	inline static int32_t get_offset_of_SecretMenu_46() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___SecretMenu_46)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SecretMenu_46() const { return ___SecretMenu_46; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SecretMenu_46() { return &___SecretMenu_46; }
	inline void set_SecretMenu_46(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SecretMenu_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SecretMenu_46), (void*)value);
	}

	inline static int32_t get_offset_of_levelData_47() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___levelData_47)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_levelData_47() const { return ___levelData_47; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_levelData_47() { return &___levelData_47; }
	inline void set_levelData_47(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___levelData_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelData_47), (void*)value);
	}

	inline static int32_t get_offset_of_LevelName_48() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___LevelName_48)); }
	inline String_t* get_LevelName_48() const { return ___LevelName_48; }
	inline String_t** get_address_of_LevelName_48() { return &___LevelName_48; }
	inline void set_LevelName_48(String_t* value)
	{
		___LevelName_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelName_48), (void*)value);
	}

	inline static int32_t get_offset_of_ScreenShakeOn_49() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___ScreenShakeOn_49)); }
	inline bool get_ScreenShakeOn_49() const { return ___ScreenShakeOn_49; }
	inline bool* get_address_of_ScreenShakeOn_49() { return &___ScreenShakeOn_49; }
	inline void set_ScreenShakeOn_49(bool value)
	{
		___ScreenShakeOn_49 = value;
	}

	inline static int32_t get_offset_of_MainCamera_50() { return static_cast<int32_t>(offsetof(TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08, ___MainCamera_50)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_MainCamera_50() const { return ___MainCamera_50; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_MainCamera_50() { return &___MainCamera_50; }
	inline void set_MainCamera_50(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___MainCamera_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MainCamera_50), (void*)value);
	}
};


// TeleportDissipate
struct TeleportDissipate_t04FF60E2EDE635C984E97DDAD0611803F094C82F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// TextPurge4
struct TextPurge4_t3FE660073B8143042DFDC938A45E2E91C30ACEFC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TextPurge4::TutorialText5
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TutorialText5_4;
	// UnityEngine.GameObject TextPurge4::TutorialText6
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TutorialText6_5;

public:
	inline static int32_t get_offset_of_TutorialText5_4() { return static_cast<int32_t>(offsetof(TextPurge4_t3FE660073B8143042DFDC938A45E2E91C30ACEFC, ___TutorialText5_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TutorialText5_4() const { return ___TutorialText5_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TutorialText5_4() { return &___TutorialText5_4; }
	inline void set_TutorialText5_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TutorialText5_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TutorialText5_4), (void*)value);
	}

	inline static int32_t get_offset_of_TutorialText6_5() { return static_cast<int32_t>(offsetof(TextPurge4_t3FE660073B8143042DFDC938A45E2E91C30ACEFC, ___TutorialText6_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TutorialText6_5() const { return ___TutorialText6_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TutorialText6_5() { return &___TutorialText6_5; }
	inline void set_TutorialText6_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TutorialText6_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TutorialText6_5), (void*)value);
	}
};


// TextPurgeScript1
struct TextPurgeScript1_t1D4B6D4604B1B60E85747F816C49001B9D7D340F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TextPurgeScript1::TutorialText
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TutorialText_4;
	// UnityEngine.GameObject TextPurgeScript1::TutorialText2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TutorialText2_5;

public:
	inline static int32_t get_offset_of_TutorialText_4() { return static_cast<int32_t>(offsetof(TextPurgeScript1_t1D4B6D4604B1B60E85747F816C49001B9D7D340F, ___TutorialText_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TutorialText_4() const { return ___TutorialText_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TutorialText_4() { return &___TutorialText_4; }
	inline void set_TutorialText_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TutorialText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TutorialText_4), (void*)value);
	}

	inline static int32_t get_offset_of_TutorialText2_5() { return static_cast<int32_t>(offsetof(TextPurgeScript1_t1D4B6D4604B1B60E85747F816C49001B9D7D340F, ___TutorialText2_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TutorialText2_5() const { return ___TutorialText2_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TutorialText2_5() { return &___TutorialText2_5; }
	inline void set_TutorialText2_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TutorialText2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TutorialText2_5), (void*)value);
	}
};


// TextPurger2
struct TextPurger2_tB3F45C4271304B274D8C0326025641F24AFB431A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TextPurger2::TutorialText2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TutorialText2_4;
	// UnityEngine.GameObject TextPurger2::TutorialText3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TutorialText3_5;

public:
	inline static int32_t get_offset_of_TutorialText2_4() { return static_cast<int32_t>(offsetof(TextPurger2_tB3F45C4271304B274D8C0326025641F24AFB431A, ___TutorialText2_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TutorialText2_4() const { return ___TutorialText2_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TutorialText2_4() { return &___TutorialText2_4; }
	inline void set_TutorialText2_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TutorialText2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TutorialText2_4), (void*)value);
	}

	inline static int32_t get_offset_of_TutorialText3_5() { return static_cast<int32_t>(offsetof(TextPurger2_tB3F45C4271304B274D8C0326025641F24AFB431A, ___TutorialText3_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TutorialText3_5() const { return ___TutorialText3_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TutorialText3_5() { return &___TutorialText3_5; }
	inline void set_TutorialText3_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TutorialText3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TutorialText3_5), (void*)value);
	}
};


// TextPurger3
struct TextPurger3_t676B22EDB34C1A02896E93B965ED7F39894FA8DF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TextPurger3::TutorialText3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TutorialText3_4;
	// UnityEngine.GameObject TextPurger3::TutorialText4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TutorialText4_5;

public:
	inline static int32_t get_offset_of_TutorialText3_4() { return static_cast<int32_t>(offsetof(TextPurger3_t676B22EDB34C1A02896E93B965ED7F39894FA8DF, ___TutorialText3_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TutorialText3_4() const { return ___TutorialText3_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TutorialText3_4() { return &___TutorialText3_4; }
	inline void set_TutorialText3_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TutorialText3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TutorialText3_4), (void*)value);
	}

	inline static int32_t get_offset_of_TutorialText4_5() { return static_cast<int32_t>(offsetof(TextPurger3_t676B22EDB34C1A02896E93B965ED7F39894FA8DF, ___TutorialText4_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TutorialText4_5() const { return ___TutorialText4_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TutorialText4_5() { return &___TutorialText4_5; }
	inline void set_TutorialText4_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TutorialText4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TutorialText4_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIWiggle
struct UIWiggle_tD03AD9DC74D28D7AC244B8E8A8F73CECE79FCE78  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 UIWiggle::rotation
	int32_t ___rotation_4;

public:
	inline static int32_t get_offset_of_rotation_4() { return static_cast<int32_t>(offsetof(UIWiggle_tD03AD9DC74D28D7AC244B8E8A8F73CECE79FCE78, ___rotation_4)); }
	inline int32_t get_rotation_4() const { return ___rotation_4; }
	inline int32_t* get_address_of_rotation_4() { return &___rotation_4; }
	inline void set_rotation_4(int32_t value)
	{
		___rotation_4 = value;
	}
};


// WindChanger
struct WindChanger_tD64A2E22CD06A94DD92472673E664EA8FD6AAC0F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 WindChanger::wind
	int32_t ___wind_4;
	// UnityEngine.UI.Text WindChanger::WindLevel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___WindLevel_5;
	// UnityEngine.UI.Text WindChanger::WindMPH
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___WindMPH_6;
	// UnityEngine.UI.RawImage WindChanger::Arrow
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___Arrow_7;
	// System.Boolean WindChanger::Enabled
	bool ___Enabled_8;

public:
	inline static int32_t get_offset_of_wind_4() { return static_cast<int32_t>(offsetof(WindChanger_tD64A2E22CD06A94DD92472673E664EA8FD6AAC0F, ___wind_4)); }
	inline int32_t get_wind_4() const { return ___wind_4; }
	inline int32_t* get_address_of_wind_4() { return &___wind_4; }
	inline void set_wind_4(int32_t value)
	{
		___wind_4 = value;
	}

	inline static int32_t get_offset_of_WindLevel_5() { return static_cast<int32_t>(offsetof(WindChanger_tD64A2E22CD06A94DD92472673E664EA8FD6AAC0F, ___WindLevel_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_WindLevel_5() const { return ___WindLevel_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_WindLevel_5() { return &___WindLevel_5; }
	inline void set_WindLevel_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___WindLevel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WindLevel_5), (void*)value);
	}

	inline static int32_t get_offset_of_WindMPH_6() { return static_cast<int32_t>(offsetof(WindChanger_tD64A2E22CD06A94DD92472673E664EA8FD6AAC0F, ___WindMPH_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_WindMPH_6() const { return ___WindMPH_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_WindMPH_6() { return &___WindMPH_6; }
	inline void set_WindMPH_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___WindMPH_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WindMPH_6), (void*)value);
	}

	inline static int32_t get_offset_of_Arrow_7() { return static_cast<int32_t>(offsetof(WindChanger_tD64A2E22CD06A94DD92472673E664EA8FD6AAC0F, ___Arrow_7)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_Arrow_7() const { return ___Arrow_7; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_Arrow_7() { return &___Arrow_7; }
	inline void set_Arrow_7(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___Arrow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Arrow_7), (void*)value);
	}

	inline static int32_t get_offset_of_Enabled_8() { return static_cast<int32_t>(offsetof(WindChanger_tD64A2E22CD06A94DD92472673E664EA8FD6AAC0F, ___Enabled_8)); }
	inline bool get_Enabled_8() const { return ___Enabled_8; }
	inline bool* get_address_of_Enabled_8() { return &___Enabled_8; }
	inline void set_Enabled_8(bool value)
	{
		___Enabled_8 = value;
	}
};


// tutorialtext
struct tutorialtext_t63C6A96BE48D1A5E3EB914F01C6E9EF6DA794A5E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject tutorialtext::TutorialText
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TutorialText_4;
	// UnityEngine.GameObject tutorialtext::TutorialText2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TutorialText2_5;

public:
	inline static int32_t get_offset_of_TutorialText_4() { return static_cast<int32_t>(offsetof(tutorialtext_t63C6A96BE48D1A5E3EB914F01C6E9EF6DA794A5E, ___TutorialText_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TutorialText_4() const { return ___TutorialText_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TutorialText_4() { return &___TutorialText_4; }
	inline void set_TutorialText_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TutorialText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TutorialText_4), (void*)value);
	}

	inline static int32_t get_offset_of_TutorialText2_5() { return static_cast<int32_t>(offsetof(tutorialtext_t63C6A96BE48D1A5E3EB914F01C6E9EF6DA794A5E, ___TutorialText2_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TutorialText2_5() const { return ___TutorialText2_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TutorialText2_5() { return &___TutorialText2_5; }
	inline void set_TutorialText2_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TutorialText2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TutorialText2_5), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_20;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_21;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_22;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_23;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_24;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * ___m_OnValueChanged_25;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_ContainerRect_26;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_27;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_28;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_PointerDownRepeat_29;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_30;
	// System.Boolean UnityEngine.UI.Scrollbar::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_31;

public:
	inline static int32_t get_offset_of_m_HandleRect_20() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_HandleRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_20() const { return ___m_HandleRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_20() { return &___m_HandleRect_20; }
	inline void set_m_HandleRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_21() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Direction_21)); }
	inline int32_t get_m_Direction_21() const { return ___m_Direction_21; }
	inline int32_t* get_address_of_m_Direction_21() { return &___m_Direction_21; }
	inline void set_m_Direction_21(int32_t value)
	{
		___m_Direction_21 = value;
	}

	inline static int32_t get_offset_of_m_Value_22() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Value_22)); }
	inline float get_m_Value_22() const { return ___m_Value_22; }
	inline float* get_address_of_m_Value_22() { return &___m_Value_22; }
	inline void set_m_Value_22(float value)
	{
		___m_Value_22 = value;
	}

	inline static int32_t get_offset_of_m_Size_23() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Size_23)); }
	inline float get_m_Size_23() const { return ___m_Size_23; }
	inline float* get_address_of_m_Size_23() { return &___m_Size_23; }
	inline void set_m_Size_23(float value)
	{
		___m_Size_23 = value;
	}

	inline static int32_t get_offset_of_m_NumberOfSteps_24() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_NumberOfSteps_24)); }
	inline int32_t get_m_NumberOfSteps_24() const { return ___m_NumberOfSteps_24; }
	inline int32_t* get_address_of_m_NumberOfSteps_24() { return &___m_NumberOfSteps_24; }
	inline void set_m_NumberOfSteps_24(int32_t value)
	{
		___m_NumberOfSteps_24 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_25() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_OnValueChanged_25)); }
	inline ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * get_m_OnValueChanged_25() const { return ___m_OnValueChanged_25; }
	inline ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED ** get_address_of_m_OnValueChanged_25() { return &___m_OnValueChanged_25; }
	inline void set_m_OnValueChanged_25(ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * value)
	{
		___m_OnValueChanged_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContainerRect_26() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_ContainerRect_26)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_ContainerRect_26() const { return ___m_ContainerRect_26; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_ContainerRect_26() { return &___m_ContainerRect_26; }
	inline void set_m_ContainerRect_26(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_ContainerRect_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ContainerRect_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_27() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Offset_27)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_27() const { return ___m_Offset_27; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_27() { return &___m_Offset_27; }
	inline void set_m_Offset_27(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_27 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_28() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Tracker_28)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_28() const { return ___m_Tracker_28; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_28() { return &___m_Tracker_28; }
	inline void set_m_Tracker_28(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_28 = value;
	}

	inline static int32_t get_offset_of_m_PointerDownRepeat_29() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_PointerDownRepeat_29)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_PointerDownRepeat_29() const { return ___m_PointerDownRepeat_29; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_PointerDownRepeat_29() { return &___m_PointerDownRepeat_29; }
	inline void set_m_PointerDownRepeat_29(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_PointerDownRepeat_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerDownRepeat_29), (void*)value);
	}

	inline static int32_t get_offset_of_isPointerDownAndNotDragging_30() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___isPointerDownAndNotDragging_30)); }
	inline bool get_isPointerDownAndNotDragging_30() const { return ___isPointerDownAndNotDragging_30; }
	inline bool* get_address_of_isPointerDownAndNotDragging_30() { return &___isPointerDownAndNotDragging_30; }
	inline void set_isPointerDownAndNotDragging_30(bool value)
	{
		___isPointerDownAndNotDragging_30 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_31() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_DelayedUpdateVisuals_31)); }
	inline bool get_m_DelayedUpdateVisuals_31() const { return ___m_DelayedUpdateVisuals_31; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_31() { return &___m_DelayedUpdateVisuals_31; }
	inline void set_m_DelayedUpdateVisuals_31(bool value)
	{
		___m_DelayedUpdateVisuals_31 = value;
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_UVRect_37;

public:
	inline static int32_t get_offset_of_m_Texture_36() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_Texture_36)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_36() const { return ___m_Texture_36; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_36() { return &___m_Texture_36; }
	inline void set_m_Texture_36(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_UVRect_37() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_UVRect_37)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_UVRect_37() const { return ___m_UVRect_37; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_UVRect_37() { return &___m_UVRect_37; }
	inline void set_m_UVRect_37(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_UVRect_37 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Sound[]
struct SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * m_Items[1];

public:
	inline Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sound_tF983595F9C621A86B56E05F9778810369E90A0FE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sound_tF983595F9C621A86B56E05F9778810369E90A0FE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 System.Array::Find<System.Object>(!!0[],System.Predicate`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_Find_TisRuntimeObject_m5F5DB46E68DD5A65AFC4306E2F3052D000135CB4_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___match1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mBD77C0F802DCADE1347AF93EA32016846C791C65_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m7137356547ADC5089A381F0EC5E9280576983E2E_gshared (const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void AudioManager/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m6515C51E8DAA51E532613F8D570C901AA0662366 (U3CU3Ec__DisplayClass2_0_t8BF290F40814A816D4B9EB266488218E96B9F751 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<Sound>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m41E2A799648B173ADBE5EC11BC96DC086099D80B (Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared)(__this, ___object0, ___method1, method);
}
// !!0 System.Array::Find<Sound>(!!0[],System.Predicate`1<!!0>)
inline Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * Array_Find_TisSound_tF983595F9C621A86B56E05F9778810369E90A0FE_m22DF23BD135E45E3AE095E0447BF106DFC09AF17 (SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* ___array0, Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9 * ___match1, const RuntimeMethod* method)
{
	return ((  Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * (*) (SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF*, Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9 *, const RuntimeMethod*))Array_Find_TisRuntimeObject_m5F5DB46E68DD5A65AFC4306E2F3052D000135CB4_gshared)(___array0, ___match1, method);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void AudioManager/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m9AA66FE1C8A16E777AC0739B8F84BA9C8A188818 (U3CU3Ec__DisplayClass3_0_t7AEE78B6AD4458F444C79772703B864DB9257CE1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1 (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_activeSceneChanged(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_activeSceneChanged_mA9D5F83D7893948A40CEC216FF017E3B4428BB9D (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * ___value0, const RuntimeMethod* method);
// System.Void BallChaser::PreviewStage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallChaser_PreviewStage_m299E1D58762FD8D32BAB13D70274EF2513DAE62B (BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::remove_activeSceneChanged(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_activeSceneChanged_m490A6795E39590DACF748E6489835862E9F8B97F (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<TankUI>()
inline TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<MilitaryTankUI>()
inline MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void MilitaryTankUI::ToggleFiringUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_ToggleFiringUI_mE1505E3A6BC5A085FD44F3325F7B334E09BCF0A1 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method);
// System.Void TankUI::ToggleFiringUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_ToggleFiringUI_mFD6945E3F50F375D4CC64584F921030418CFBAE2 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m52C9390086344FA8787001ED5911550D850CE515 (const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Multiply(System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Multiply_m2DBC3FD5369D6F113801ACF505C76C1621AED1A4 (float ___b0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Addition_mE1CE1F2075042A606B6AED35182B0741E91EE1D7 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879 (String_t* ___name0, const RuntimeMethod* method);
// System.Void MilitaryTankUI::BallTypeSet(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, int32_t ___num0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<BallChaser>()
inline BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * GameObject_GetComponent_TisBallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0_mC9399A70630B7AA20D42A414A2B1C47CD05336E0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void CameraNudge::PanCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraNudge_PanCamera_m9D01022B5D9ADB317C47C31121124D3F7EA5CA7E (CameraNudge_tBAD456E428F966679846B40471521A4896503D20 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m689599122AC9F35D1FCCA2BF2414387472B0799F (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_mBCEAE9AEF8827512D6ADF03AB336DFA2C8A223E0 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<CameraMover>()
inline CameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7 * Component_GetComponent_TisCameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7_m625C01A7AB0D19238D3BD3081BD6FD38A7101207 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mEF40689A9E574691E832255C430A9E626B005AF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void TankUI::GainBall(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_GainBall_m599F0B37721538AA9CBB37382CF300AB6D257592 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, int32_t ___ballgain0, const RuntimeMethod* method);
// System.Void MilitaryTankUI::GainBall(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_GainBall_m9BFA0204BCF5041AFEB319FDC5E9BE45574C5F48 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, int32_t ___ballgain0, const RuntimeMethod* method);
// System.Void TankUI::LoseStrokes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_LoseStrokes_mBC399DA226D51819BED78C57A50CB708FEB8FFB5 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, int32_t ___strokelost0, const RuntimeMethod* method);
// System.Void MilitaryTankUI::LoseStrokes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_LoseStrokes_m1669F95B813B8664D34C9B35BD11798A55985115 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, int32_t ___strokelost0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// HeadManager HeadManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<CustomizedTankManager>()
inline CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A * Component_GetComponent_TisCustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A_m927FB09BF7CC9572009BC0FAE0E0329BFEFFFA11 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void CustomizedTankManager::ChangeColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomizedTankManager_ChangeColor_m3A6853D396DFEDFE8A52C42623BBE6B872F3F2C0 (CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A * __this, String_t* ___color0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mF4561CC9E8B5EEB0FB813083642A09AA8D60CCB1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_m787119A4B2078DAB30985625CA7B3B0FF6099FF5 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void Elevator::ElevatorMove(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_ElevatorMove_m510057B0A0F1C49E8E4B6C7DD7E8D514EC800FC7 (Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E * __this, bool ___Direction0, int32_t ___CurrentFloor1, const RuntimeMethod* method);
// System.Void TankUI::NoEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_NoEffect_m3426B6CDB870E7C4A7A302C63D844E35DA8EBD44 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method);
// System.Void MilitaryTankUI::NoEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_NoEffect_m44C7FF19E96E235397E5B4B8994326D4D8986EAF (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method);
// System.Void Elevator::MoveElevatorUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_MoveElevatorUp_mAE229551CD6AF0C0C8EFEE4F221CA1D96FEE96A9 (Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m6364CCD309A4A64D49115167E97154D40CF8F140 (const RuntimeMethod* method);
// System.Collections.IEnumerator ExplosionDissipate::DestructionCountdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExplosionDissipate_DestructionCountdown_m62F445FC12E31352FA35C03CD4596C2B2502DFA0 (ExplosionDissipate_t54631AF601297033AA8D43E0069B19E94F4A5472 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void ExplosionDissipate/<DestructionCountdown>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestructionCountdownU3Ed__1__ctor_m11E2BB8D085B0EFCFA1F7BEF9A6F2BD0D18E4328 (U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void MilitaryTankUI::LevelFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_LevelFinished_mC9810AA210B76D94FF23B7E06036E02161DEF32F (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method);
// System.Void TankUI::LevelFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_LevelFinished_m9E54DAD6C2443EA0FA9407041B29182DAD4260F0 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method);
// System.Void HeadManager::set_Instance(HeadManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HeadManager_set_Instance_m388E9B4DA300C04B56B4C4CA168B52DCE406F5D1_inline (HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m8E3B1C552851D48BDC47F510C07714610923319B (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void HeadManager::AddHighscores(LevelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadManager_AddHighscores_m60CB252FD9EB4B540CAC783359D8A2C4BE97EE13 (HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * __this, LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * ___level0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void LevelData::HoleInOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelData_HoleInOne_m1581906C18D3F7ED2CCC93276138122443B7F8C2 (LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * __this, const RuntimeMethod* method);
// System.Void HeadManager::AddScore(LevelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadManager_AddScore_m244881D47537ED7308B231B3C586947DCA1E5114 (HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * __this, LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * ___level0, const RuntimeMethod* method);
// System.Void LevelSelectManager::LevelStars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelectManager_LevelStars_m06112574A5C6EC16C70307B0EEAB5500B4DF5FFB (LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Elevator>()
inline Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E * GameObject_GetComponent_TisElevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E_mA221C4837CC08314152B7C39AD36DA6441CACF6F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Elevator::TankEntered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_TankEntered_m2EB0224CD5CBF18628A88A9C327265BE3695EB4E (Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E * __this, const RuntimeMethod* method);
// System.Void MenuManager::HideControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_HideControls_m9016472D45E0EA122712D01EE290B9F5B06A9139 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<LevelData>()
inline LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<CustomizedTankManager>()
inline CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A * GameObject_GetComponent_TisCustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A_m5AE06FE0ABBA1DFFED858F575F037A7EB7489F8E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void CustomizedTankManager::ColorTank(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomizedTankManager_ColorTank_m87BEC55241205CDE6CF4F7C238625E077DC60B83 (CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tankbody0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1 (const RuntimeMethod* method);
// System.Void UnityEngine.UI.Scrollbar::set_size(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrollbar_set_size_m93B8718BD965E7188796F588928D240730CE22E6 (Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * __this, float ___value0, const RuntimeMethod* method);
// System.Void MilitaryTankUI::StopMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_StopMovement_m71DFBBBF554A760D64BF87AC5E0F6ABB4BD5F199 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rigidbody::IsSleeping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_IsSleeping_mD41EDC4429411110D1FE36101C89B0277F8D62BA (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void LevelData::LevelFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelData_LevelFinished_m2C4517B23A7CB13D09CF75142DB21E7FD20C2782 (LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mBD77C0F802DCADE1347AF93EA32016846C791C65_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void BallChaser::Follow(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallChaser_Follow_m2EA8FFA25D3EB9C6F113B02E0CFAB9526BAAE793 (BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BallShot0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<AudioManager>()
inline AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * GameObject_GetComponent_TisAudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_mDB85AB7B0E848FB670787AACE9F6412274FDDCD9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void AudioManager::PlaySound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlaySound_mC2A55DCCB9581CE5B6C04F592D049F3C50620707 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, String_t* ___SoundName0, const RuntimeMethod* method);
// System.Collections.IEnumerator MilitaryTankUI::ScreenShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MilitaryTankUI_ScreenShake_mAF01F94215BBB954D0EEDB31EAE6E4063C737C63 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method);
// System.Void MilitaryTankUI/<ScreenShake>d__63::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScreenShakeU3Ed__63__ctor_m851482DC9BF1E9D9D37A49EA82CE7E86C739A001 (U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void MilitaryTankUI::StageLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_StageLost_m5A9EF5DABAAEAD540227F27DFBE615C60FCF226D (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method);
// System.Void AudioManager::StopSound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_StopSound_m12550FA2C7345075AF9064F1DA4FC7C695018608 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, String_t* ___SoundName0, const RuntimeMethod* method);
// System.Void TankUI::StopMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_StopMovement_mC91CEDF22B4C4172FFEF1299312B1724E272C984 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m60E39BE31529DE5163116785A69FACC77C52DA98 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Object_FindObjectOfType_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m525EA90F66B89CBDB092C15CE0CBE4480F723A6C (const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m7137356547ADC5089A381F0EC5E9280576983E2E_gshared)(method);
}
// System.Collections.IEnumerator TankUI::ScreenShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TankUI_ScreenShake_m9DCF8B443E1DE8BE1FD44635727C7BCF71F8A9A3 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method);
// System.Void TankUI/<ScreenShake>d__60::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScreenShakeU3Ed__60__ctor_m34B1B1B658EC9903C18ED3A58076D3FF776A8263 (U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void TankUI::StageLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_StageLost_m5519C75CD064F5C3E1DD7014B063E2208F4776A2 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator TeleportDissipate::DestructionCountdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TeleportDissipate_DestructionCountdown_m193824F51B3EBF395EEC38D223BF033EC48626AD (TeleportDissipate_t04FF60E2EDE635C984E97DDAD0611803F094C82F * __this, const RuntimeMethod* method);
// System.Void TeleportDissipate/<DestructionCountdown>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestructionCountdownU3Ed__1__ctor_mC8D6F115AAC030B566C792FAAFF4AE1A1625C57F (U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Random_get_insideUnitSphere_m34D2CBC8806C3E47E7C550DE77304E3A48EB2F40 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AudioManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Awake_mD7873A38A3ED577A313A05D24BF6511E59EDEC01 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* V_0 = NULL;
	int32_t V_1 = 0;
	Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * V_2 = NULL;
	{
		// foreach (Sound currentsound in Sounds)
		SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* L_0 = __this->get_Sounds_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0046;
	}

IL_000b:
	{
		// foreach (Sound currentsound in Sounds)
		SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// currentsound.Source = gameObject.AddComponent<AudioSource>();
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_5 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7;
		L_7 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_6, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->set_Source_4(L_7);
		// currentsound.Source.clip = currentsound.Audio;
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_8 = V_2;
		NullCheck(L_8);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = L_8->get_Source_4();
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_10 = V_2;
		NullCheck(L_10);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_11 = L_10->get_Audio_1();
		NullCheck(L_9);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_9, L_11, /*hidden argument*/NULL);
		// currentsound.Source.volume = currentsound.volume;
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_12 = V_2;
		NullCheck(L_12);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_13 = L_12->get_Source_4();
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_14 = V_2;
		NullCheck(L_14);
		float L_15 = L_14->get_volume_2();
		NullCheck(L_13);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_13, L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0046:
	{
		// foreach (Sound currentsound in Sounds)
		int32_t L_17 = V_1;
		SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AudioManager::PlaySound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlaySound_mC2A55DCCB9581CE5B6C04F592D049F3C50620707 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, String_t* ___SoundName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisSound_tF983595F9C621A86B56E05F9778810369E90A0FE_m22DF23BD135E45E3AE095E0447BF106DFC09AF17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m41E2A799648B173ADBE5EC11BC96DC086099D80B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CPlaySoundU3Eb__0_mEB933D1FF483D0DE9BE5C7F50C006F4747062A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t8BF290F40814A816D4B9EB266488218E96B9F751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t8BF290F40814A816D4B9EB266488218E96B9F751 * V_0 = NULL;
	Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t8BF290F40814A816D4B9EB266488218E96B9F751 * L_0 = (U3CU3Ec__DisplayClass2_0_t8BF290F40814A816D4B9EB266488218E96B9F751 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t8BF290F40814A816D4B9EB266488218E96B9F751_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_m6515C51E8DAA51E532613F8D570C901AA0662366(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t8BF290F40814A816D4B9EB266488218E96B9F751 * L_1 = V_0;
		String_t* L_2 = ___SoundName0;
		NullCheck(L_1);
		L_1->set_SoundName_0(L_2);
		// Sound Currentsound = Array.Find(Sounds, sound => sound.Name == SoundName);
		SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* L_3 = __this->get_Sounds_4();
		U3CU3Ec__DisplayClass2_0_t8BF290F40814A816D4B9EB266488218E96B9F751 * L_4 = V_0;
		Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9 * L_5 = (Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9 *)il2cpp_codegen_object_new(Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m41E2A799648B173ADBE5EC11BC96DC086099D80B(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3CPlaySoundU3Eb__0_mEB933D1FF483D0DE9BE5C7F50C006F4747062A89_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m41E2A799648B173ADBE5EC11BC96DC086099D80B_RuntimeMethod_var);
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_6;
		L_6 = Array_Find_TisSound_tF983595F9C621A86B56E05F9778810369E90A0FE_m22DF23BD135E45E3AE095E0447BF106DFC09AF17(L_3, L_5, /*hidden argument*/Array_Find_TisSound_tF983595F9C621A86B56E05F9778810369E90A0FE_m22DF23BD135E45E3AE095E0447BF106DFC09AF17_RuntimeMethod_var);
		V_1 = L_6;
		// if (Currentsound != null)
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_7 = V_1;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		// Currentsound.Source.Play();
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_8 = V_1;
		NullCheck(L_8);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = L_8->get_Source_4();
		NullCheck(L_9);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_9, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void AudioManager::StopSound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_StopSound_m12550FA2C7345075AF9064F1DA4FC7C695018608 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, String_t* ___SoundName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisSound_tF983595F9C621A86B56E05F9778810369E90A0FE_m22DF23BD135E45E3AE095E0447BF106DFC09AF17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m41E2A799648B173ADBE5EC11BC96DC086099D80B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CStopSoundU3Eb__0_mF04D158913C8E80FDE618C87EF1CDE8D7C00D117_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t7AEE78B6AD4458F444C79772703B864DB9257CE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t7AEE78B6AD4458F444C79772703B864DB9257CE1 * V_0 = NULL;
	Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t7AEE78B6AD4458F444C79772703B864DB9257CE1 * L_0 = (U3CU3Ec__DisplayClass3_0_t7AEE78B6AD4458F444C79772703B864DB9257CE1 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t7AEE78B6AD4458F444C79772703B864DB9257CE1_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_m9AA66FE1C8A16E777AC0739B8F84BA9C8A188818(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t7AEE78B6AD4458F444C79772703B864DB9257CE1 * L_1 = V_0;
		String_t* L_2 = ___SoundName0;
		NullCheck(L_1);
		L_1->set_SoundName_0(L_2);
		// Sound Currentsound = Array.Find(Sounds, sound => sound.Name == SoundName);
		SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* L_3 = __this->get_Sounds_4();
		U3CU3Ec__DisplayClass3_0_t7AEE78B6AD4458F444C79772703B864DB9257CE1 * L_4 = V_0;
		Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9 * L_5 = (Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9 *)il2cpp_codegen_object_new(Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m41E2A799648B173ADBE5EC11BC96DC086099D80B(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass3_0_U3CStopSoundU3Eb__0_mF04D158913C8E80FDE618C87EF1CDE8D7C00D117_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m41E2A799648B173ADBE5EC11BC96DC086099D80B_RuntimeMethod_var);
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_6;
		L_6 = Array_Find_TisSound_tF983595F9C621A86B56E05F9778810369E90A0FE_m22DF23BD135E45E3AE095E0447BF106DFC09AF17(L_3, L_5, /*hidden argument*/Array_Find_TisSound_tF983595F9C621A86B56E05F9778810369E90A0FE_m22DF23BD135E45E3AE095E0447BF106DFC09AF17_RuntimeMethod_var);
		V_1 = L_6;
		// if (Currentsound != null)
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_7 = V_1;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		// Currentsound.Source.Stop();
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_8 = V_1;
		NullCheck(L_8);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = L_8->get_Source_4();
		NullCheck(L_9);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_9, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void AudioManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__ctor_m6C686441D1A1A223E4CF940A8EB0128535D603BD (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BallChaser::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallChaser_OnEnable_m6F4A5EB68DD0F89BDB4E04FDEC2C7AABE67CAE37 (BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallChaser_OnSceneLoaded_mEB26340D33C1F086561E0EF74EC3CF8CBD64C253_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.activeSceneChanged += OnSceneLoaded;
		UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * L_0 = (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 *)il2cpp_codegen_object_new(UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1(L_0, __this, (intptr_t)((intptr_t)BallChaser_OnSceneLoaded_mEB26340D33C1F086561E0EF74EC3CF8CBD64C253_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_add_activeSceneChanged_mA9D5F83D7893948A40CEC216FF017E3B4428BB9D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BallChaser::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallChaser_OnSceneLoaded_mEB26340D33C1F086561E0EF74EC3CF8CBD64C253 (BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene21, const RuntimeMethod* method)
{
	{
		// PreviewStage();
		BallChaser_PreviewStage_m299E1D58762FD8D32BAB13D70274EF2513DAE62B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BallChaser::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallChaser_OnDisable_m255FCBD61BE29546A5FB7B59A415DE6B01CD30B9 (BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallChaser_OnSceneLoaded_mEB26340D33C1F086561E0EF74EC3CF8CBD64C253_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.activeSceneChanged -= OnSceneLoaded;
		UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * L_0 = (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 *)il2cpp_codegen_object_new(UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1(L_0, __this, (intptr_t)((intptr_t)BallChaser_OnSceneLoaded_mEB26340D33C1F086561E0EF74EC3CF8CBD64C253_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_remove_activeSceneChanged_m490A6795E39590DACF748E6489835862E9F8B97F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BallChaser::ActivateLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallChaser_ActivateLevel_m7C5F033CA95B24EA98B4ABE510FD3A7A6BA1E28E (BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * __this, const RuntimeMethod* method)
{
	{
		// PreviewStage();
		BallChaser_PreviewStage_m299E1D58762FD8D32BAB13D70274EF2513DAE62B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BallChaser::PreviewStage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallChaser_PreviewStage_m299E1D58762FD8D32BAB13D70274EF2513DAE62B (BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Tank.GetComponent<TankUI>()== null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Tank_5();
		NullCheck(L_0);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_1;
		L_1 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_0, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().ToggleFiringUI();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_Tank_5();
		NullCheck(L_3);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_4;
		L_4 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_3, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_4);
		MilitaryTankUI_ToggleFiringUI_mE1505E3A6BC5A085FD44F3325F7B334E09BCF0A1(L_4, /*hidden argument*/NULL);
		// }
		goto IL_0035;
	}

IL_0025:
	{
		// Tank.GetComponent<TankUI>().ToggleFiringUI();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_Tank_5();
		NullCheck(L_5);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_6;
		L_6 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_5, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		NullCheck(L_6);
		TankUI_ToggleFiringUI_mFD6945E3F50F375D4CC64584F921030418CFBAE2(L_6, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// if (Buffer1!=null) PreviewSteps = 3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_Buffer1_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		// if (Buffer1!=null) PreviewSteps = 3;
		__this->set_PreviewSteps_13(3);
	}

IL_004a:
	{
		// if (Buffer2!=null) PreviewSteps = 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_Buffer2_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		// if (Buffer2!=null) PreviewSteps = 4;
		__this->set_PreviewSteps_13(4);
	}

IL_005f:
	{
		// LevelPreview = true;
		__this->set_LevelPreview_6((bool)1);
		// timeStart = Time.time;
		float L_11;
		L_11 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		__this->set_timeStart_15(L_11);
		// if (Tank.GetComponent<TankUI>()== null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_Tank_5();
		NullCheck(L_12);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_13;
		L_13 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_12, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_009c;
		}
	}
	{
		// LevelName = Tank.GetComponent<MilitaryTankUI>().LevelName;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_Tank_5();
		NullCheck(L_15);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_16;
		L_16 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_15, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_17 = L_16->get_LevelName_49();
		__this->set_LevelName_12(L_17);
		// }
		goto IL_00b2;
	}

IL_009c:
	{
		// LevelName = Tank.GetComponent<TankUI>().LevelName;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_Tank_5();
		NullCheck(L_18);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_19;
		L_19 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_18, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		NullCheck(L_19);
		String_t* L_20 = L_19->get_LevelName_48();
		__this->set_LevelName_12(L_20);
	}

IL_00b2:
	{
		// LevelTitle.text = LevelName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = __this->get_LevelTitle_17();
		String_t* L_22 = __this->get_LevelName_12();
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_22);
		// LevelTitleObject = LevelTitle.gameObject;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = __this->get_LevelTitle_17();
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		__this->set_LevelTitleObject_18(L_24);
		// LevelTitleObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_LevelTitleObject_18();
		NullCheck(L_25);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BallChaser::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallChaser_Update_mBA0B156FABB73B1ECB536543CC1DE16A28C253DE (BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (LevelPreview == true)
		bool L_0 = __this->get_LevelPreview_6();
		if (!L_0)
		{
			goto IL_0372;
		}
	}
	{
		// float u = (Time.time - timeStart) / timeDuration;
		float L_1;
		L_1 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		float L_2 = __this->get_timeStart_15();
		float L_3 = __this->get_timeDuration_16();
		V_0 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2))/(float)L_3));
		// if (u >= 1)
		float L_4 = V_0;
		if ((!(((float)L_4) >= ((float)(1.0f)))))
		{
			goto IL_0075;
		}
	}
	{
		// u = 1;
		V_0 = (1.0f);
		// LevelPreview = false;
		__this->set_LevelPreview_6((bool)0);
		// if (Tank.GetComponent<TankUI>() == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_Tank_5();
		NullCheck(L_5);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_6;
		L_6 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_5, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().ToggleFiringUI();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_Tank_5();
		NullCheck(L_8);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_9;
		L_9 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_8, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_9);
		MilitaryTankUI_ToggleFiringUI_mE1505E3A6BC5A085FD44F3325F7B334E09BCF0A1(L_9, /*hidden argument*/NULL);
		// }
		goto IL_0069;
	}

IL_0059:
	{
		// Tank.GetComponent<TankUI>().ToggleFiringUI();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_Tank_5();
		NullCheck(L_10);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_11;
		L_11 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_10, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		NullCheck(L_11);
		TankUI_ToggleFiringUI_mFD6945E3F50F375D4CC64584F921030418CFBAE2(L_11, /*hidden argument*/NULL);
	}

IL_0069:
	{
		// LevelTitleObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_LevelTitleObject_18();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
	}

IL_0075:
	{
		// c01 = (1 - u) * new Color(0, 0, 0, 0) + u * new Color(0, 0, 0, 2);
		float L_13 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_14), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15;
		L_15 = Color_op_Multiply_m2DBC3FD5369D6F113801ACF505C76C1621AED1A4(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_13)), L_14, /*hidden argument*/NULL);
		float L_16 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_17), (0.0f), (0.0f), (0.0f), (2.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = Color_op_Multiply_m2DBC3FD5369D6F113801ACF505C76C1621AED1A4(L_16, L_17, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		L_19 = Color_op_Addition_mE1CE1F2075042A606B6AED35182B0741E91EE1D7(L_15, L_18, /*hidden argument*/NULL);
		__this->set_c01_19(L_19);
		// c12 = (1 - u) * new Color(0, 0, 0, 2) + u * new Color(0, 0, 0, 0);
		float L_20 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_21), (0.0f), (0.0f), (0.0f), (2.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22;
		L_22 = Color_op_Multiply_m2DBC3FD5369D6F113801ACF505C76C1621AED1A4(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_20)), L_21, /*hidden argument*/NULL);
		float L_23 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_24), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25;
		L_25 = Color_op_Multiply_m2DBC3FD5369D6F113801ACF505C76C1621AED1A4(L_23, L_24, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26;
		L_26 = Color_op_Addition_mE1CE1F2075042A606B6AED35182B0741E91EE1D7(L_22, L_25, /*hidden argument*/NULL);
		__this->set_c12_20(L_26);
		// c012 = (1 - u) * c01 + u * c12;
		float L_27 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28 = __this->get_c01_19();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_29;
		L_29 = Color_op_Multiply_m2DBC3FD5369D6F113801ACF505C76C1621AED1A4(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_27)), L_28, /*hidden argument*/NULL);
		float L_30 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31 = __this->get_c12_20();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		L_32 = Color_op_Multiply_m2DBC3FD5369D6F113801ACF505C76C1621AED1A4(L_30, L_31, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33;
		L_33 = Color_op_Addition_mE1CE1F2075042A606B6AED35182B0741E91EE1D7(L_29, L_32, /*hidden argument*/NULL);
		__this->set_c012_21(L_33);
		// LevelTitle.GetComponent<Text>().color = c012;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_34 = __this->get_LevelTitle_17();
		NullCheck(L_34);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_35;
		L_35 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_34, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36 = __this->get_c012_21();
		NullCheck(L_35);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_36);
		// p01 = (1 - u) * HolePoint.transform.position + u * TankPoint.transform.position;
		float L_37 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_HolePoint_8();
		NullCheck(L_38);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_37)), L_40, /*hidden argument*/NULL);
		float L_42 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = __this->get_TankPoint_9();
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(L_42, L_45, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_41, L_46, /*hidden argument*/NULL);
		__this->set_p01_14(L_47);
		// if (PreviewSteps < 3)
		int32_t L_48 = __this->get_PreviewSteps_13();
		if ((((int32_t)L_48) >= ((int32_t)3)))
		{
			goto IL_01a9;
		}
	}
	{
		// transform.position = p01;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = __this->get_p01_14();
		NullCheck(L_49);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_49, L_50, /*hidden argument*/NULL);
	}

IL_01a9:
	{
		// if (PreviewSteps == 3)
		int32_t L_51 = __this->get_PreviewSteps_13();
		if ((!(((uint32_t)L_51) == ((uint32_t)3))))
		{
			goto IL_0255;
		}
	}
	{
		// p01 = (1 - u) * HolePoint.transform.position + u * Buffer1.transform.position;
		float L_52 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = __this->get_HolePoint_8();
		NullCheck(L_53);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_54, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_52)), L_55, /*hidden argument*/NULL);
		float L_57 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = __this->get_Buffer1_10();
		NullCheck(L_58);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_59, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(L_57, L_60, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_56, L_61, /*hidden argument*/NULL);
		__this->set_p01_14(L_62);
		// p12 = (1 - u) * Buffer1.transform.position + u * Tank.transform.position;
		float L_63 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = __this->get_Buffer1_10();
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_65, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		L_67 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_63)), L_66, /*hidden argument*/NULL);
		float L_68 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69 = __this->get_Tank_5();
		NullCheck(L_69);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_70, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(L_68, L_71, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		L_73 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_67, L_72, /*hidden argument*/NULL);
		V_1 = L_73;
		// p012 = (1 - u) * p01 + u * p12;
		float L_74 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75 = __this->get_p01_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		L_76 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_74)), L_75, /*hidden argument*/NULL);
		float L_77 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79;
		L_79 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(L_77, L_78, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80;
		L_80 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_76, L_79, /*hidden argument*/NULL);
		V_3 = L_80;
		// transform.position = p012;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_81;
		L_81 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82 = V_3;
		NullCheck(L_81);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_81, L_82, /*hidden argument*/NULL);
	}

IL_0255:
	{
		// if (PreviewSteps == 4)
		int32_t L_83 = __this->get_PreviewSteps_13();
		if ((!(((uint32_t)L_83) == ((uint32_t)4))))
		{
			goto IL_03be;
		}
	}
	{
		// p01 = (1 - u) * HolePoint.transform.position + u * Buffer1.transform.position;
		float L_84 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_85 = __this->get_HolePoint_8();
		NullCheck(L_85);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_86;
		L_86 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_85, /*hidden argument*/NULL);
		NullCheck(L_86);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87;
		L_87 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_86, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88;
		L_88 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_84)), L_87, /*hidden argument*/NULL);
		float L_89 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_90 = __this->get_Buffer1_10();
		NullCheck(L_90);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_91;
		L_91 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_90, /*hidden argument*/NULL);
		NullCheck(L_91);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92;
		L_92 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_91, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93;
		L_93 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(L_89, L_92, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94;
		L_94 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_88, L_93, /*hidden argument*/NULL);
		__this->set_p01_14(L_94);
		// p12 = (1 - u) * Buffer1.transform.position + u * Buffer2.transform.position;
		float L_95 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_96 = __this->get_Buffer1_10();
		NullCheck(L_96);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_97;
		L_97 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_96, /*hidden argument*/NULL);
		NullCheck(L_97);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98;
		L_98 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_97, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99;
		L_99 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_95)), L_98, /*hidden argument*/NULL);
		float L_100 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_101 = __this->get_Buffer2_11();
		NullCheck(L_101);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_102;
		L_102 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_101, /*hidden argument*/NULL);
		NullCheck(L_102);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103;
		L_103 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_102, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104;
		L_104 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(L_100, L_103, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105;
		L_105 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_99, L_104, /*hidden argument*/NULL);
		V_1 = L_105;
		// p23 = (1 - u) * Buffer2.transform.position + u * TankPoint.transform.position;
		float L_106 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_107 = __this->get_Buffer2_11();
		NullCheck(L_107);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_108;
		L_108 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_107, /*hidden argument*/NULL);
		NullCheck(L_108);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
		L_109 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_108, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110;
		L_110 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_106)), L_109, /*hidden argument*/NULL);
		float L_111 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_112 = __this->get_TankPoint_9();
		NullCheck(L_112);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_113;
		L_113 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_112, /*hidden argument*/NULL);
		NullCheck(L_113);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_114;
		L_114 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_113, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_115;
		L_115 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(L_111, L_114, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_116;
		L_116 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_110, L_115, /*hidden argument*/NULL);
		V_2 = L_116;
		// p012 = (1 - u) * p01 + u * p12;
		float L_117 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_118 = __this->get_p01_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_119;
		L_119 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_117)), L_118, /*hidden argument*/NULL);
		float L_120 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_121 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_122;
		L_122 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(L_120, L_121, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123;
		L_123 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_119, L_122, /*hidden argument*/NULL);
		V_3 = L_123;
		// p123 = (1 - u) * p12 + u * p23;
		float L_124 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_126;
		L_126 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_124)), L_125, /*hidden argument*/NULL);
		float L_127 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_128 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_129;
		L_129 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(L_127, L_128, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_130;
		L_130 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_126, L_129, /*hidden argument*/NULL);
		V_4 = L_130;
		// p0123 = (1 - u) * p012 + u * p123;
		float L_131 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_133;
		L_133 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_131)), L_132, /*hidden argument*/NULL);
		float L_134 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_135 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_136;
		L_136 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(L_134, L_135, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_137;
		L_137 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_133, L_136, /*hidden argument*/NULL);
		V_5 = L_137;
		// transform.position = p0123;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_138;
		L_138 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139 = V_5;
		NullCheck(L_138);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_138, L_139, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0372:
	{
		// if (CurrentBall != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_140 = __this->get_CurrentBall_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_141;
		L_141 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_140, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_141)
		{
			goto IL_039c;
		}
	}
	{
		// this.transform.position = CurrentBall.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_142;
		L_142 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_143 = __this->get_CurrentBall_4();
		NullCheck(L_143);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_144;
		L_144 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_143, /*hidden argument*/NULL);
		NullCheck(L_144);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_145;
		L_145 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_144, /*hidden argument*/NULL);
		NullCheck(L_142);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_142, L_145, /*hidden argument*/NULL);
		// }
		return;
	}

IL_039c:
	{
		// this.transform.position = Tank.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_146;
		L_146 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_147 = __this->get_Tank_5();
		NullCheck(L_147);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_148;
		L_148 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_147, /*hidden argument*/NULL);
		NullCheck(L_148);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_149;
		L_149 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_148, /*hidden argument*/NULL);
		NullCheck(L_146);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_146, L_149, /*hidden argument*/NULL);
		// FollowingBall = false;
		__this->set_FollowingBall_7((bool)0);
	}

IL_03be:
	{
		// }
		return;
	}
}
// System.Void BallChaser::Follow(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallChaser_Follow_m2EA8FFA25D3EB9C6F113B02E0CFAB9526BAAE793 (BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BallShot0, const RuntimeMethod* method)
{
	{
		// CurrentBall = BallShot;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___BallShot0;
		__this->set_CurrentBall_4(L_0);
		// FollowingBall = true;
		__this->set_FollowingBall_7((bool)1);
		// }
		return;
	}
}
// System.Void BallChaser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallChaser__ctor_mFCB5273B7D96A62AC57D80FF22B31C0D1AC9947B (BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float timeDuration = 3.0f;
		__this->set_timeDuration_16((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BallSettings::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallSettings_Start_m848922D5D3C5A9AB2F6BB1FE0D22BB99A9FAA500 (BallSettings_tF6E80FEBEA71ED76CC5494DAB0AA07765D6D9DDD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D831F59C2C7F47DD63B72A7703AD8E3312FB823);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Tank = GameObject.Find("Tank");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D, /*hidden argument*/NULL);
		__this->set_Tank_4(L_0);
		// if (NormalBall)
		bool L_1 = __this->get_NormalBall_6();
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// CurrentBall = "Normal";
		__this->set_CurrentBall_10(_stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A);
		// Tank.GetComponent<MilitaryTankUI>().BallTypeSet(1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Tank_4();
		NullCheck(L_2);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_3;
		L_3 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_2, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_3);
		MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline(L_3, 1, /*hidden argument*/NULL);
		// NormalButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_NormalButton_11();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// if (!SwitchableBallType)
		bool L_5 = __this->get_SwitchableBallType_5();
		if (L_5)
		{
			goto IL_0171;
		}
	}
	{
		// NormalButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_NormalButton_11();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0058:
	{
		// else if (PlatformBall)
		bool L_7 = __this->get_PlatformBall_7();
		if (!L_7)
		{
			goto IL_00b8;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().BallTypeSet(2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_Tank_4();
		NullCheck(L_8);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_9;
		L_9 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_8, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_9);
		MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline(L_9, 2, /*hidden argument*/NULL);
		// CurrentBall = "Platform";
		__this->set_CurrentBall_10(_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		// PlatformButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_PlatformButton_12();
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// NormalButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_NormalButton_11();
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		// if (!SwitchableBallType)
		bool L_12 = __this->get_SwitchableBallType_5();
		if (L_12)
		{
			goto IL_0171;
		}
	}
	{
		// NormalButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_NormalButton_11();
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)0, /*hidden argument*/NULL);
		// PlatformButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_PlatformButton_12();
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b8:
	{
		// else if (WallBall)
		bool L_15 = __this->get_WallBall_8();
		if (!L_15)
		{
			goto IL_0115;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().BallTypeSet(3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_Tank_4();
		NullCheck(L_16);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_17;
		L_17 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_16, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_17);
		MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline(L_17, 3, /*hidden argument*/NULL);
		// CurrentBall = "Wall";
		__this->set_CurrentBall_10(_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		// WallButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_WallButton_13();
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// NormalButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_NormalButton_11();
		NullCheck(L_19);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)0, /*hidden argument*/NULL);
		// if (!SwitchableBallType)
		bool L_20 = __this->get_SwitchableBallType_5();
		if (L_20)
		{
			goto IL_0171;
		}
	}
	{
		// NormalButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_NormalButton_11();
		NullCheck(L_21);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_21, (bool)0, /*hidden argument*/NULL);
		// WallButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_WallButton_13();
		NullCheck(L_22);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_22, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0115:
	{
		// else if (SpikyBall)
		bool L_23 = __this->get_SpikyBall_9();
		if (!L_23)
		{
			goto IL_0171;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().BallTypeSet(4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_Tank_4();
		NullCheck(L_24);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_25;
		L_25 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_24, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_25);
		MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline(L_25, 4, /*hidden argument*/NULL);
		// CurrentBall = "Spiky";
		__this->set_CurrentBall_10(_stringLiteral4D831F59C2C7F47DD63B72A7703AD8E3312FB823);
		// SpikyButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_SpikyButton_14();
		NullCheck(L_26);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, (bool)1, /*hidden argument*/NULL);
		// NormalButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_NormalButton_11();
		NullCheck(L_27);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_27, (bool)0, /*hidden argument*/NULL);
		// if (!SwitchableBallType)
		bool L_28 = __this->get_SwitchableBallType_5();
		if (L_28)
		{
			goto IL_0171;
		}
	}
	{
		// NormalButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_NormalButton_11();
		NullCheck(L_29);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_29, (bool)0, /*hidden argument*/NULL);
		// SpikyButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_SpikyButton_14();
		NullCheck(L_30);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)0, /*hidden argument*/NULL);
	}

IL_0171:
	{
		// }
		return;
	}
}
// System.Void BallSettings::CycleBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallSettings_CycleBall_m692CAF6681CF06E633F3B7CF68FBBC0073F8B29F (BallSettings_tF6E80FEBEA71ED76CC5494DAB0AA07765D6D9DDD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D831F59C2C7F47DD63B72A7703AD8E3312FB823);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NormalBall && CurrentBall == "Normal")
		bool L_0 = __this->get_NormalBall_6();
		if (!L_0)
		{
			goto IL_00da;
		}
	}
	{
		String_t* L_1 = __this->get_CurrentBall_10();
		bool L_2;
		L_2 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, _stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00da;
		}
	}
	{
		// if (PlatformBall)
		bool L_3 = __this->get_PlatformBall_7();
		if (!L_3)
		{
			goto IL_005d;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().BallTypeSet(2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Tank_4();
		NullCheck(L_4);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_5;
		L_5 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_4, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_5);
		MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline(L_5, 2, /*hidden argument*/NULL);
		// CurrentBall = "Platform";
		__this->set_CurrentBall_10(_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		// NormalButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_NormalButton_11();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// PlatformButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_PlatformButton_12();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005d:
	{
		// else if (WallBall)
		bool L_8 = __this->get_WallBall_8();
		if (!L_8)
		{
			goto IL_009a;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().BallTypeSet(3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_Tank_4();
		NullCheck(L_9);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_10;
		L_10 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_9, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_10);
		MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline(L_10, 3, /*hidden argument*/NULL);
		// CurrentBall = "Wall";
		__this->set_CurrentBall_10(_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		// NormalButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_NormalButton_11();
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		// WallButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_WallButton_13();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_009a:
	{
		// else if (SpikyBall)
		bool L_13 = __this->get_SpikyBall_9();
		if (!L_13)
		{
			goto IL_0364;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().BallTypeSet(4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_Tank_4();
		NullCheck(L_14);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_15;
		L_15 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_14, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_15);
		MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline(L_15, 4, /*hidden argument*/NULL);
		// CurrentBall = "Spiky";
		__this->set_CurrentBall_10(_stringLiteral4D831F59C2C7F47DD63B72A7703AD8E3312FB823);
		// NormalButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_NormalButton_11();
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)0, /*hidden argument*/NULL);
		// SpikyButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_SpikyButton_14();
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00da:
	{
		// else if (PlatformBall && CurrentBall == "Platform")
		bool L_18 = __this->get_PlatformBall_7();
		if (!L_18)
		{
			goto IL_01b4;
		}
	}
	{
		String_t* L_19 = __this->get_CurrentBall_10();
		bool L_20;
		L_20 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_19, _stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_01b4;
		}
	}
	{
		// if (WallBall)
		bool L_21 = __this->get_WallBall_8();
		if (!L_21)
		{
			goto IL_0137;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().BallTypeSet(3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_Tank_4();
		NullCheck(L_22);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_23;
		L_23 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_22, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_23);
		MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline(L_23, 3, /*hidden argument*/NULL);
		// CurrentBall = "Wall";
		__this->set_CurrentBall_10(_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		// PlatformButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_PlatformButton_12();
		NullCheck(L_24);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)0, /*hidden argument*/NULL);
		// WallButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_WallButton_13();
		NullCheck(L_25);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0137:
	{
		// else if (SpikyBall)
		bool L_26 = __this->get_SpikyBall_9();
		if (!L_26)
		{
			goto IL_0174;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().BallTypeSet(4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_Tank_4();
		NullCheck(L_27);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_28;
		L_28 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_27, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_28);
		MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline(L_28, 4, /*hidden argument*/NULL);
		// CurrentBall = "Spiky";
		__this->set_CurrentBall_10(_stringLiteral4D831F59C2C7F47DD63B72A7703AD8E3312FB823);
		// PlatformButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_PlatformButton_12();
		NullCheck(L_29);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_29, (bool)0, /*hidden argument*/NULL);
		// SpikyButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_SpikyButton_14();
		NullCheck(L_30);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0174:
	{
		// else if (NormalBall)
		bool L_31 = __this->get_NormalBall_6();
		if (!L_31)
		{
			goto IL_0364;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().BallTypeSet(1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_Tank_4();
		NullCheck(L_32);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_33;
		L_33 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_32, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_33);
		MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline(L_33, 1, /*hidden argument*/NULL);
		// CurrentBall = "Normal";
		__this->set_CurrentBall_10(_stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A);
		// PlatformButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_PlatformButton_12();
		NullCheck(L_34);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_34, (bool)0, /*hidden argument*/NULL);
		// NormalButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_NormalButton_11();
		NullCheck(L_35);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_35, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01b4:
	{
		// else if (WallBall && CurrentBall == "Wall")
		bool L_36 = __this->get_WallBall_8();
		if (!L_36)
		{
			goto IL_028e;
		}
	}
	{
		String_t* L_37 = __this->get_CurrentBall_10();
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_37, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_028e;
		}
	}
	{
		// if (SpikyBall)
		bool L_39 = __this->get_SpikyBall_9();
		if (!L_39)
		{
			goto IL_0211;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().BallTypeSet(4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = __this->get_Tank_4();
		NullCheck(L_40);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_41;
		L_41 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_40, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_41);
		MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline(L_41, 4, /*hidden argument*/NULL);
		// CurrentBall = "Spiky";
		__this->set_CurrentBall_10(_stringLiteral4D831F59C2C7F47DD63B72A7703AD8E3312FB823);
		// WallButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = __this->get_WallButton_13();
		NullCheck(L_42);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_42, (bool)0, /*hidden argument*/NULL);
		// SpikyButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = __this->get_SpikyButton_14();
		NullCheck(L_43);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_43, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0211:
	{
		// else if (NormalBall)
		bool L_44 = __this->get_NormalBall_6();
		if (!L_44)
		{
			goto IL_024e;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().BallTypeSet(1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = __this->get_Tank_4();
		NullCheck(L_45);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_46;
		L_46 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_45, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_46);
		MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline(L_46, 1, /*hidden argument*/NULL);
		// CurrentBall = "Normal";
		__this->set_CurrentBall_10(_stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A);
		// WallButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = __this->get_WallButton_13();
		NullCheck(L_47);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_47, (bool)0, /*hidden argument*/NULL);
		// NormalButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = __this->get_NormalButton_11();
		NullCheck(L_48);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_48, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_024e:
	{
		// else if (PlatformBall)
		bool L_49 = __this->get_PlatformBall_7();
		if (!L_49)
		{
			goto IL_0364;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().BallTypeSet(2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = __this->get_Tank_4();
		NullCheck(L_50);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_51;
		L_51 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_50, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_51);
		MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline(L_51, 2, /*hidden argument*/NULL);
		// CurrentBall = "Platform";
		__this->set_CurrentBall_10(_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		// WallButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = __this->get_WallButton_13();
		NullCheck(L_52);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_52, (bool)0, /*hidden argument*/NULL);
		// PlatformButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = __this->get_PlatformButton_12();
		NullCheck(L_53);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_53, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_028e:
	{
		// else if (SpikyBall && CurrentBall == "Spiky")
		bool L_54 = __this->get_SpikyBall_9();
		if (!L_54)
		{
			goto IL_0364;
		}
	}
	{
		String_t* L_55 = __this->get_CurrentBall_10();
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_55, _stringLiteral4D831F59C2C7F47DD63B72A7703AD8E3312FB823, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0364;
		}
	}
	{
		// if (NormalBall)
		bool L_57 = __this->get_NormalBall_6();
		if (!L_57)
		{
			goto IL_02eb;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().BallTypeSet(1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = __this->get_Tank_4();
		NullCheck(L_58);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_59;
		L_59 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_58, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_59);
		MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline(L_59, 1, /*hidden argument*/NULL);
		// CurrentBall = "Normal";
		__this->set_CurrentBall_10(_stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A);
		// SpikyButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60 = __this->get_SpikyButton_14();
		NullCheck(L_60);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_60, (bool)0, /*hidden argument*/NULL);
		// NormalButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61 = __this->get_NormalButton_11();
		NullCheck(L_61);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_61, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_02eb:
	{
		// else if (PlatformBall)
		bool L_62 = __this->get_PlatformBall_7();
		if (!L_62)
		{
			goto IL_0328;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().BallTypeSet(2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_63 = __this->get_Tank_4();
		NullCheck(L_63);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_64;
		L_64 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_63, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_64);
		MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline(L_64, 2, /*hidden argument*/NULL);
		// CurrentBall = "Platform";
		__this->set_CurrentBall_10(_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		// SpikyButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65 = __this->get_SpikyButton_14();
		NullCheck(L_65);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_65, (bool)0, /*hidden argument*/NULL);
		// PlatformButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66 = __this->get_PlatformButton_12();
		NullCheck(L_66);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_66, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0328:
	{
		// else if (WallBall)
		bool L_67 = __this->get_WallBall_8();
		if (!L_67)
		{
			goto IL_0364;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().BallTypeSet(3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = __this->get_Tank_4();
		NullCheck(L_68);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_69;
		L_69 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_68, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_69);
		MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline(L_69, 3, /*hidden argument*/NULL);
		// CurrentBall = "Wall";
		__this->set_CurrentBall_10(_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		// SpikyButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70 = __this->get_SpikyButton_14();
		NullCheck(L_70);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_70, (bool)0, /*hidden argument*/NULL);
		// WallButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71 = __this->get_WallButton_13();
		NullCheck(L_71);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_71, (bool)1, /*hidden argument*/NULL);
	}

IL_0364:
	{
		// }
		return;
	}
}
// System.Void BallSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallSettings__ctor_m81E7A38D6B786FB7737983E5BF8CB3CE06B24DE5 (BallSettings_tF6E80FEBEA71ED76CC5494DAB0AA07765D6D9DDD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string CurrentBall = "Normal";
		__this->set_CurrentBall_10(_stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraMover::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMover_Start_mC4CA55BE8235CE18865A9C4742821FF1AE0B97B0 (CameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CameraMover::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMover_FixedUpdate_m5050BFF3D5A34828B4E14D9BF028D86799F83597 (CameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!Nudging)
		bool L_0 = __this->get_Nudging_5();
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		// Vector3 CameraMod = new Vector3(0f, 0f, -10f);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), (0.0f), (-10.0f), /*hidden argument*/NULL);
		// Vector3 CameraLookSpot = CameraTarget.transform.position + CameraMod;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_CameraTarget_4();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// this.transform.position = CameraLookSpot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_1;
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void CameraMover::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMover__ctor_m2F010C2027337204BFAAB27FDBAE1677B794460C (CameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraNudge::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraNudge_Start_m6A757F49590A33308AEC3F4B16D532F2AB6952A4 (CameraNudge_tBAD456E428F966679846B40471521A4896503D20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF516EC7240CA160FD729299C926B5EDB246658A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraTarget = GameObject.Find("Camera Target");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteralEF516EC7240CA160FD729299C926B5EDB246658A, /*hidden argument*/NULL);
		__this->set_CameraTarget_5(L_0);
		// Tank = GameObject.Find("Tank");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D, /*hidden argument*/NULL);
		__this->set_Tank_8(L_1);
		// }
		return;
	}
}
// System.Void CameraNudge::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraNudge_Update_mF4EA9FEAF9416E2E40254856FB84AFC95720B421 (CameraNudge_tBAD456E428F966679846B40471521A4896503D20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0_mC9399A70630B7AA20D42A414A2B1C47CD05336E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CameraTarget.GetComponent<BallChaser>().LevelPreview == true) return;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_CameraTarget_5();
		NullCheck(L_0);
		BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * L_1;
		L_1 = GameObject_GetComponent_TisBallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0_mC9399A70630B7AA20D42A414A2B1C47CD05336E0(L_0, /*hidden argument*/GameObject_GetComponent_TisBallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0_mC9399A70630B7AA20D42A414A2B1C47CD05336E0_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2 = L_1->get_LevelPreview_6();
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (CameraTarget.GetComponent<BallChaser>().LevelPreview == true) return;
		return;
	}

IL_0013:
	{
		// PanCamera();
		CameraNudge_PanCamera_m9D01022B5D9ADB317C47C31121124D3F7EA5CA7E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraNudge::PanCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraNudge_PanCamera_m9D01022B5D9ADB317C47C31121124D3F7EA5CA7E (CameraNudge_tBAD456E428F966679846B40471521A4896503D20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7_m625C01A7AB0D19238D3BD3081BD6FD38A7101207_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0_mC9399A70630B7AA20D42A414A2B1C47CD05336E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetMouseButtonDown(0) && Input.mousePosition.y > 300)
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m689599122AC9F35D1FCCA2BF2414387472B0799F(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0091;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_mBCEAE9AEF8827512D6ADF03AB336DFA2C8A223E0(/*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		if ((!(((float)L_2) > ((float)(300.0f)))))
		{
			goto IL_0091;
		}
	}
	{
		// CameraPoint = SceneCamera.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_SceneCamera_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Input_get_mousePosition_mBCEAE9AEF8827512D6ADF03AB336DFA2C8A223E0(/*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_3, L_4, /*hidden argument*/NULL);
		__this->set_CameraPoint_4(L_5);
		// SceneCamera.GetComponent<CameraMover>().Nudging = true;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = __this->get_SceneCamera_7();
		NullCheck(L_6);
		CameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7 * L_7;
		L_7 = Component_GetComponent_TisCameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7_m625C01A7AB0D19238D3BD3081BD6FD38A7101207(L_6, /*hidden argument*/Component_GetComponent_TisCameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7_m625C01A7AB0D19238D3BD3081BD6FD38A7101207_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->set_Nudging_5((bool)1);
		// if (!CameraTarget.GetComponent<BallChaser>().FollowingBall)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_CameraTarget_5();
		NullCheck(L_8);
		BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * L_9;
		L_9 = GameObject_GetComponent_TisBallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0_mC9399A70630B7AA20D42A414A2B1C47CD05336E0(L_8, /*hidden argument*/GameObject_GetComponent_TisBallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0_mC9399A70630B7AA20D42A414A2B1C47CD05336E0_RuntimeMethod_var);
		NullCheck(L_9);
		bool L_10 = L_9->get_FollowingBall_7();
		if (L_10)
		{
			goto IL_008a;
		}
	}
	{
		// if (Tank.GetComponent<TankUI>() == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_Tank_8();
		NullCheck(L_11);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_12;
		L_12 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_11, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().ToggleFiringUI();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_Tank_8();
		NullCheck(L_14);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_15;
		L_15 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_14, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_15);
		MilitaryTankUI_ToggleFiringUI_mE1505E3A6BC5A085FD44F3325F7B334E09BCF0A1(L_15, /*hidden argument*/NULL);
		// }
		goto IL_008a;
	}

IL_007a:
	{
		// Tank.GetComponent<TankUI>().ToggleFiringUI();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_Tank_8();
		NullCheck(L_16);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_17;
		L_17 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_16, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		NullCheck(L_17);
		TankUI_ToggleFiringUI_mFD6945E3F50F375D4CC64584F921030418CFBAE2(L_17, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// Movable = true;
		__this->set_Movable_9((bool)1);
	}

IL_0091:
	{
		// if (Input.GetMouseButton(0) && Movable)
		bool L_18;
		L_18 = Input_GetMouseButton_mEF40689A9E574691E832255C430A9E626B005AF3(0, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_19 = __this->get_Movable_9();
		if (!L_19)
		{
			goto IL_00d9;
		}
	}
	{
		// Vector3 difference = CameraPoint - SceneCamera.ScreenToWorldPoint(Input.mousePosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = __this->get_CameraPoint_4();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_21 = __this->get_SceneCamera_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Input_get_mousePosition_mBCEAE9AEF8827512D6ADF03AB336DFA2C8A223E0(/*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_21, L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline(L_20, L_23, /*hidden argument*/NULL);
		V_0 = L_24;
		// SceneCamera.transform.position += difference;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_25 = __this->get_SceneCamera_7();
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_25, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = L_26;
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_27, L_30, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		// if (!Input.GetMouseButton(0))
		bool L_31;
		L_31 = Input_GetMouseButton_mEF40689A9E574691E832255C430A9E626B005AF3(0, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0148;
		}
	}
	{
		// SceneCamera.GetComponent<CameraMover>().Nudging = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_32 = __this->get_SceneCamera_7();
		NullCheck(L_32);
		CameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7 * L_33;
		L_33 = Component_GetComponent_TisCameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7_m625C01A7AB0D19238D3BD3081BD6FD38A7101207(L_32, /*hidden argument*/Component_GetComponent_TisCameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7_m625C01A7AB0D19238D3BD3081BD6FD38A7101207_RuntimeMethod_var);
		NullCheck(L_33);
		L_33->set_Nudging_5((bool)0);
		// if (!CameraTarget.GetComponent<BallChaser>().FollowingBall)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_CameraTarget_5();
		NullCheck(L_34);
		BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * L_35;
		L_35 = GameObject_GetComponent_TisBallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0_mC9399A70630B7AA20D42A414A2B1C47CD05336E0(L_34, /*hidden argument*/GameObject_GetComponent_TisBallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0_mC9399A70630B7AA20D42A414A2B1C47CD05336E0_RuntimeMethod_var);
		NullCheck(L_35);
		bool L_36 = L_35->get_FollowingBall_7();
		if (L_36)
		{
			goto IL_0141;
		}
	}
	{
		// if (Movable == true)
		bool L_37 = __this->get_Movable_9();
		if (!L_37)
		{
			goto IL_0141;
		}
	}
	{
		// if (Tank.GetComponent<TankUI>() == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_Tank_8();
		NullCheck(L_38);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_39;
		L_39 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_38, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_39, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0131;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().ToggleFiringUI();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_Tank_8();
		NullCheck(L_41);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_42;
		L_42 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_41, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_42);
		MilitaryTankUI_ToggleFiringUI_mE1505E3A6BC5A085FD44F3325F7B334E09BCF0A1(L_42, /*hidden argument*/NULL);
		// }
		goto IL_0141;
	}

IL_0131:
	{
		// Tank.GetComponent<TankUI>().ToggleFiringUI();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = __this->get_Tank_8();
		NullCheck(L_43);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_44;
		L_44 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_43, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		NullCheck(L_44);
		TankUI_ToggleFiringUI_mFD6945E3F50F375D4CC64584F921030418CFBAE2(L_44, /*hidden argument*/NULL);
	}

IL_0141:
	{
		// Movable = false;
		__this->set_Movable_9((bool)0);
	}

IL_0148:
	{
		// }
		return;
	}
}
// System.Void CameraNudge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraNudge__ctor_m8A462D8E2156ACAF364F78799BBE952DE151E93B (CameraNudge_tBAD456E428F966679846B40471521A4896503D20 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoinBehavior::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinBehavior_OnTriggerEnter_mC6681CED2C535484C07F9EAA5A1C2BB6C7123797 (CoinBehavior_t723253102B555C08A8E714AA65B03B96AC36524F * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Ball")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_2, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00c3;
		}
	}
	{
		// if (Typing == 0)//BallPlus
		int32_t L_4 = __this->get_Typing_5();
		if (L_4)
		{
			goto IL_006e;
		}
	}
	{
		// if (Tank.GetComponent<TankUI>())
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_Tank_4();
		NullCheck(L_5);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_6;
		L_6 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_5, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// Tank.GetComponent<TankUI>().GainBall(Amount);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_Tank_4();
		NullCheck(L_8);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_9;
		L_9 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_8, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		int32_t L_10 = __this->get_Amount_6();
		NullCheck(L_9);
		TankUI_GainBall_m599F0B37721538AA9CBB37382CF300AB6D257592(L_9, L_10, /*hidden argument*/NULL);
		// }
		goto IL_0062;
	}

IL_004c:
	{
		// Tank.GetComponent<MilitaryTankUI>().GainBall(Amount);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_Tank_4();
		NullCheck(L_11);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_12;
		L_12 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_11, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		int32_t L_13 = __this->get_Amount_6();
		NullCheck(L_12);
		MilitaryTankUI_GainBall_m9BFA0204BCF5041AFEB319FDC5E9BE45574C5F48(L_12, L_13, /*hidden argument*/NULL);
	}

IL_0062:
	{
		// this.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// if (Typing == TypeString.StrokeMinus)  //StrokeMinus
		int32_t L_15 = __this->get_Typing_5();
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_00c3;
		}
	}
	{
		// if (Tank.GetComponent<TankUI>())
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_Tank_4();
		NullCheck(L_16);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_17;
		L_17 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_16, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a1;
		}
	}
	{
		// Tank.GetComponent<TankUI>().LoseStrokes(Amount);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_Tank_4();
		NullCheck(L_19);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_20;
		L_20 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_19, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		int32_t L_21 = __this->get_Amount_6();
		NullCheck(L_20);
		TankUI_LoseStrokes_mBC399DA226D51819BED78C57A50CB708FEB8FFB5(L_20, L_21, /*hidden argument*/NULL);
		// }
		goto IL_00b7;
	}

IL_00a1:
	{
		// Tank.GetComponent<MilitaryTankUI>().LoseStrokes(Amount);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_Tank_4();
		NullCheck(L_22);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_23;
		L_23 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_22, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		int32_t L_24 = __this->get_Amount_6();
		NullCheck(L_23);
		MilitaryTankUI_LoseStrokes_m1669F95B813B8664D34C9B35BD11798A55985115(L_23, L_24, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		// this.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)0, /*hidden argument*/NULL);
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void CoinBehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinBehavior_Start_m65620F259400120F7FD9CA36E6675482C358784D (CoinBehavior_t723253102B555C08A8E714AA65B03B96AC36524F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Tank = GameObject.Find("Tank");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D, /*hidden argument*/NULL);
		__this->set_Tank_4(L_0);
		// }
		return;
	}
}
// System.Void CoinBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinBehavior__ctor_mAF4B10FA1E3A77413242C890DA592F2A1513CD9B (CoinBehavior_t723253102B555C08A8E714AA65B03B96AC36524F * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private int Amount = 2;
		__this->set_Amount_6(2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Conveyor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conveyor_Update_m81EFE3679AC1BAAB4791907B985AF8BC6819A170 (Conveyor_t8A51756DBAC36FC26AC25A1202A355165222F05D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (directional && Ball != null)
		bool L_0 = __this->get_directional_5();
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_Ball_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		// Ball.transform.position += new Vector3(1f, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_Ball_4();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = L_4;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0046:
	{
		// else if (!directional && Ball != null)
		bool L_9 = __this->get_directional_5();
		if (L_9)
		{
			goto IL_008b;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_Ball_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_008b;
		}
	}
	{
		// Ball.transform.position += new Vector3(-1f, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_Ball_4();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = L_13;
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_17, /*hidden argument*/NULL);
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void Conveyor::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conveyor_OnTriggerEnter_mB4FA393DF2595D154C87D36CA293F1B7214F6886 (Conveyor_t8A51756DBAC36FC26AC25A1202A355165222F05D * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Ball")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_2, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// Ball = other.gameObject;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___other0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		__this->set_Ball_4(L_5);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Conveyor::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conveyor_OnTriggerExit_mD44A06E7380E8CD17BCD5C6F0BFB19CDD290DC89 (Conveyor_t8A51756DBAC36FC26AC25A1202A355165222F05D * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Ball")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_2, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// Ball = null;
		__this->set_Ball_4((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Conveyor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conveyor__ctor_m4AB675FBA6773A07B38B8D5E36C087730F1D9010 (Conveyor_t8A51756DBAC36FC26AC25A1202A355165222F05D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CreditsScroll::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreditsScroll_Start_m36F6E9C8CEF9FCBCF59208892E79B2D3E86399A9 (CreditsScroll_t80B888C688D3294B00701B5BE2F04954C4097820 * __this, const RuntimeMethod* method)
{
	{
		// ylevel = this.gameObject.transform.position.y;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		__this->set_ylevel_4(L_3);
		// }
		return;
	}
}
// System.Void CreditsScroll::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreditsScroll_FixedUpdate_m20B0B7CE2FE298EFA7C78969FF6BA5715A6F8139 (CreditsScroll_t80B888C688D3294B00701B5BE2F04954C4097820 * __this, const RuntimeMethod* method)
{
	{
		// ylevel++;
		float L_0 = __this->get_ylevel_4();
		__this->set_ylevel_4(((float)il2cpp_codegen_add((float)L_0, (float)(1.0f))));
		// gameObject.transform.position = new Vector3(transform.position.x, ylevel, transform.position.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		float L_6 = __this->get_ylevel_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_5, L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CreditsScroll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreditsScroll__ctor_mD8C78570B5E37DE39AD7654B760A2CED55BCFB23 (CreditsScroll_t80B888C688D3294B00701B5BE2F04954C4097820 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CustomizedTankManager::ChangeColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomizedTankManager_ChangeColor_m3A6853D396DFEDFE8A52C42623BBE6B872F3F2C0 (CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A * __this, String_t* ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___color0;
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_1 = ___color0;
		bool L_2;
		L_2 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_3 = ___color0;
		bool L_4;
		L_4 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_3, _stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_5 = ___color0;
		bool L_6;
		L_6 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_5, _stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0046;
		}
	}
	{
		goto IL_0053;
	}

IL_002c:
	{
		// CurrentColor = Red;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_Red_5();
		__this->set_CurrentColor_7(L_7);
		// break;
		return;
	}

IL_0039:
	{
		// CurrentColor = Blue;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = __this->get_Blue_6();
		__this->set_CurrentColor_7(L_8);
		// break;
		return;
	}

IL_0046:
	{
		// CurrentColor = Green;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_Green_4();
		__this->set_CurrentColor_7(L_9);
		// break;
		return;
	}

IL_0053:
	{
		// CurrentColor = Green;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_Green_4();
		__this->set_CurrentColor_7(L_10);
		// }
		return;
	}
}
// System.Void CustomizedTankManager::ColorTank(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomizedTankManager_ColorTank_m87BEC55241205CDE6CF4F7C238625E077DC60B83 (CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tankbody0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TankBody = tankbody;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___tankbody0;
		__this->set_TankBody_8(L_0);
		// TankBody.GetComponent<Renderer>().material = CurrentColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_TankBody_8();
		NullCheck(L_1);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_2;
		L_2 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_1, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get_CurrentColor_7();
		NullCheck(L_2);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CustomizedTankManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomizedTankManager__ctor_m4D6D2FAC87475E064154BF52425BD4CCCD49B2B0 (CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Customizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Customizer_Start_mBAF79BFBC3149D847D5A018556A0DEB59A9D26D3 (Customizer_t900A35AA9BEDFCF1190CB9FB56693B1D76B71914 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Customizer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Customizer_Update_mC1BB61D9E8E9693369CDAFF1AC7BDF5DA54E3301 (Customizer_t900A35AA9BEDFCF1190CB9FB56693B1D76B71914 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Customizer::ActivateCustomizerUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Customizer_ActivateCustomizerUI_mB5D4E54B52E98048DC9DA8CC5BD76B5676F1B44B (Customizer_t900A35AA9BEDFCF1190CB9FB56693B1D76B71914 * __this, const RuntimeMethod* method)
{
	{
		// CustomizerUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_CustomizerUI_5();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// MainMenuUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_MainMenuUI_4();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Customizer::BackToMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Customizer_BackToMain_m3110DFC2FDC048834032E624CCE5EAE5EE7E3CF3 (Customizer_t900A35AA9BEDFCF1190CB9FB56693B1D76B71914 * __this, const RuntimeMethod* method)
{
	{
		// MainMenuUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_MainMenuUI_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// CustomizerUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_CustomizerUI_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Customizer::ChangeColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Customizer_ChangeColor_m4FB67CCBFCC235107E0BF21786389A23B10DD442 (Customizer_t900A35AA9BEDFCF1190CB9FB56693B1D76B71914 * __this, String_t* ___Color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A_m927FB09BF7CC9572009BC0FAE0E0329BFEFFFA11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___Color0;
		if (!L_0)
		{
			goto IL_00ae;
		}
	}
	{
		String_t* L_1 = ___Color0;
		bool L_2;
		L_2 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_3 = ___Color0;
		bool L_4;
		L_4 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_3, _stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_5 = ___Color0;
		bool L_6;
		L_6 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_5, _stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0084;
		}
	}
	{
		return;
	}

IL_002e:
	{
		// TankBody.GetComponent<Renderer>().material = Red;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_TankBody_9();
		NullCheck(L_7);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_8;
		L_8 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_7, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_Red_7();
		NullCheck(L_8);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_8, L_9, /*hidden argument*/NULL);
		// HeadManager.Instance.GetComponent<CustomizedTankManager>().ChangeColor("red");
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_10;
		L_10 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_10);
		CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A * L_11;
		L_11 = Component_GetComponent_TisCustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A_m927FB09BF7CC9572009BC0FAE0E0329BFEFFFA11(L_10, /*hidden argument*/Component_GetComponent_TisCustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A_m927FB09BF7CC9572009BC0FAE0E0329BFEFFFA11_RuntimeMethod_var);
		NullCheck(L_11);
		CustomizedTankManager_ChangeColor_m3A6853D396DFEDFE8A52C42623BBE6B872F3F2C0(L_11, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0059:
	{
		// TankBody.GetComponent<Renderer>().material = Blue;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_TankBody_9();
		NullCheck(L_12);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_13;
		L_13 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_12, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_Blue_6();
		NullCheck(L_13);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_13, L_14, /*hidden argument*/NULL);
		// HeadManager.Instance.GetComponent<CustomizedTankManager>().ChangeColor("blue");
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_15;
		L_15 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_15);
		CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A * L_16;
		L_16 = Component_GetComponent_TisCustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A_m927FB09BF7CC9572009BC0FAE0E0329BFEFFFA11(L_15, /*hidden argument*/Component_GetComponent_TisCustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A_m927FB09BF7CC9572009BC0FAE0E0329BFEFFFA11_RuntimeMethod_var);
		NullCheck(L_16);
		CustomizedTankManager_ChangeColor_m3A6853D396DFEDFE8A52C42623BBE6B872F3F2C0(L_16, _stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0084:
	{
		// TankBody.GetComponent<Renderer>().material = Green;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_TankBody_9();
		NullCheck(L_17);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18;
		L_18 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_17, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_Green_8();
		NullCheck(L_18);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_18, L_19, /*hidden argument*/NULL);
		// HeadManager.Instance.GetComponent<CustomizedTankManager>().ChangeColor("green");
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_20;
		L_20 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_20);
		CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A * L_21;
		L_21 = Component_GetComponent_TisCustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A_m927FB09BF7CC9572009BC0FAE0E0329BFEFFFA11(L_20, /*hidden argument*/Component_GetComponent_TisCustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A_m927FB09BF7CC9572009BC0FAE0E0329BFEFFFA11_RuntimeMethod_var);
		NullCheck(L_21);
		CustomizedTankManager_ChangeColor_m3A6853D396DFEDFE8A52C42623BBE6B872F3F2C0(L_21, _stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void Customizer::LevelSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Customizer_LevelSelect_m1701009C1A329A2850341B74F6AD0D3FADF16CC6 (Customizer_t900A35AA9BEDFCF1190CB9FB56693B1D76B71914 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(2);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mF4561CC9E8B5EEB0FB813083642A09AA8D60CCB1(2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Customizer::CreditsButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Customizer_CreditsButton_m91B31FB3270157EB148D8E32F5EE2F9A71DF3E26 (Customizer_t900A35AA9BEDFCF1190CB9FB56693B1D76B71914 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(12);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mF4561CC9E8B5EEB0FB813083642A09AA8D60CCB1(((int32_t)12), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Customizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Customizer__ctor_m86CDD261C9ECC286DA11192707346A62360111ED (Customizer_t900A35AA9BEDFCF1190CB9FB56693B1D76B71914 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Elevator::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_FixedUpdate_m426B94C88AA2464B12761CD543110D189D91B8F3 (Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (MovingUp == true || MovingDown == true)
		bool L_0 = __this->get_MovingUp_7();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->get_MovingDown_8();
		if (!L_1)
		{
			goto IL_0181;
		}
	}

IL_0013:
	{
		// if (MovingUp && Floor == 1)
		bool L_2 = __this->get_MovingUp_7();
		if (!L_2)
		{
			goto IL_0181;
		}
	}
	{
		int32_t L_3 = __this->get_Floor_4();
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0181;
		}
	}
	{
		// float u = (Time.time - timeStart) / timeDuration;
		float L_4;
		L_4 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		float L_5 = __this->get_timeStart_17();
		float L_6 = __this->get_timeDuration_18();
		V_0 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_5))/(float)L_6));
		// if (u >= 1)
		float L_7 = V_0;
		if ((!(((float)L_7) >= ((float)(1.0f)))))
		{
			goto IL_00fb;
		}
	}
	{
		// u = 1;
		V_0 = (1.0f);
		// if (Tank.GetComponent<MilitaryTankUI>()== null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_Tank_13();
		NullCheck(L_8);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_9;
		L_9 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_8, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		// Tank.GetComponent<TankUI>().ToggleFiringUI();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_Tank_13();
		NullCheck(L_11);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_12;
		L_12 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_11, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		NullCheck(L_12);
		TankUI_ToggleFiringUI_mFD6945E3F50F375D4CC64584F921030418CFBAE2(L_12, /*hidden argument*/NULL);
		// Tank.GetComponent<TankUI>().ToggleFiringUI();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_Tank_13();
		NullCheck(L_13);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_14;
		L_14 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_13, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		NullCheck(L_14);
		TankUI_ToggleFiringUI_mFD6945E3F50F375D4CC64584F921030418CFBAE2(L_14, /*hidden argument*/NULL);
		// }
		goto IL_00a4;
	}

IL_0084:
	{
		// Tank.GetComponent<MilitaryTankUI>().ToggleFiringUI();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_Tank_13();
		NullCheck(L_15);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_16;
		L_16 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_15, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_16);
		MilitaryTankUI_ToggleFiringUI_mE1505E3A6BC5A085FD44F3325F7B334E09BCF0A1(L_16, /*hidden argument*/NULL);
		// Tank.GetComponent<MilitaryTankUI>().ToggleFiringUI();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_Tank_13();
		NullCheck(L_17);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_18;
		L_18 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_17, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_18);
		MilitaryTankUI_ToggleFiringUI_mE1505E3A6BC5A085FD44F3325F7B334E09BCF0A1(L_18, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		// MovingUp = false;
		__this->set_MovingUp_7((bool)0);
		// Floor = 2;
		__this->set_Floor_4(2);
		// Door.transform.position += new Vector3(0f, 0f, 1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_Door_12();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = L_20;
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_24, /*hidden argument*/NULL);
		// Light.GetComponent<Renderer>().material.color = Color.green;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_Light_16();
		NullCheck(L_25);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_26;
		L_26 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_25, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		NullCheck(L_26);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27;
		L_27 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_26, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
		L_28 = Color_get_green_m787119A4B2078DAB30985625CA7B3B0FF6099FF5(/*hidden argument*/NULL);
		NullCheck(L_27);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_27, L_28, /*hidden argument*/NULL);
	}

IL_00fb:
	{
		// p01 = (1 - u) * p0 + u * p1;
		float L_29 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = __this->get_p0_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_29)), L_30, /*hidden argument*/NULL);
		float L_32 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = __this->get_p1_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(L_32, L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_31, L_34, /*hidden argument*/NULL);
		__this->set_p01_21(L_35);
		// t01 = (1 - u) * t0 + u * t1;
		float L_36 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = __this->get_t0_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_36)), L_37, /*hidden argument*/NULL);
		float L_39 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = __this->get_t1_23();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline(L_39, L_40, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_38, L_41, /*hidden argument*/NULL);
		__this->set_t01_24(L_42);
		// ElevatorObject.transform.position = p01;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = __this->get_ElevatorObject_6();
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_43, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = __this->get_p01_21();
		NullCheck(L_44);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_44, L_45, /*hidden argument*/NULL);
		// if (TankOn)
		bool L_46 = __this->get_TankOn_14();
		if (!L_46)
		{
			goto IL_0181;
		}
	}
	{
		// Tank.transform.position = t01;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = __this->get_Tank_13();
		NullCheck(L_47);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_47, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = __this->get_t01_24();
		NullCheck(L_48);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_48, L_49, /*hidden argument*/NULL);
	}

IL_0181:
	{
		// }
		return;
	}
}
// System.Void Elevator::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_OnTriggerEnter_mB609BF8C0EE263136A7D6807F8370A00BA13175B (Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Ball" && Interactable)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_2, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0065;
		}
	}
	{
		bool L_4 = __this->get_Interactable_15();
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		// ElevatorMove(UP, Floor);
		bool L_5 = __this->get_UP_5();
		int32_t L_6 = __this->get_Floor_4();
		Elevator_ElevatorMove_m510057B0A0F1C49E8E4B6C7DD7E8D514EC800FC7(__this, L_5, L_6, /*hidden argument*/NULL);
		// if (Tank.GetComponent<MilitaryTankUI>() == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_Tank_13();
		NullCheck(L_7);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_8;
		L_8 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_7, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		// Tank.GetComponent<TankUI>().NoEffect();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_Tank_13();
		NullCheck(L_10);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_11;
		L_11 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_10, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		NullCheck(L_11);
		TankUI_NoEffect_m3426B6CDB870E7C4A7A302C63D844E35DA8EBD44(L_11, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0055:
	{
		// Tank.GetComponent<MilitaryTankUI>().NoEffect();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_Tank_13();
		NullCheck(L_12);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_13;
		L_13 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_12, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_13);
		MilitaryTankUI_NoEffect_m44C7FF19E96E235397E5B4B8994326D4D8986EAF(L_13, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Elevator::ElevatorMove(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_ElevatorMove_m510057B0A0F1C49E8E4B6C7DD7E8D514EC800FC7 (Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E * __this, bool ___Direction0, int32_t ___CurrentFloor1, const RuntimeMethod* method)
{
	{
		// if (CurrentFloor == 1 && Direction == true)
		int32_t L_0 = ___CurrentFloor1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000d;
		}
	}
	{
		bool L_1 = ___Direction0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// MoveElevatorUp();
		Elevator_MoveElevatorUp_mAE229551CD6AF0C0C8EFEE4F221CA1D96FEE96A9(__this, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Elevator::MoveElevatorUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_MoveElevatorUp_mAE229551CD6AF0C0C8EFEE4F221CA1D96FEE96A9 (Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MovingUp = true;
		__this->set_MovingUp_7((bool)1);
		// p0 = new Vector3(ElevatorObject.transform.position.x, Floor1Height, ElevatorObject.transform.position.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_ElevatorObject_6();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		int32_t L_4 = __this->get_Floor1Height_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_ElevatorObject_6();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_3, ((float)((float)L_4)), L_8, /*hidden argument*/NULL);
		__this->set_p0_19(L_9);
		// p1 = new Vector3(ElevatorObject.transform.position.x, Floor2Height, ElevatorObject.transform.position.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_ElevatorObject_6();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		int32_t L_14 = __this->get_Floor2Height_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_ElevatorObject_6();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), L_13, ((float)((float)L_14)), L_18, /*hidden argument*/NULL);
		__this->set_p1_20(L_19);
		// t0 = Tank.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_Tank_13();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		__this->set_t0_22(L_22);
		// t1 = Tank.transform.position + new Vector3(0f, 30f, 0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_Tank_13();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), (0.0f), (30.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_25, L_26, /*hidden argument*/NULL);
		__this->set_t1_23(L_27);
		// timeStart = Time.time;
		float L_28;
		L_28 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		__this->set_timeStart_17(L_28);
		// Door.transform.position += new Vector3(0f, 0f, -1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_Door_12();
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = L_30;
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_33), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_31, L_34, /*hidden argument*/NULL);
		// Light.GetComponent<Renderer>().material.color = Color.red;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_Light_16();
		NullCheck(L_35);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_36;
		L_36 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_35, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		NullCheck(L_36);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37;
		L_37 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_36, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38;
		L_38 = Color_get_red_m6364CCD309A4A64D49115167E97154D40CF8F140(/*hidden argument*/NULL);
		NullCheck(L_37);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_37, L_38, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Elevator::TankEntered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_TankEntered_m2EB0224CD5CBF18628A88A9C327265BE3695EB4E (Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E * __this, const RuntimeMethod* method)
{
	{
		// TankOn = !TankOn;
		bool L_0 = __this->get_TankOn_14();
		__this->set_TankOn_14((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void Elevator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator__ctor_m82E673E7F2D96E3B0A040DD5FC7B4E1AE6AF37C7 (Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E * __this, const RuntimeMethod* method)
{
	{
		// private int Floor1Height = 3;
		__this->set_Floor1Height_9(3);
		// private int Floor2Height = 33;
		__this->set_Floor2Height_10(((int32_t)33));
		// private float timeDuration = 5.0f;
		__this->set_timeDuration_18((5.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExplosionDissipate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplosionDissipate_Start_m4731240602775D5208D84C4206B909F1AC7545D3 (ExplosionDissipate_t54631AF601297033AA8D43E0069B19E94F4A5472 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(DestructionCountdown());
		RuntimeObject* L_0;
		L_0 = ExplosionDissipate_DestructionCountdown_m62F445FC12E31352FA35C03CD4596C2B2502DFA0(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ExplosionDissipate::DestructionCountdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExplosionDissipate_DestructionCountdown_m62F445FC12E31352FA35C03CD4596C2B2502DFA0 (ExplosionDissipate_t54631AF601297033AA8D43E0069B19E94F4A5472 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185 * L_0 = (U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185 *)il2cpp_codegen_object_new(U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185_il2cpp_TypeInfo_var);
		U3CDestructionCountdownU3Ed__1__ctor_m11E2BB8D085B0EFCFA1F7BEF9A6F2BD0D18E4328(L_0, 0, /*hidden argument*/NULL);
		U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void ExplosionDissipate::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplosionDissipate_OnTriggerEnter_mFFA58FE587994946AEC72F808B5EEC77ED3F1281 (ExplosionDissipate_t54631AF601297033AA8D43E0069B19E94F4A5472 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE79C7DF47D031C1FC396033A357222754FA04713);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF7A908D7C7540D46C3BE678108BD0E90CB40F36);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Destroyable")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_2, _stringLiteralEF7A908D7C7540D46C3BE678108BD0E90CB40F36, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Debug.Log("Hit Destroyable");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteralE79C7DF47D031C1FC396033A357222754FA04713, /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___other0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void ExplosionDissipate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplosionDissipate__ctor_m06865924AB62B6078487BAD26314BA0CA343FE85 (ExplosionDissipate_t54631AF601297033AA8D43E0069B19E94F4A5472 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FanPush::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FanPush_OnTriggerEnter_mDB715B29C1DD44CA23DCC06CD5C122BFFD435BDC (FanPush_tA951F229A361BE30AB64EFCCFD008A3CD25DF2EC * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Ball")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_2, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		// Ball = other.gameObject;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___other0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		__this->set_Ball_4(L_5);
		// Ball.GetComponent<Rigidbody>().AddForce(transform.up * force, ForceMode.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_Ball_4();
		NullCheck(L_6);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_7;
		L_7 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_6, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_force_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_7, L_11, 1, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void FanPush::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FanPush__ctor_mED58B7440EAA02013974E5F02386427620F23AFB (FanPush_tA951F229A361BE30AB64EFCCFD008A3CD25DF2EC * __this, const RuntimeMethod* method)
{
	{
		// private float force = 25;
		__this->set_force_5((25.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GolfHole::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolfHole_Start_m368DEFCCF7B726D170894F355B45E0778985F9F9 (GolfHole_t2D3C773014FC80E0CD3EED1CFE4A97F353816827 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Tank = GameObject.Find("Tank");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D, /*hidden argument*/NULL);
		__this->set_Tank_5(L_0);
		// }
		return;
	}
}
// System.Void GolfHole::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolfHole_OnTriggerEnter_m5593DA9C75D75C1B4973F9488758106C070DFFA7 (GolfHole_t2D3C773014FC80E0CD3EED1CFE4A97F353816827 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Ball")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_2, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		// Ball = other.gameObject;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___other0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		__this->set_Ball_4(L_5);
		// if (Tank.GetComponent<TankUI>() == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_Tank_5();
		NullCheck(L_6);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_7;
		L_7 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_6, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		// Tank.GetComponent<MilitaryTankUI>().LevelFinished();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_Tank_5();
		NullCheck(L_9);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_10;
		L_10 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_9, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_10);
		MilitaryTankUI_LevelFinished_mC9810AA210B76D94FF23B7E06036E02161DEF32F(L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0047:
	{
		// Tank.GetComponent<TankUI>().LevelFinished();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_Tank_5();
		NullCheck(L_11);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_12;
		L_12 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_11, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		NullCheck(L_12);
		TankUI_LevelFinished_m9E54DAD6C2443EA0FA9407041B29182DAD4260F0(L_12, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void GolfHole::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolfHole__ctor_mADF0C580DD3DBDE7D5D8A66DE7AE0790027AB2E2 (GolfHole_t2D3C773014FC80E0CD3EED1CFE4A97F353816827 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// HeadManager HeadManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static HeadManager Instance { get; private set; }
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_0 = ((HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0_StaticFields*)il2cpp_codegen_static_fields_for(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void HeadManager::set_Instance(HeadManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadManager_set_Instance_m388E9B4DA300C04B56B4C4CA168B52DCE406F5D1 (HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static HeadManager Instance { get; private set; }
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_0 = ___value0;
		((HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0_StaticFields*)il2cpp_codegen_static_fields_for(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void HeadManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadManager_Awake_m6F2A625FEC2D9AD38FDA57E438FBACC33D4CC9E6 (HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral839C18A0BEC63009A14890191EE768A6A9613660);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance != null && Instance != this)
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_0;
		L_0 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_2;
		L_2 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_4, /*hidden argument*/NULL);
		// Debug.Log("Clone Destoryed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral839C18A0BEC63009A14890191EE768A6A9613660, /*hidden argument*/NULL);
		// }
		goto IL_0037;
	}

IL_0031:
	{
		// Instance = this;
		HeadManager_set_Instance_m388E9B4DA300C04B56B4C4CA168B52DCE406F5D1_inline(__this, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// DontDestroyOnLoad(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m8E3B1C552851D48BDC47F510C07714610923319B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HeadManager::AddScore(LevelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadManager_AddScore_m244881D47537ED7308B231B3C586947DCA1E5114 (HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * __this, LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * ___level0, const RuntimeMethod* method)
{
	{
		// AddHighscores(level);
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_0 = ___level0;
		HeadManager_AddHighscores_m60CB252FD9EB4B540CAC783359D8A2C4BE97EE13(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HeadManager::AddHighscores(LevelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadManager_AddHighscores_m60CB252FD9EB4B540CAC783359D8A2C4BE97EE13 (HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * __this, LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42331E0BE5113116CC9FC93123A5A17A0B269776);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (level.LevelID == 0)
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_0 = ___level0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_LevelID_6();
		if (L_1)
		{
			goto IL_0044;
		}
	}
	{
		// Level1HiScore = level.HighScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_2 = ___level0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_HighScore_8();
		__this->set_Level1HiScore_5(L_3);
		// Level1Star1 = level.StarScore1;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_4 = ___level0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_StarScore1_12();
		__this->set_Level1Star1_15(L_5);
		// Level1Star2 = level.StarScore2;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_6 = ___level0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_StarScore2_13();
		__this->set_Level1Star2_16(L_7);
		// Level1Star3 = level.StarScore3;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_8 = ___level0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_StarScore3_14();
		__this->set_Level1Star3_17(L_9);
		// Level1Star4 = level.SuperStarScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_10 = ___level0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_SuperStarScore_15();
		__this->set_Level1Star4_18(L_11);
	}

IL_0044:
	{
		// if (level.LevelID == 1)
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_12 = ___level0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_LevelID_6();
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0089;
		}
	}
	{
		// Level2HiScore = level.HighScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_14 = ___level0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_HighScore_8();
		__this->set_Level2HiScore_6(L_15);
		// Level2Star1 = level.StarScore1;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_16 = ___level0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_StarScore1_12();
		__this->set_Level2Star1_19(L_17);
		// Level2Star2 = level.StarScore2;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_18 = ___level0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_StarScore2_13();
		__this->set_Level2Star2_20(L_19);
		// Level2Star3 = level.StarScore3;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_20 = ___level0;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_StarScore3_14();
		__this->set_Level2Star3_21(L_21);
		// Level2Star4 = level.SuperStarScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_22 = ___level0;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_SuperStarScore_15();
		__this->set_Level2Star4_22(L_23);
	}

IL_0089:
	{
		// if (level.LevelID == 2)
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_24 = ___level0;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_LevelID_6();
		if ((!(((uint32_t)L_25) == ((uint32_t)2))))
		{
			goto IL_00ce;
		}
	}
	{
		// Level3HiScore = level.HighScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_26 = ___level0;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_HighScore_8();
		__this->set_Level3HiScore_7(L_27);
		// Level3Star1 = level.StarScore1;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_28 = ___level0;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_StarScore1_12();
		__this->set_Level3Star1_23(L_29);
		// Level3Star2 = level.StarScore2;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_30 = ___level0;
		NullCheck(L_30);
		int32_t L_31 = L_30->get_StarScore2_13();
		__this->set_Level3Star2_24(L_31);
		// Level3Star3 = level.StarScore3;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_32 = ___level0;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_StarScore3_14();
		__this->set_Level3Star3_25(L_33);
		// Level3Star4 = level.SuperStarScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_34 = ___level0;
		NullCheck(L_34);
		int32_t L_35 = L_34->get_SuperStarScore_15();
		__this->set_Level3Star4_26(L_35);
	}

IL_00ce:
	{
		// if (level.LevelID == 3)
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_36 = ___level0;
		NullCheck(L_36);
		int32_t L_37 = L_36->get_LevelID_6();
		if ((!(((uint32_t)L_37) == ((uint32_t)3))))
		{
			goto IL_0113;
		}
	}
	{
		// Level4HiScore = level.HighScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_38 = ___level0;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_HighScore_8();
		__this->set_Level4HiScore_8(L_39);
		// Level4Star1 = level.StarScore1;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_40 = ___level0;
		NullCheck(L_40);
		int32_t L_41 = L_40->get_StarScore1_12();
		__this->set_Level4Star1_27(L_41);
		// Level4Star2 = level.StarScore2;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_42 = ___level0;
		NullCheck(L_42);
		int32_t L_43 = L_42->get_StarScore2_13();
		__this->set_Level4Star2_28(L_43);
		// Level4Star3 = level.StarScore3;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_44 = ___level0;
		NullCheck(L_44);
		int32_t L_45 = L_44->get_StarScore3_14();
		__this->set_Level4Star3_29(L_45);
		// Level4Star4 = level.SuperStarScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_46 = ___level0;
		NullCheck(L_46);
		int32_t L_47 = L_46->get_SuperStarScore_15();
		__this->set_Level4Star4_30(L_47);
	}

IL_0113:
	{
		// if (level.LevelID == 111)
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_48 = ___level0;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_LevelID_6();
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)111)))))
		{
			goto IL_0159;
		}
	}
	{
		// BLevel1HiScore = level.HighScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_50 = ___level0;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_HighScore_8();
		__this->set_BLevel1HiScore_9(L_51);
		// BLevel1Star1 = level.StarScore1;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_52 = ___level0;
		NullCheck(L_52);
		int32_t L_53 = L_52->get_StarScore1_12();
		__this->set_BLevel1Star1_31(L_53);
		// BLevel1Star2 = level.StarScore2;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_54 = ___level0;
		NullCheck(L_54);
		int32_t L_55 = L_54->get_StarScore2_13();
		__this->set_BLevel1Star2_32(L_55);
		// BLevel1Star3 = level.StarScore3;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_56 = ___level0;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_StarScore3_14();
		__this->set_BLevel1Star3_33(L_57);
		// BLevel1Star4 = level.SuperStarScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_58 = ___level0;
		NullCheck(L_58);
		int32_t L_59 = L_58->get_SuperStarScore_15();
		__this->set_BLevel1Star4_34(L_59);
	}

IL_0159:
	{
		// if (level.LevelID == 222)
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_60 = ___level0;
		NullCheck(L_60);
		int32_t L_61 = L_60->get_LevelID_6();
		if ((!(((uint32_t)L_61) == ((uint32_t)((int32_t)222)))))
		{
			goto IL_01a2;
		}
	}
	{
		// BLevel2HiScore = level.HighScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_62 = ___level0;
		NullCheck(L_62);
		int32_t L_63 = L_62->get_HighScore_8();
		__this->set_BLevel2HiScore_10(L_63);
		// BLevel2Star1 = level.StarScore1;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_64 = ___level0;
		NullCheck(L_64);
		int32_t L_65 = L_64->get_StarScore1_12();
		__this->set_BLevel2Star1_35(L_65);
		// BLevel2Star2 = level.StarScore2;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_66 = ___level0;
		NullCheck(L_66);
		int32_t L_67 = L_66->get_StarScore2_13();
		__this->set_BLevel2Star2_36(L_67);
		// BLevel2Star3 = level.StarScore3;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_68 = ___level0;
		NullCheck(L_68);
		int32_t L_69 = L_68->get_StarScore3_14();
		__this->set_BLevel2Star3_37(L_69);
		// BLevel2Star4 = level.SuperStarScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_70 = ___level0;
		NullCheck(L_70);
		int32_t L_71 = L_70->get_SuperStarScore_15();
		__this->set_BLevel2Star4_38(L_71);
	}

IL_01a2:
	{
		// if (level.LevelID == 333)
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_72 = ___level0;
		NullCheck(L_72);
		int32_t L_73 = L_72->get_LevelID_6();
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)333)))))
		{
			goto IL_01eb;
		}
	}
	{
		// BLevel3HiScore = level.HighScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_74 = ___level0;
		NullCheck(L_74);
		int32_t L_75 = L_74->get_HighScore_8();
		__this->set_BLevel3HiScore_11(L_75);
		// BLevel3Star1 = level.StarScore1;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_76 = ___level0;
		NullCheck(L_76);
		int32_t L_77 = L_76->get_StarScore1_12();
		__this->set_BLevel3Star1_39(L_77);
		// BLevel3Star2 = level.StarScore2;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_78 = ___level0;
		NullCheck(L_78);
		int32_t L_79 = L_78->get_StarScore2_13();
		__this->set_BLevel3Star2_40(L_79);
		// BLevel3Star3 = level.StarScore3;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_80 = ___level0;
		NullCheck(L_80);
		int32_t L_81 = L_80->get_StarScore3_14();
		__this->set_BLevel3Star3_41(L_81);
		// BLevel3Star4 = level.SuperStarScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_82 = ___level0;
		NullCheck(L_82);
		int32_t L_83 = L_82->get_SuperStarScore_15();
		__this->set_BLevel3Star4_42(L_83);
	}

IL_01eb:
	{
		// if (level.LevelID == 444)
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_84 = ___level0;
		NullCheck(L_84);
		int32_t L_85 = L_84->get_LevelID_6();
		if ((!(((uint32_t)L_85) == ((uint32_t)((int32_t)444)))))
		{
			goto IL_0234;
		}
	}
	{
		// BLevel4HiScore = level.HighScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_86 = ___level0;
		NullCheck(L_86);
		int32_t L_87 = L_86->get_HighScore_8();
		__this->set_BLevel4HiScore_12(L_87);
		// BLevel4Star1 = level.StarScore1;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_88 = ___level0;
		NullCheck(L_88);
		int32_t L_89 = L_88->get_StarScore1_12();
		__this->set_BLevel4Star1_43(L_89);
		// BLevel4Star2 = level.StarScore2;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_90 = ___level0;
		NullCheck(L_90);
		int32_t L_91 = L_90->get_StarScore2_13();
		__this->set_BLevel4Star2_44(L_91);
		// BLevel4Star3 = level.StarScore3;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_92 = ___level0;
		NullCheck(L_92);
		int32_t L_93 = L_92->get_StarScore3_14();
		__this->set_BLevel4Star3_45(L_93);
		// BLevel4Star4 = level.SuperStarScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_94 = ___level0;
		NullCheck(L_94);
		int32_t L_95 = L_94->get_SuperStarScore_15();
		__this->set_BLevel4Star4_46(L_95);
	}

IL_0234:
	{
		// if (level.LevelID == 555)
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_96 = ___level0;
		NullCheck(L_96);
		int32_t L_97 = L_96->get_LevelID_6();
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)555)))))
		{
			goto IL_027d;
		}
	}
	{
		// BLevel5HiScore = level.HighScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_98 = ___level0;
		NullCheck(L_98);
		int32_t L_99 = L_98->get_HighScore_8();
		__this->set_BLevel5HiScore_13(L_99);
		// BLevel5Star1 = level.StarScore1;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_100 = ___level0;
		NullCheck(L_100);
		int32_t L_101 = L_100->get_StarScore1_12();
		__this->set_BLevel5Star1_47(L_101);
		// BLevel5Star2 = level.StarScore2;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_102 = ___level0;
		NullCheck(L_102);
		int32_t L_103 = L_102->get_StarScore2_13();
		__this->set_BLevel5Star2_48(L_103);
		// BLevel5Star3 = level.StarScore3;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_104 = ___level0;
		NullCheck(L_104);
		int32_t L_105 = L_104->get_StarScore3_14();
		__this->set_BLevel5Star3_49(L_105);
		// BLevel5Star4 = level.SuperStarScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_106 = ___level0;
		NullCheck(L_106);
		int32_t L_107 = L_106->get_SuperStarScore_15();
		__this->set_BLevel5Star4_50(L_107);
	}

IL_027d:
	{
		// if (level.LevelID == 666)
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_108 = ___level0;
		NullCheck(L_108);
		int32_t L_109 = L_108->get_LevelID_6();
		if ((!(((uint32_t)L_109) == ((uint32_t)((int32_t)666)))))
		{
			goto IL_02c6;
		}
	}
	{
		// BLevel6HiScore = level.HighScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_110 = ___level0;
		NullCheck(L_110);
		int32_t L_111 = L_110->get_HighScore_8();
		__this->set_BLevel6HiScore_14(L_111);
		// BLevel6Star1 = level.StarScore1;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_112 = ___level0;
		NullCheck(L_112);
		int32_t L_113 = L_112->get_StarScore1_12();
		__this->set_BLevel6Star1_51(L_113);
		// BLevel6Star2 = level.StarScore2;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_114 = ___level0;
		NullCheck(L_114);
		int32_t L_115 = L_114->get_StarScore2_13();
		__this->set_BLevel6Star2_52(L_115);
		// BLevel6Star3 = level.StarScore3;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_116 = ___level0;
		NullCheck(L_116);
		int32_t L_117 = L_116->get_StarScore3_14();
		__this->set_BLevel6Star3_53(L_117);
		// BLevel6Star4 = level.SuperStarScore;
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_118 = ___level0;
		NullCheck(L_118);
		int32_t L_119 = L_118->get_SuperStarScore_15();
		__this->set_BLevel6Star4_54(L_119);
	}

IL_02c6:
	{
		// Debug.Log("Reported In");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral42331E0BE5113116CC9FC93123A5A17A0B269776, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HeadManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadManager__ctor_m90ED61A35B20E9A6C8B280B3CC0D2F019A4E0727 (HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelData::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelData_Start_m179C610D5D0A22950B2B7553A21270E21BE3CCBF (LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LevelData::LevelFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelData_LevelFinished_m2C4517B23A7CB13D09CF75142DB21E7FD20C2782 (LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8D69953E1EC34DB70256CECB70604C59BCE820);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2209FE8C05DED064D3803A9A7B3C88406726B1F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral490A3D896B64BA8F7AC1084B6336DC665EE1E3EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDDF6581C5186203CC789B1C79B8AF98B0D19F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E49491A9DA0CD647B730DEC544E4BB39EC92214);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral714763C257BF1E75FAA1B7530BD502E025037B9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85323CB03618186B17428D8A0E612ADF774ABC3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A6AE81AF5DB57C61F4BA8BB6F35E91FC3627883);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF74D191D01BEC20EB701B3871DDEC4E6FD8E1D7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7C6AB4490BFC58BDF6C531AAA10E7E2DE8FA42E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE9CF4F5F1568CDA638D37DDEBDFBB20FAAAF055);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// ScoringUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_ScoringUI_20();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// if (shots == par)
		int32_t L_1 = __this->get_shots_5();
		int32_t L_2 = __this->get_par_4();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0048;
		}
	}
	{
		// score = shots * 1000;
		int32_t L_3 = __this->get_shots_5();
		__this->set_score_9(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)1000))));
		// ScoreName = "Par";
		__this->set_ScoreName_24(_stringLiteral1D8D69953E1EC34DB70256CECB70604C59BCE820);
		// ScoreNameText.text = ScoreName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_ScoreNameText_22();
		String_t* L_5 = __this->get_ScoreName_24();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
	}

IL_0048:
	{
		// if (shots > par)
		int32_t L_6 = __this->get_shots_5();
		int32_t L_7 = __this->get_par_4();
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_010c;
		}
	}
	{
		// punishment = shots - par;
		int32_t L_8 = __this->get_shots_5();
		int32_t L_9 = __this->get_par_4();
		__this->set_punishment_10(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)));
		// score = par * 1000 - punishment * 500;
		int32_t L_10 = __this->get_par_4();
		int32_t L_11 = __this->get_punishment_10();
		__this->set_score_9(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)((int32_t)1000))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)((int32_t)500))))));
		// switch (punishment)
		int32_t L_12 = __this->get_punishment_10();
		V_0 = L_12;
		int32_t L_13 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00ac;
			}
			case 1:
			{
				goto IL_00b9;
			}
			case 2:
			{
				goto IL_00c6;
			}
			case 3:
			{
				goto IL_00d3;
			}
		}
	}
	{
		goto IL_00e0;
	}

IL_00ac:
	{
		// ScoreName = "Bogey";
		__this->set_ScoreName_24(_stringLiteral85323CB03618186B17428D8A0E612ADF774ABC3A);
		// break;
		goto IL_00fb;
	}

IL_00b9:
	{
		// ScoreName = "Double Bogey";
		__this->set_ScoreName_24(_stringLiteral5EDDF6581C5186203CC789B1C79B8AF98B0D19F4);
		// break;
		goto IL_00fb;
	}

IL_00c6:
	{
		// ScoreName = "Triple Bogey";
		__this->set_ScoreName_24(_stringLiteral714763C257BF1E75FAA1B7530BD502E025037B9E);
		// break;
		goto IL_00fb;
	}

IL_00d3:
	{
		// ScoreName = "Quadruple Bogey";
		__this->set_ScoreName_24(_stringLiteral2209FE8C05DED064D3803A9A7B3C88406726B1F8);
		// break;
		goto IL_00fb;
	}

IL_00e0:
	{
		// ScoreName = (punishment + " Over Par");
		int32_t* L_14 = __this->get_address_of_punishment_10();
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_14, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(L_15, _stringLiteralF7C6AB4490BFC58BDF6C531AAA10E7E2DE8FA42E, /*hidden argument*/NULL);
		__this->set_ScoreName_24(L_16);
	}

IL_00fb:
	{
		// ScoreNameText.text = ScoreName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = __this->get_ScoreNameText_22();
		String_t* L_18 = __this->get_ScoreName_24();
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_18);
	}

IL_010c:
	{
		// if (shots < par)
		int32_t L_19 = __this->get_shots_5();
		int32_t L_20 = __this->get_par_4();
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_01d7;
		}
	}
	{
		// reward = par - shots;
		int32_t L_21 = __this->get_par_4();
		int32_t L_22 = __this->get_shots_5();
		__this->set_reward_11(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22)));
		// int ScoreFinder = shots - par;
		int32_t L_23 = __this->get_shots_5();
		int32_t L_24 = __this->get_par_4();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24));
		// score = par * 1000 + reward * 1000;
		int32_t L_25 = __this->get_par_4();
		int32_t L_26 = __this->get_reward_11();
		__this->set_score_9(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)((int32_t)1000))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)((int32_t)1000))))));
		int32_t L_27 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)((int32_t)-4))))
		{
			case 0:
			{
				goto IL_019f;
			}
			case 1:
			{
				goto IL_0192;
			}
			case 2:
			{
				goto IL_0185;
			}
			case 3:
			{
				goto IL_0178;
			}
		}
	}
	{
		goto IL_01ac;
	}

IL_0178:
	{
		// ScoreName = "Birdie";
		__this->set_ScoreName_24(_stringLiteral6E49491A9DA0CD647B730DEC544E4BB39EC92214);
		// break;
		goto IL_01b7;
	}

IL_0185:
	{
		// ScoreName = "Eagle";
		__this->set_ScoreName_24(_stringLiteralFE9CF4F5F1568CDA638D37DDEBDFBB20FAAAF055);
		// break;
		goto IL_01b7;
	}

IL_0192:
	{
		// ScoreName = "Albatross";
		__this->set_ScoreName_24(_stringLiteral9A6AE81AF5DB57C61F4BA8BB6F35E91FC3627883);
		// break;
		goto IL_01b7;
	}

IL_019f:
	{
		// ScoreName = "Condor";
		__this->set_ScoreName_24(_stringLiteral490A3D896B64BA8F7AC1084B6336DC665EE1E3EA);
		// break;
		goto IL_01b7;
	}

IL_01ac:
	{
		// ScoreName = "Super Condor";
		__this->set_ScoreName_24(_stringLiteralF74D191D01BEC20EB701B3871DDEC4E6FD8E1D7B);
	}

IL_01b7:
	{
		// if (shots == 1)
		int32_t L_28 = __this->get_shots_5();
		if ((!(((uint32_t)L_28) == ((uint32_t)1))))
		{
			goto IL_01c6;
		}
	}
	{
		// HoleInOne();
		LevelData_HoleInOne_m1581906C18D3F7ED2CCC93276138122443B7F8C2(__this, /*hidden argument*/NULL);
	}

IL_01c6:
	{
		// ScoreNameText.text = ScoreName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_29 = __this->get_ScoreNameText_22();
		String_t* L_30 = __this->get_ScoreName_24();
		NullCheck(L_29);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_30);
	}

IL_01d7:
	{
		// if (score > HighScore)
		int32_t L_31 = __this->get_score_9();
		int32_t L_32 = __this->get_HighScore_8();
		if ((((int32_t)L_31) <= ((int32_t)L_32)))
		{
			goto IL_01fc;
		}
	}
	{
		// HighScore = score;
		int32_t L_33 = __this->get_score_9();
		__this->set_HighScore_8(L_33);
		// HeadManager.Instance.AddScore(this);
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_34;
		L_34 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_34);
		HeadManager_AddScore_m244881D47537ED7308B231B3C586947DCA1E5114(L_34, __this, /*hidden argument*/NULL);
	}

IL_01fc:
	{
		// }
		return;
	}
}
// System.Void LevelData::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelData_FixedUpdate_m02F93CEA8F41BBAF419D82437A83E4852C64DD21 (LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5EBE74694A4C500E846D09A534F475E0415C6AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (score == 0 || score == tempscore) return;
		int32_t L_0 = __this->get_score_9();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = __this->get_score_9();
		int32_t L_2 = __this->get_tempscore_23();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (score == 0 || score == tempscore) return;
		return;
	}

IL_0017:
	{
		// if(score>0) tempscore += 50;
		int32_t L_3 = __this->get_score_9();
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// if(score>0) tempscore += 50;
		int32_t L_4 = __this->get_tempscore_23();
		__this->set_tempscore_23(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)((int32_t)50))));
	}

IL_002f:
	{
		// if (score < 0) tempscore -=50;
		int32_t L_5 = __this->get_score_9();
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		// if (score < 0) tempscore -=50;
		int32_t L_6 = __this->get_tempscore_23();
		__this->set_tempscore_23(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)50))));
	}

IL_0047:
	{
		// if (tempscore >= StarScore1) Star1.SetActive(true);
		int32_t L_7 = __this->get_tempscore_23();
		int32_t L_8 = __this->get_StarScore1_12();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0061;
		}
	}
	{
		// if (tempscore >= StarScore1) Star1.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_Star1_16();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// if (tempscore >= StarScore2) Star2.SetActive(true);
		int32_t L_10 = __this->get_tempscore_23();
		int32_t L_11 = __this->get_StarScore2_13();
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_007b;
		}
	}
	{
		// if (tempscore >= StarScore2) Star2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_Star2_17();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if (tempscore >= StarScore3) Star3.SetActive(true);
		int32_t L_13 = __this->get_tempscore_23();
		int32_t L_14 = __this->get_StarScore3_14();
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0095;
		}
	}
	{
		// if (tempscore >= StarScore3) Star3.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_Star3_18();
		NullCheck(L_15);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)1, /*hidden argument*/NULL);
	}

IL_0095:
	{
		// if (tempscore >= SuperStarScore)
		int32_t L_16 = __this->get_tempscore_23();
		int32_t L_17 = __this->get_SuperStarScore_15();
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_00bb;
		}
	}
	{
		// SuperStar.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_SuperStar_19();
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// Star2.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_Star2_17();
		NullCheck(L_19);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)0, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		// ScoreText.text = "Your Score: " + tempscore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_ScoreText_21();
		int32_t* L_21 = __this->get_address_of_tempscore_23();
		String_t* L_22;
		L_22 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_21, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralB5EBE74694A4C500E846D09A534F475E0415C6AD, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_23);
		// }
		return;
	}
}
// System.Void LevelData::HoleInOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelData_HoleInOne_m1581906C18D3F7ED2CCC93276138122443B7F8C2 (LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral321C988ADEFD54C8389B79A4FB6D4E83B0AA79D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ScoreName = "Hole in One";
		__this->set_ScoreName_24(_stringLiteral321C988ADEFD54C8389B79A4FB6D4E83B0AA79D5);
		// score += 10000;
		int32_t L_0 = __this->get_score_9();
		__this->set_score_9(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)10000))));
		// ScoreNameText.text = ScoreName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_ScoreNameText_22();
		String_t* L_2 = __this->get_ScoreName_24();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void LevelData::ReportToManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelData_ReportToManager_mD560DBC0845D8C32E1F01E557EA4DC3F42D85889 (LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LevelData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelData__ctor_mF80D0E2F8270AC175D70DC24BCE7015DC00C4629 (LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelSelectManager::EnterLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelectManager_EnterLevel_m4809E1B9D3C5377829438A443D0BC8D1258E469F (LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58 * __this, int32_t ___scene0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(scene);
		int32_t L_0 = ___scene0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mF4561CC9E8B5EEB0FB813083642A09AA8D60CCB1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LevelSelectManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelectManager_Start_mE4B7E5E903D1F1372A99FE104E6A1AB04F24F7B8 (LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3632213D60B5C0CA9BD6FD44599110D0BAC3DBF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Level1Highscore = HeadManager.Instance.Level1HiScore;
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_0;
		L_0 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = L_0->get_Level1HiScore_5();
		__this->set_Level1Highscore_4(L_1);
		// Level2Highscore = HeadManager.Instance.Level2HiScore;
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_2;
		L_2 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->get_Level2HiScore_6();
		__this->set_Level2Highscore_5(L_3);
		// Level3Highscore = HeadManager.Instance.Level3HiScore;
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_4;
		L_4 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = L_4->get_Level3HiScore_7();
		__this->set_Level3Highscore_6(L_5);
		// Level4Highscore = HeadManager.Instance.Level4HiScore;
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_6;
		L_6 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = L_6->get_Level4HiScore_8();
		__this->set_Level4Highscore_7(L_7);
		// Level1Score.text = "Highscore: " + Level1Highscore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_Level1Score_14();
		int32_t* L_9 = __this->get_address_of_Level1Highscore_4();
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral3632213D60B5C0CA9BD6FD44599110D0BAC3DBF8, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		// Level2Score.text = "Highscore: " + Level2Highscore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_Level2Score_15();
		int32_t* L_13 = __this->get_address_of_Level2Highscore_5();
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral3632213D60B5C0CA9BD6FD44599110D0BAC3DBF8, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
		// Level3Score.text = "Highscore: " + Level3Highscore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = __this->get_Level3Score_16();
		int32_t* L_17 = __this->get_address_of_Level3Highscore_6();
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_17, /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral3632213D60B5C0CA9BD6FD44599110D0BAC3DBF8, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
		// Level4Score.text = "Highscore: " + Level4Highscore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_Level4Score_17();
		int32_t* L_21 = __this->get_address_of_Level4Highscore_7();
		String_t* L_22;
		L_22 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_21, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral3632213D60B5C0CA9BD6FD44599110D0BAC3DBF8, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_23);
		// BLevel1Highscore = HeadManager.Instance.BLevel1HiScore;
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_24;
		L_24 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = L_24->get_BLevel1HiScore_9();
		__this->set_BLevel1Highscore_8(L_25);
		// BLevel2Highscore = HeadManager.Instance.BLevel2HiScore;
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_26;
		L_26 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_27 = L_26->get_BLevel2HiScore_10();
		__this->set_BLevel2Highscore_9(L_27);
		// BLevel3Highscore = HeadManager.Instance.BLevel3HiScore;
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_28;
		L_28 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_28);
		int32_t L_29 = L_28->get_BLevel3HiScore_11();
		__this->set_BLevel3Highscore_10(L_29);
		// BLevel4Highscore = HeadManager.Instance.BLevel4HiScore;
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_30;
		L_30 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_30);
		int32_t L_31 = L_30->get_BLevel4HiScore_12();
		__this->set_BLevel4Highscore_11(L_31);
		// BLevel5Highscore = HeadManager.Instance.BLevel5HiScore;
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_32;
		L_32 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_32);
		int32_t L_33 = L_32->get_BLevel5HiScore_13();
		__this->set_BLevel5Highscore_12(L_33);
		// BLevel6Highscore = HeadManager.Instance.BLevel6HiScore;
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_34;
		L_34 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_34);
		int32_t L_35 = L_34->get_BLevel6HiScore_14();
		__this->set_BLevel6Highscore_13(L_35);
		// BLevel1Score.text = "Highscore: " + BLevel1Highscore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_36 = __this->get_BLevel1Score_18();
		int32_t* L_37 = __this->get_address_of_BLevel1Highscore_8();
		String_t* L_38;
		L_38 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_37, /*hidden argument*/NULL);
		String_t* L_39;
		L_39 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral3632213D60B5C0CA9BD6FD44599110D0BAC3DBF8, L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, L_39);
		// BLevel2Score.text = "Highscore: " + BLevel2Highscore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_40 = __this->get_BLevel2Score_19();
		int32_t* L_41 = __this->get_address_of_BLevel2Highscore_9();
		String_t* L_42;
		L_42 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_41, /*hidden argument*/NULL);
		String_t* L_43;
		L_43 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral3632213D60B5C0CA9BD6FD44599110D0BAC3DBF8, L_42, /*hidden argument*/NULL);
		NullCheck(L_40);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, L_43);
		// BLevel3Score.text = "Highscore: " + BLevel3Highscore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_44 = __this->get_BLevel3Score_20();
		int32_t* L_45 = __this->get_address_of_BLevel3Highscore_10();
		String_t* L_46;
		L_46 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_45, /*hidden argument*/NULL);
		String_t* L_47;
		L_47 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral3632213D60B5C0CA9BD6FD44599110D0BAC3DBF8, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_44, L_47);
		// BLevel4Score.text = "Highscore: " + BLevel4Highscore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_48 = __this->get_BLevel4Score_21();
		int32_t* L_49 = __this->get_address_of_BLevel4Highscore_11();
		String_t* L_50;
		L_50 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_49, /*hidden argument*/NULL);
		String_t* L_51;
		L_51 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral3632213D60B5C0CA9BD6FD44599110D0BAC3DBF8, L_50, /*hidden argument*/NULL);
		NullCheck(L_48);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_48, L_51);
		// LevelStars();
		LevelSelectManager_LevelStars_m06112574A5C6EC16C70307B0EEAB5500B4DF5FFB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LevelSelectManager::LevelStars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelectManager_LevelStars_m06112574A5C6EC16C70307B0EEAB5500B4DF5FFB (LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98BD5F80B9DB46BE38DCEAA0C64AF7C7EAB4F861);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Level1Highscore >= HeadManager.Instance.Level1Star1 && Level1Highscore != 0)
		int32_t L_0 = __this->get_Level1Highscore_4();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_1;
		L_1 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = L_1->get_Level1Star1_15();
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = __this->get_Level1Highscore_4();
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// Level1Star1.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Level1Star1_24();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_5 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
	}

IL_0034:
	{
		// if (Level1Highscore >= HeadManager.Instance.Level1Star2 && Level1Highscore != 0)
		int32_t L_6 = __this->get_Level1Highscore_4();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_7;
		L_7 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = L_7->get_Level1Star2_16();
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_9 = __this->get_Level1Highscore_4();
		if (!L_9)
		{
			goto IL_0068;
		}
	}
	{
		// Level1Star2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_Level1Star2_25();
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_11 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
	}

IL_0068:
	{
		// if (Level1Highscore >= HeadManager.Instance.Level1Star3 && Level1Highscore != 0)
		int32_t L_12 = __this->get_Level1Highscore_4();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_13;
		L_13 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = L_13->get_Level1Star3_17();
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_15 = __this->get_Level1Highscore_4();
		if (!L_15)
		{
			goto IL_009c;
		}
	}
	{
		// Level1Star3.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_Level1Star3_26();
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_17 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
	}

IL_009c:
	{
		// if (Level1Highscore >= HeadManager.Instance.Level1Star4 && Level1Highscore != 0)
		int32_t L_18 = __this->get_Level1Highscore_4();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_19;
		L_19 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = L_19->get_Level1Star4_18();
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_21 = __this->get_Level1Highscore_4();
		if (!L_21)
		{
			goto IL_00d0;
		}
	}
	{
		// Level1Star4.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_Level1Star4_27();
		NullCheck(L_22);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_22, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_23 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
	}

IL_00d0:
	{
		// if (Level2Highscore >= HeadManager.Instance.Level2Star1 && Level2Highscore != 0)
		int32_t L_24 = __this->get_Level2Highscore_5();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_25;
		L_25 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_26 = L_25->get_Level2Star1_19();
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_27 = __this->get_Level2Highscore_5();
		if (!L_27)
		{
			goto IL_0104;
		}
	}
	{
		// Level2Star1.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_Level2Star1_28();
		NullCheck(L_28);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_28, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_29 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)));
	}

IL_0104:
	{
		// if (Level2Highscore >= HeadManager.Instance.Level2Star2 && Level2Highscore != 0)
		int32_t L_30 = __this->get_Level2Highscore_5();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_31;
		L_31 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = L_31->get_Level2Star2_20();
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_33 = __this->get_Level2Highscore_5();
		if (!L_33)
		{
			goto IL_0138;
		}
	}
	{
		// Level2Star2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_Level2Star2_29();
		NullCheck(L_34);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_34, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_35 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)));
	}

IL_0138:
	{
		// if (Level2Highscore >= HeadManager.Instance.Level2Star3 && Level2Highscore != 0)
		int32_t L_36 = __this->get_Level2Highscore_5();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_37;
		L_37 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = L_37->get_Level2Star3_21();
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_016c;
		}
	}
	{
		int32_t L_39 = __this->get_Level2Highscore_5();
		if (!L_39)
		{
			goto IL_016c;
		}
	}
	{
		// Level2Star3.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = __this->get_Level2Star3_30();
		NullCheck(L_40);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_40, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_41 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1)));
	}

IL_016c:
	{
		// if (Level2Highscore >= HeadManager.Instance.Level2Star4 && Level2Highscore != 0)
		int32_t L_42 = __this->get_Level2Highscore_5();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_43;
		L_43 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_43);
		int32_t L_44 = L_43->get_Level2Star4_22();
		if ((((int32_t)L_42) < ((int32_t)L_44)))
		{
			goto IL_01a0;
		}
	}
	{
		int32_t L_45 = __this->get_Level2Highscore_5();
		if (!L_45)
		{
			goto IL_01a0;
		}
	}
	{
		// Level2Star4.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = __this->get_Level2Star4_31();
		NullCheck(L_46);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_46, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_47 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1)));
	}

IL_01a0:
	{
		// if (Level3Highscore >= HeadManager.Instance.Level3Star1 && Level3Highscore != 0)
		int32_t L_48 = __this->get_Level3Highscore_6();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_49;
		L_49 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_49);
		int32_t L_50 = L_49->get_Level3Star1_23();
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_51 = __this->get_Level3Highscore_6();
		if (!L_51)
		{
			goto IL_01d4;
		}
	}
	{
		// Level3Star1.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = __this->get_Level3Star1_32();
		NullCheck(L_52);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_52, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_53 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1)));
	}

IL_01d4:
	{
		// if (Level3Highscore >= HeadManager.Instance.Level3Star2 && Level3Highscore != 0)
		int32_t L_54 = __this->get_Level3Highscore_6();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_55;
		L_55 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_55);
		int32_t L_56 = L_55->get_Level3Star2_24();
		if ((((int32_t)L_54) < ((int32_t)L_56)))
		{
			goto IL_0208;
		}
	}
	{
		int32_t L_57 = __this->get_Level3Highscore_6();
		if (!L_57)
		{
			goto IL_0208;
		}
	}
	{
		// Level3Star2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = __this->get_Level3Star2_33();
		NullCheck(L_58);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_58, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_59 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1)));
	}

IL_0208:
	{
		// if (Level3Highscore >= HeadManager.Instance.Level3Star3 && Level3Highscore != 0)
		int32_t L_60 = __this->get_Level3Highscore_6();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_61;
		L_61 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_61);
		int32_t L_62 = L_61->get_Level3Star3_25();
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_023c;
		}
	}
	{
		int32_t L_63 = __this->get_Level3Highscore_6();
		if (!L_63)
		{
			goto IL_023c;
		}
	}
	{
		// Level3Star3.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = __this->get_Level3Star3_34();
		NullCheck(L_64);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_64, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_65 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1)));
	}

IL_023c:
	{
		// if (Level3Highscore >= HeadManager.Instance.Level3Star4 && Level3Highscore != 0)
		int32_t L_66 = __this->get_Level3Highscore_6();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_67;
		L_67 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_67);
		int32_t L_68 = L_67->get_Level3Star4_26();
		if ((((int32_t)L_66) < ((int32_t)L_68)))
		{
			goto IL_0270;
		}
	}
	{
		int32_t L_69 = __this->get_Level3Highscore_6();
		if (!L_69)
		{
			goto IL_0270;
		}
	}
	{
		// Level3Star4.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70 = __this->get_Level3Star4_35();
		NullCheck(L_70);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_70, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_71 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1)));
	}

IL_0270:
	{
		// if (Level4Highscore >= HeadManager.Instance.Level4Star1 && Level4Highscore != 0)
		int32_t L_72 = __this->get_Level4Highscore_7();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_73;
		L_73 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_73);
		int32_t L_74 = L_73->get_Level4Star1_27();
		if ((((int32_t)L_72) < ((int32_t)L_74)))
		{
			goto IL_02a4;
		}
	}
	{
		int32_t L_75 = __this->get_Level4Highscore_7();
		if (!L_75)
		{
			goto IL_02a4;
		}
	}
	{
		// Level4Star1.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = __this->get_Level4Star1_36();
		NullCheck(L_76);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_76, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_77 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1)));
	}

IL_02a4:
	{
		// if (Level4Highscore >= HeadManager.Instance.Level4Star2 && Level4Highscore != 0)
		int32_t L_78 = __this->get_Level4Highscore_7();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_79;
		L_79 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_79);
		int32_t L_80 = L_79->get_Level4Star2_28();
		if ((((int32_t)L_78) < ((int32_t)L_80)))
		{
			goto IL_02d8;
		}
	}
	{
		int32_t L_81 = __this->get_Level4Highscore_7();
		if (!L_81)
		{
			goto IL_02d8;
		}
	}
	{
		// Level4Star2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_82 = __this->get_Level4Star2_37();
		NullCheck(L_82);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_82, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_83 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1)));
	}

IL_02d8:
	{
		// if (Level4Highscore >= HeadManager.Instance.Level4Star3 && Level4Highscore != 0)
		int32_t L_84 = __this->get_Level4Highscore_7();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_85;
		L_85 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_85);
		int32_t L_86 = L_85->get_Level4Star3_29();
		if ((((int32_t)L_84) < ((int32_t)L_86)))
		{
			goto IL_030c;
		}
	}
	{
		int32_t L_87 = __this->get_Level4Highscore_7();
		if (!L_87)
		{
			goto IL_030c;
		}
	}
	{
		// Level4Star3.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88 = __this->get_Level4Star3_38();
		NullCheck(L_88);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_88, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_89 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1)));
	}

IL_030c:
	{
		// if (Level4Highscore >= HeadManager.Instance.Level4Star4 && Level4Highscore != 0)
		int32_t L_90 = __this->get_Level4Highscore_7();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_91;
		L_91 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_91);
		int32_t L_92 = L_91->get_Level4Star4_30();
		if ((((int32_t)L_90) < ((int32_t)L_92)))
		{
			goto IL_0340;
		}
	}
	{
		int32_t L_93 = __this->get_Level4Highscore_7();
		if (!L_93)
		{
			goto IL_0340;
		}
	}
	{
		// Level4Star4.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_94 = __this->get_Level4Star4_39();
		NullCheck(L_94);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_94, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_95 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1)));
	}

IL_0340:
	{
		// if (BLevel1Highscore >= HeadManager.Instance.BLevel1Star1 && BLevel1Highscore != 0)
		int32_t L_96 = __this->get_BLevel1Highscore_8();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_97;
		L_97 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_97);
		int32_t L_98 = L_97->get_BLevel1Star1_31();
		if ((((int32_t)L_96) < ((int32_t)L_98)))
		{
			goto IL_0374;
		}
	}
	{
		int32_t L_99 = __this->get_BLevel1Highscore_8();
		if (!L_99)
		{
			goto IL_0374;
		}
	}
	{
		// BLevel1Star1.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100 = __this->get_BLevel1Star1_40();
		NullCheck(L_100);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_100, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_101 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1)));
	}

IL_0374:
	{
		// if (BLevel1Highscore >= HeadManager.Instance.BLevel1Star2 && BLevel1Highscore != 0)
		int32_t L_102 = __this->get_BLevel1Highscore_8();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_103;
		L_103 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_103);
		int32_t L_104 = L_103->get_BLevel1Star2_32();
		if ((((int32_t)L_102) < ((int32_t)L_104)))
		{
			goto IL_03a8;
		}
	}
	{
		int32_t L_105 = __this->get_BLevel1Highscore_8();
		if (!L_105)
		{
			goto IL_03a8;
		}
	}
	{
		// BLevel1Star2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_106 = __this->get_BLevel1Star2_41();
		NullCheck(L_106);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_106, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_107 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1)));
	}

IL_03a8:
	{
		// if (BLevel1Highscore >= HeadManager.Instance.BLevel1Star3 && BLevel1Highscore != 0)
		int32_t L_108 = __this->get_BLevel1Highscore_8();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_109;
		L_109 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_109);
		int32_t L_110 = L_109->get_BLevel1Star3_33();
		if ((((int32_t)L_108) < ((int32_t)L_110)))
		{
			goto IL_03dc;
		}
	}
	{
		int32_t L_111 = __this->get_BLevel1Highscore_8();
		if (!L_111)
		{
			goto IL_03dc;
		}
	}
	{
		// BLevel1Star3.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_112 = __this->get_BLevel1Star3_42();
		NullCheck(L_112);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_112, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_113 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1)));
	}

IL_03dc:
	{
		// if (BLevel1Highscore >= HeadManager.Instance.BLevel1Star4 && BLevel1Highscore != 0)
		int32_t L_114 = __this->get_BLevel1Highscore_8();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_115;
		L_115 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_115);
		int32_t L_116 = L_115->get_BLevel1Star4_34();
		if ((((int32_t)L_114) < ((int32_t)L_116)))
		{
			goto IL_0410;
		}
	}
	{
		int32_t L_117 = __this->get_BLevel1Highscore_8();
		if (!L_117)
		{
			goto IL_0410;
		}
	}
	{
		// BLevel1Star4.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_118 = __this->get_BLevel1Star4_43();
		NullCheck(L_118);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_118, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_119 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1)));
	}

IL_0410:
	{
		// if (BLevel2Highscore >= HeadManager.Instance.BLevel2Star1 && BLevel2Highscore != 0)
		int32_t L_120 = __this->get_BLevel2Highscore_9();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_121;
		L_121 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_121);
		int32_t L_122 = L_121->get_BLevel2Star1_35();
		if ((((int32_t)L_120) < ((int32_t)L_122)))
		{
			goto IL_0444;
		}
	}
	{
		int32_t L_123 = __this->get_BLevel2Highscore_9();
		if (!L_123)
		{
			goto IL_0444;
		}
	}
	{
		// BLevel2Star1.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_124 = __this->get_BLevel2Star1_44();
		NullCheck(L_124);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_124, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_125 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_125, (int32_t)1)));
	}

IL_0444:
	{
		// if (BLevel2Highscore >= HeadManager.Instance.BLevel2Star2 && BLevel2Highscore != 0)
		int32_t L_126 = __this->get_BLevel2Highscore_9();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_127;
		L_127 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_127);
		int32_t L_128 = L_127->get_BLevel2Star2_36();
		if ((((int32_t)L_126) < ((int32_t)L_128)))
		{
			goto IL_0478;
		}
	}
	{
		int32_t L_129 = __this->get_BLevel2Highscore_9();
		if (!L_129)
		{
			goto IL_0478;
		}
	}
	{
		// BLevel2Star2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_130 = __this->get_BLevel2Star2_45();
		NullCheck(L_130);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_130, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_131 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1)));
	}

IL_0478:
	{
		// if (BLevel2Highscore >= HeadManager.Instance.BLevel2Star3 && BLevel2Highscore != 0)
		int32_t L_132 = __this->get_BLevel2Highscore_9();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_133;
		L_133 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_133);
		int32_t L_134 = L_133->get_BLevel2Star3_37();
		if ((((int32_t)L_132) < ((int32_t)L_134)))
		{
			goto IL_04ac;
		}
	}
	{
		int32_t L_135 = __this->get_BLevel2Highscore_9();
		if (!L_135)
		{
			goto IL_04ac;
		}
	}
	{
		// BLevel2Star3.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_136 = __this->get_BLevel2Star3_46();
		NullCheck(L_136);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_136, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_137 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1)));
	}

IL_04ac:
	{
		// if (BLevel2Highscore >= HeadManager.Instance.BLevel2Star4 && BLevel2Highscore != 0)
		int32_t L_138 = __this->get_BLevel2Highscore_9();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_139;
		L_139 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_139);
		int32_t L_140 = L_139->get_BLevel2Star4_38();
		if ((((int32_t)L_138) < ((int32_t)L_140)))
		{
			goto IL_04e0;
		}
	}
	{
		int32_t L_141 = __this->get_BLevel2Highscore_9();
		if (!L_141)
		{
			goto IL_04e0;
		}
	}
	{
		// BLevel2Star4.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_142 = __this->get_BLevel2Star4_47();
		NullCheck(L_142);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_142, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_143 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_143, (int32_t)1)));
	}

IL_04e0:
	{
		// if (BLevel3Highscore >= HeadManager.Instance.BLevel3Star1 && BLevel3Highscore != 0)
		int32_t L_144 = __this->get_BLevel3Highscore_10();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_145;
		L_145 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_145);
		int32_t L_146 = L_145->get_BLevel3Star1_39();
		if ((((int32_t)L_144) < ((int32_t)L_146)))
		{
			goto IL_0514;
		}
	}
	{
		int32_t L_147 = __this->get_BLevel3Highscore_10();
		if (!L_147)
		{
			goto IL_0514;
		}
	}
	{
		// BLevel3Star1.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_148 = __this->get_BLevel3Star1_48();
		NullCheck(L_148);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_148, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_149 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)1)));
	}

IL_0514:
	{
		// if (BLevel3Highscore >= HeadManager.Instance.BLevel3Star2 && BLevel3Highscore != 0)
		int32_t L_150 = __this->get_BLevel3Highscore_10();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_151;
		L_151 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_151);
		int32_t L_152 = L_151->get_BLevel3Star2_40();
		if ((((int32_t)L_150) < ((int32_t)L_152)))
		{
			goto IL_0548;
		}
	}
	{
		int32_t L_153 = __this->get_BLevel3Highscore_10();
		if (!L_153)
		{
			goto IL_0548;
		}
	}
	{
		// BLevel3Star2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_154 = __this->get_BLevel3Star2_49();
		NullCheck(L_154);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_154, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_155 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_155, (int32_t)1)));
	}

IL_0548:
	{
		// if (BLevel3Highscore >= HeadManager.Instance.BLevel3Star3 && BLevel3Highscore != 0)
		int32_t L_156 = __this->get_BLevel3Highscore_10();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_157;
		L_157 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_157);
		int32_t L_158 = L_157->get_BLevel3Star3_41();
		if ((((int32_t)L_156) < ((int32_t)L_158)))
		{
			goto IL_057c;
		}
	}
	{
		int32_t L_159 = __this->get_BLevel3Highscore_10();
		if (!L_159)
		{
			goto IL_057c;
		}
	}
	{
		// BLevel3Star3.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_160 = __this->get_BLevel3Star3_50();
		NullCheck(L_160);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_160, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_161 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_161, (int32_t)1)));
	}

IL_057c:
	{
		// if (BLevel3Highscore >= HeadManager.Instance.BLevel3Star4 && BLevel3Highscore != 0)
		int32_t L_162 = __this->get_BLevel3Highscore_10();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_163;
		L_163 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_163);
		int32_t L_164 = L_163->get_BLevel3Star4_42();
		if ((((int32_t)L_162) < ((int32_t)L_164)))
		{
			goto IL_05b0;
		}
	}
	{
		int32_t L_165 = __this->get_BLevel3Highscore_10();
		if (!L_165)
		{
			goto IL_05b0;
		}
	}
	{
		// BLevel3Star4.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_166 = __this->get_BLevel3Star4_51();
		NullCheck(L_166);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_166, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_167 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_167, (int32_t)1)));
	}

IL_05b0:
	{
		// if (BLevel4Highscore >= HeadManager.Instance.BLevel4Star1 && BLevel4Highscore != 0)
		int32_t L_168 = __this->get_BLevel4Highscore_11();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_169;
		L_169 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_169);
		int32_t L_170 = L_169->get_BLevel4Star1_43();
		if ((((int32_t)L_168) < ((int32_t)L_170)))
		{
			goto IL_05e4;
		}
	}
	{
		int32_t L_171 = __this->get_BLevel4Highscore_11();
		if (!L_171)
		{
			goto IL_05e4;
		}
	}
	{
		// BLevel4Star1.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_172 = __this->get_BLevel4Star1_52();
		NullCheck(L_172);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_172, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_173 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_173, (int32_t)1)));
	}

IL_05e4:
	{
		// if (BLevel4Highscore >= HeadManager.Instance.BLevel4Star2 && BLevel4Highscore != 0)
		int32_t L_174 = __this->get_BLevel4Highscore_11();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_175;
		L_175 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_175);
		int32_t L_176 = L_175->get_BLevel4Star2_44();
		if ((((int32_t)L_174) < ((int32_t)L_176)))
		{
			goto IL_0618;
		}
	}
	{
		int32_t L_177 = __this->get_BLevel4Highscore_11();
		if (!L_177)
		{
			goto IL_0618;
		}
	}
	{
		// BLevel4Star2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_178 = __this->get_BLevel4Star2_53();
		NullCheck(L_178);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_178, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_179 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_179, (int32_t)1)));
	}

IL_0618:
	{
		// if (BLevel4Highscore >= HeadManager.Instance.BLevel4Star3 && BLevel4Highscore != 0)
		int32_t L_180 = __this->get_BLevel4Highscore_11();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_181;
		L_181 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_181);
		int32_t L_182 = L_181->get_BLevel4Star3_45();
		if ((((int32_t)L_180) < ((int32_t)L_182)))
		{
			goto IL_064c;
		}
	}
	{
		int32_t L_183 = __this->get_BLevel4Highscore_11();
		if (!L_183)
		{
			goto IL_064c;
		}
	}
	{
		// BLevel4Star3.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_184 = __this->get_BLevel4Star3_54();
		NullCheck(L_184);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_184, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_185 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_185, (int32_t)1)));
	}

IL_064c:
	{
		// if (BLevel4Highscore >= HeadManager.Instance.BLevel4Star4 && BLevel4Highscore != 0)
		int32_t L_186 = __this->get_BLevel4Highscore_11();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_187;
		L_187 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_187);
		int32_t L_188 = L_187->get_BLevel4Star4_46();
		if ((((int32_t)L_186) < ((int32_t)L_188)))
		{
			goto IL_0680;
		}
	}
	{
		int32_t L_189 = __this->get_BLevel4Highscore_11();
		if (!L_189)
		{
			goto IL_0680;
		}
	}
	{
		// BLevel4Star4.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_190 = __this->get_BLevel4Star4_55();
		NullCheck(L_190);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_190, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_191 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_191, (int32_t)1)));
	}

IL_0680:
	{
		// if (BLevel5Highscore >= HeadManager.Instance.BLevel5Star1 && BLevel5Highscore != 0)
		int32_t L_192 = __this->get_BLevel5Highscore_12();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_193;
		L_193 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_193);
		int32_t L_194 = L_193->get_BLevel5Star1_47();
		if ((((int32_t)L_192) < ((int32_t)L_194)))
		{
			goto IL_06b4;
		}
	}
	{
		int32_t L_195 = __this->get_BLevel5Highscore_12();
		if (!L_195)
		{
			goto IL_06b4;
		}
	}
	{
		// BLevel5Star1.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_196 = __this->get_BLevel5Star1_56();
		NullCheck(L_196);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_196, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_197 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_197, (int32_t)1)));
	}

IL_06b4:
	{
		// if (BLevel5Highscore >= HeadManager.Instance.BLevel5Star2 && BLevel5Highscore != 0)
		int32_t L_198 = __this->get_BLevel5Highscore_12();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_199;
		L_199 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_199);
		int32_t L_200 = L_199->get_BLevel5Star2_48();
		if ((((int32_t)L_198) < ((int32_t)L_200)))
		{
			goto IL_06e8;
		}
	}
	{
		int32_t L_201 = __this->get_BLevel5Highscore_12();
		if (!L_201)
		{
			goto IL_06e8;
		}
	}
	{
		// BLevel5Star2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_202 = __this->get_BLevel5Star2_57();
		NullCheck(L_202);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_202, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_203 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_203, (int32_t)1)));
	}

IL_06e8:
	{
		// if (BLevel5Highscore >= HeadManager.Instance.BLevel5Star3 && BLevel5Highscore != 0)
		int32_t L_204 = __this->get_BLevel5Highscore_12();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_205;
		L_205 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_205);
		int32_t L_206 = L_205->get_BLevel5Star3_49();
		if ((((int32_t)L_204) < ((int32_t)L_206)))
		{
			goto IL_071c;
		}
	}
	{
		int32_t L_207 = __this->get_BLevel5Highscore_12();
		if (!L_207)
		{
			goto IL_071c;
		}
	}
	{
		// BLevel5Star3.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_208 = __this->get_BLevel5Star3_58();
		NullCheck(L_208);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_208, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_209 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_209, (int32_t)1)));
	}

IL_071c:
	{
		// if (BLevel5Highscore >= HeadManager.Instance.BLevel5Star4 && BLevel5Highscore != 0)
		int32_t L_210 = __this->get_BLevel5Highscore_12();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_211;
		L_211 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_211);
		int32_t L_212 = L_211->get_BLevel5Star4_50();
		if ((((int32_t)L_210) < ((int32_t)L_212)))
		{
			goto IL_0750;
		}
	}
	{
		int32_t L_213 = __this->get_BLevel5Highscore_12();
		if (!L_213)
		{
			goto IL_0750;
		}
	}
	{
		// BLevel5Star4.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_214 = __this->get_BLevel5Star4_59();
		NullCheck(L_214);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_214, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_215 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_215, (int32_t)1)));
	}

IL_0750:
	{
		// if (BLevel6Highscore >= HeadManager.Instance.BLevel6Star1 && BLevel6Highscore != 0)
		int32_t L_216 = __this->get_BLevel6Highscore_13();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_217;
		L_217 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_217);
		int32_t L_218 = L_217->get_BLevel6Star1_51();
		if ((((int32_t)L_216) < ((int32_t)L_218)))
		{
			goto IL_0784;
		}
	}
	{
		int32_t L_219 = __this->get_BLevel6Highscore_13();
		if (!L_219)
		{
			goto IL_0784;
		}
	}
	{
		// BLevel6Star1.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_220 = __this->get_BLevel6Star1_60();
		NullCheck(L_220);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_220, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_221 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_221, (int32_t)1)));
	}

IL_0784:
	{
		// if (BLevel6Highscore >= HeadManager.Instance.BLevel6Star2 && BLevel6Highscore != 0)
		int32_t L_222 = __this->get_BLevel6Highscore_13();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_223;
		L_223 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_223);
		int32_t L_224 = L_223->get_BLevel6Star2_52();
		if ((((int32_t)L_222) < ((int32_t)L_224)))
		{
			goto IL_07b8;
		}
	}
	{
		int32_t L_225 = __this->get_BLevel6Highscore_13();
		if (!L_225)
		{
			goto IL_07b8;
		}
	}
	{
		// BLevel6Star2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_226 = __this->get_BLevel6Star2_61();
		NullCheck(L_226);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_226, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_227 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_227, (int32_t)1)));
	}

IL_07b8:
	{
		// if (BLevel6Highscore >= HeadManager.Instance.BLevel6Star3 && BLevel6Highscore != 0)
		int32_t L_228 = __this->get_BLevel6Highscore_13();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_229;
		L_229 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_229);
		int32_t L_230 = L_229->get_BLevel6Star3_53();
		if ((((int32_t)L_228) < ((int32_t)L_230)))
		{
			goto IL_07ec;
		}
	}
	{
		int32_t L_231 = __this->get_BLevel6Highscore_13();
		if (!L_231)
		{
			goto IL_07ec;
		}
	}
	{
		// BLevel6Star3.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_232 = __this->get_BLevel6Star3_62();
		NullCheck(L_232);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_232, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_233 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_233, (int32_t)1)));
	}

IL_07ec:
	{
		// if (BLevel6Highscore >= HeadManager.Instance.BLevel6Star4 && BLevel6Highscore != 0)
		int32_t L_234 = __this->get_BLevel6Highscore_13();
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_235;
		L_235 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_235);
		int32_t L_236 = L_235->get_BLevel6Star4_54();
		if ((((int32_t)L_234) < ((int32_t)L_236)))
		{
			goto IL_0820;
		}
	}
	{
		int32_t L_237 = __this->get_BLevel6Highscore_13();
		if (!L_237)
		{
			goto IL_0820;
		}
	}
	{
		// BLevel6Star4.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_238 = __this->get_BLevel6Star4_63();
		NullCheck(L_238);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_238, (bool)1, /*hidden argument*/NULL);
		// Stars++;
		int32_t L_239 = __this->get_Stars_71();
		__this->set_Stars_71(((int32_t)il2cpp_codegen_add((int32_t)L_239, (int32_t)1)));
	}

IL_0820:
	{
		// StarCounter.text = "Current Stars: " + Stars;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_240 = __this->get_StarCounter_70();
		int32_t* L_241 = __this->get_address_of_Stars_71();
		String_t* L_242;
		L_242 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_241, /*hidden argument*/NULL);
		String_t* L_243;
		L_243 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral98BD5F80B9DB46BE38DCEAA0C64AF7C7EAB4F861, L_242, /*hidden argument*/NULL);
		NullCheck(L_240);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_240, L_243);
		// if (Stars > 0) Level2Button.interactable = true;
		int32_t L_244 = __this->get_Stars_71();
		if ((((int32_t)L_244) <= ((int32_t)0)))
		{
			goto IL_0855;
		}
	}
	{
		// if (Stars > 0) Level2Button.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_245 = __this->get_Level2Button_65();
		NullCheck(L_245);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_245, (bool)1, /*hidden argument*/NULL);
	}

IL_0855:
	{
		// if (Stars > 1) Level3Button.interactable = true;
		int32_t L_246 = __this->get_Stars_71();
		if ((((int32_t)L_246) <= ((int32_t)1)))
		{
			goto IL_086a;
		}
	}
	{
		// if (Stars > 1) Level3Button.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_247 = __this->get_Level3Button_66();
		NullCheck(L_247);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_247, (bool)1, /*hidden argument*/NULL);
	}

IL_086a:
	{
		// if (Stars > 2) Level4Button.interactable = true;
		int32_t L_248 = __this->get_Stars_71();
		if ((((int32_t)L_248) <= ((int32_t)2)))
		{
			goto IL_087f;
		}
	}
	{
		// if (Stars > 2) Level4Button.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_249 = __this->get_Level4Button_67();
		NullCheck(L_249);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_249, (bool)1, /*hidden argument*/NULL);
	}

IL_087f:
	{
		// if (Stars > 3) Level5Button.interactable = true;
		int32_t L_250 = __this->get_Stars_71();
		if ((((int32_t)L_250) <= ((int32_t)3)))
		{
			goto IL_0894;
		}
	}
	{
		// if (Stars > 3) Level5Button.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_251 = __this->get_Level5Button_68();
		NullCheck(L_251);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_251, (bool)1, /*hidden argument*/NULL);
	}

IL_0894:
	{
		// if (Stars > 4) Level6Button.interactable = true;
		int32_t L_252 = __this->get_Stars_71();
		if ((((int32_t)L_252) <= ((int32_t)4)))
		{
			goto IL_08a9;
		}
	}
	{
		// if (Stars > 4) Level6Button.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_253 = __this->get_Level6Button_69();
		NullCheck(L_253);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_253, (bool)1, /*hidden argument*/NULL);
	}

IL_08a9:
	{
		// }
		return;
	}
}
// System.Void LevelSelectManager::PageLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelectManager_PageLeft_m4EE4A03D11F2E2213A4E3407EBFA171190564F4D (LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58 * __this, const RuntimeMethod* method)
{
	{
		// if (Page == 2)
		int32_t L_0 = __this->get_Page_72();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0028;
		}
	}
	{
		// Page = 1;
		__this->set_Page_72(1);
		// Page1UI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_Page1UI_73();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// Page2UI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Page2UI_74();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void LevelSelectManager::PageRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelectManager_PageRight_mA6270F18DD19BC83E7BA5675AE104F15A25D58D9 (LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58 * __this, const RuntimeMethod* method)
{
	{
		// if (Page == 1)
		int32_t L_0 = __this->get_Page_72();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		// Page = 2;
		__this->set_Page_72(2);
		// Page1UI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_Page1UI_73();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// Page2UI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Page2UI_74();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void LevelSelectManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelectManager__ctor_m1D3549F96DF80F38B9BF052B620CEF500289DE81 (LevelSelectManager_tBB66412F0B31E5087BAC86E491EA6E19B2854F58 * __this, const RuntimeMethod* method)
{
	{
		// private int Page = 1;
		__this->set_Page_72(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainElevator::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainElevator_OnTriggerEnter_m2D1EF80642DEBAE18E95C8C01DA2EE3BC01C3D98 (MainElevator_t594A71E12455EB053FBEEB751540E274F0F1BF51 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisElevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E_mA221C4837CC08314152B7C39AD36DA6441CACF6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject == Tank)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Tank_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// Button1.GetComponent<Elevator>().TankEntered();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Button1_4();
		NullCheck(L_4);
		Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E * L_5;
		L_5 = GameObject_GetComponent_TisElevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E_mA221C4837CC08314152B7C39AD36DA6441CACF6F(L_4, /*hidden argument*/GameObject_GetComponent_TisElevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E_mA221C4837CC08314152B7C39AD36DA6441CACF6F_RuntimeMethod_var);
		NullCheck(L_5);
		Elevator_TankEntered_m2EB0224CD5CBF18628A88A9C327265BE3695EB4E(L_5, /*hidden argument*/NULL);
		// Button2.GetComponent<Elevator>().TankEntered();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_Button2_5();
		NullCheck(L_6);
		Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E * L_7;
		L_7 = GameObject_GetComponent_TisElevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E_mA221C4837CC08314152B7C39AD36DA6441CACF6F(L_6, /*hidden argument*/GameObject_GetComponent_TisElevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E_mA221C4837CC08314152B7C39AD36DA6441CACF6F_RuntimeMethod_var);
		NullCheck(L_7);
		Elevator_TankEntered_m2EB0224CD5CBF18628A88A9C327265BE3695EB4E(L_7, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void MainElevator::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainElevator_OnTriggerExit_m85E34EB4B5EFD83965F503AAE47B857C3586D4F7 (MainElevator_t594A71E12455EB053FBEEB751540E274F0F1BF51 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisElevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E_mA221C4837CC08314152B7C39AD36DA6441CACF6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject == Tank)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Tank_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// Button1.GetComponent<Elevator>().TankEntered();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Button1_4();
		NullCheck(L_4);
		Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E * L_5;
		L_5 = GameObject_GetComponent_TisElevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E_mA221C4837CC08314152B7C39AD36DA6441CACF6F(L_4, /*hidden argument*/GameObject_GetComponent_TisElevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E_mA221C4837CC08314152B7C39AD36DA6441CACF6F_RuntimeMethod_var);
		NullCheck(L_5);
		Elevator_TankEntered_m2EB0224CD5CBF18628A88A9C327265BE3695EB4E(L_5, /*hidden argument*/NULL);
		// Button2.GetComponent<Elevator>().TankEntered();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_Button2_5();
		NullCheck(L_6);
		Elevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E * L_7;
		L_7 = GameObject_GetComponent_TisElevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E_mA221C4837CC08314152B7C39AD36DA6441CACF6F(L_6, /*hidden argument*/GameObject_GetComponent_TisElevator_t574AC2E9DA5D2DFCBEDA0043B5454110B2753D4E_mA221C4837CC08314152B7C39AD36DA6441CACF6F_RuntimeMethod_var);
		NullCheck(L_7);
		Elevator_TankEntered_m2EB0224CD5CBF18628A88A9C327265BE3695EB4E(L_7, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void MainElevator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainElevator__ctor_m981E95306BB9C0F534E541EB203B1FA10F342DEF (MainElevator_t594A71E12455EB053FBEEB751540E274F0F1BF51 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Start_m4E4A5EF33C27448D7F34FD29B93589635F1B2EE2 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		// HideControls();
		MenuManager_HideControls_m9016472D45E0EA122712D01EE290B9F5B06A9139(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::HideControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_HideControls_m9016472D45E0EA122712D01EE290B9F5B06A9139 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		// Controls1.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Controls1_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// Controls2.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_Controls2_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// ControlButtons.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_ControlButtons_7();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::DisplayControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_DisplayControls_mEB1E1BF7CF4E299E65FA3BFA631335D65C4E0CA7 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		// Controls1.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Controls1_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// ControlButtons.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_ControlButtons_7();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::ShowControls2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ShowControls2_mC714DE1551A9530EA268DEAAF89D608F6BFD83C5 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		// Controls1.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Controls1_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// Controls2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_Controls2_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager__ctor_m8F61CC885B72291B54C1C6EC368AE303EA856529 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MilitaryTankUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_Awake_m4D04F9031CEDBC7596B8E40E974F4316BC7CC801 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A_m5AE06FE0ABBA1DFFED858F575F037A7EB7489F8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11B6E13DC6549F08170CC78DAB7988B540030884);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AECF0377C1CBC5351D8AC05FD10EDD525281DE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E695981582357762AA73756E8B4E67C77308A9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32EADFF94258C3734CED2CDE70F4733B9D5611A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF94DD8519E30121BEBF6D4CF302100709E67C26B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FiringUI = GameObject.Find("Movement UI");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteralC32EADFF94258C3734CED2CDE70F4733B9D5611A, /*hidden argument*/NULL);
		__this->set_FiringUI_25(L_0);
		// BallUI = GameObject.Find("BallUI");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral5E695981582357762AA73756E8B4E67C77308A9E, /*hidden argument*/NULL);
		__this->set_BallUI_26(L_1);
		// GameOverUI = GameObject.Find("GameOverUI");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral5AECF0377C1CBC5351D8AC05FD10EDD525281DE8, /*hidden argument*/NULL);
		__this->set_GameOverUI_27(L_2);
		// LevelName = levelData.GetComponent<LevelData>().LevelName;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_levelData_48();
		NullCheck(L_3);
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_4;
		L_4 = GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13(L_3, /*hidden argument*/GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5 = L_4->get_LevelName_7();
		__this->set_LevelName_49(L_5);
		// TankBody = GameObject.Find("Main_Body");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteralF94DD8519E30121BEBF6D4CF302100709E67C26B, /*hidden argument*/NULL);
		__this->set_TankBody_53(L_6);
		// if (GameObject.Find("Mr.AllData"))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral11B6E13DC6549F08170CC78DAB7988B540030884, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0081;
		}
	}
	{
		// HeadManager.Instance.gameObject.GetComponent<CustomizedTankManager>().ColorTank(TankBody);
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_9;
		L_9 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		CustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A * L_11;
		L_11 = GameObject_GetComponent_TisCustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A_m5AE06FE0ABBA1DFFED858F575F037A7EB7489F8E(L_10, /*hidden argument*/GameObject_GetComponent_TisCustomizedTankManager_tB65C7022F05F81C98F235E79EF4613AFC871993A_m5AE06FE0ABBA1DFFED858F575F037A7EB7489F8E_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_TankBody_53();
		NullCheck(L_11);
		CustomizedTankManager_ColorTank_m87BEC55241205CDE6CF4F7C238625E077DC60B83(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void MilitaryTankUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_Start_m14A8CBD546D13E1C53E725C7AC302DEF375B3403 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E90B9C92D2811F01D6D3722E851CAA0E563AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral488AFFD1B4F87A447F078869FB10399780A338D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral514A8AD09809280423A1825FBE8D19B2AB1AD4F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral577DDC14703310DA10F7B7338964154C73A53042);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7976B8660EF1C71B6EE59C5AD2D870287AEB2474);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D44B231B21B8C5C862F11B3FD9AC3DE7AFCCC78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F15E73C308C9440A4A66E65A54F37A6862F5072);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF4E5C44812D75AB3C52AB9CBE4D316AC514BE09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF516EC7240CA160FD729299C926B5EDB246658A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movementSpeed = 1;
		__this->set_movementSpeed_40(1);
		// FuelLevel = 250;
		__this->set_FuelLevel_42(((int32_t)250));
		// Tank = this.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		__this->set_Tank_5(L_0);
		// TurretPivot = GameObject.Find("Turret Pivot");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral7D44B231B21B8C5C862F11B3FD9AC3DE7AFCCC78, /*hidden argument*/NULL);
		__this->set_TurretPivot_18(L_1);
		// CameraTarget = GameObject.Find("Camera Target");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteralEF516EC7240CA160FD729299C926B5EDB246658A, /*hidden argument*/NULL);
		__this->set_CameraTarget_23(L_2);
		// TeleportButton = GameObject.Find("Teleport");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral9F15E73C308C9440A4A66E65A54F37A6862F5072, /*hidden argument*/NULL);
		__this->set_TeleportButton_28(L_3);
		// ExplodeButton = GameObject.Find("Explode");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral514A8AD09809280423A1825FBE8D19B2AB1AD4F4, /*hidden argument*/NULL);
		__this->set_ExplodeButton_29(L_4);
		// PlatformButton = GameObject.Find("Platform");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28, /*hidden argument*/NULL);
		__this->set_PlatformButton_30(L_5);
		// WallButton = GameObject.Find("WallButton");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral14E90B9C92D2811F01D6D3722E851CAA0E563AD0, /*hidden argument*/NULL);
		__this->set_WallButton_31(L_6);
		// ExplodeWarning = GameObject.Find("Explode Notice");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral7976B8660EF1C71B6EE59C5AD2D870287AEB2474, /*hidden argument*/NULL);
		__this->set_ExplodeWarning_32(L_7);
		// TeleportWarning = GameObject.Find("Teleport Notice");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral577DDC14703310DA10F7B7338964154C73A53042, /*hidden argument*/NULL);
		__this->set_TeleportWarning_33(L_8);
		// ExplodeWarning.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_ExplodeWarning_32();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// TeleportWarning.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_TeleportWarning_33();
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// PauseMenu = GameObject.Find("PauseMenu");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral488AFFD1B4F87A447F078869FB10399780A338D7, /*hidden argument*/NULL);
		__this->set_PauseMenu_38(L_11);
		// PauseMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_PauseMenu_38();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// SecretMenu = GameObject.Find("SecretMenu");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteralDF4E5C44812D75AB3C52AB9CBE4D316AC514BE09, /*hidden argument*/NULL);
		__this->set_SecretMenu_47(L_13);
		// SecretMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_SecretMenu_47();
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
		// BallUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_BallUI_26();
		NullCheck(L_15);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)0, /*hidden argument*/NULL);
		// GameOverUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_GameOverUI_27();
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MilitaryTankUI::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_FixedUpdate_mE3375055164F5E3A027FB7294C1675D42A630AF3 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFECE5150801691657425A6EE0640B8DC6472AF3);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (movement.x > 0 || movement.x < 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_movement_41();
		float L_1 = L_0->get_x_2();
		if ((((float)L_1) > ((float)(0.0f))))
		{
			goto IL_0027;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_movement_41();
		float L_3 = L_2->get_x_2();
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_00b5;
		}
	}

IL_0027:
	{
		// Tank.transform.position += (movement * Time.deltaTime * movementSpeed);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Tank_5();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = L_5;
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_movement_41();
		float L_9;
		L_9 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_8, L_9, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_movementSpeed_40();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_10, ((float)((float)L_11)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_7, L_12, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_13, /*hidden argument*/NULL);
		// FuelLevel -= 2;
		int32_t L_14 = __this->get_FuelLevel_42();
		__this->set_FuelLevel_42(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2)));
		// FuelTank.text = "Fuel: " + FuelLevel;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_FuelTank_44();
		int32_t* L_16 = __this->get_address_of_FuelLevel_42();
		String_t* L_17;
		L_17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralAFECE5150801691657425A6EE0640B8DC6472AF3, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_18);
		// float FuelPercent = (FuelLevel / FuelMax);
		int32_t L_19 = __this->get_FuelLevel_42();
		float L_20 = __this->get_FuelMax_43();
		V_0 = ((float)((float)((float)((float)L_19))/(float)L_20));
		// FuelGauge.size = FuelPercent;
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_21 = __this->get_FuelGauge_45();
		float L_22 = V_0;
		NullCheck(L_21);
		Scrollbar_set_size_m93B8718BD965E7188796F588928D240730CE22E6(L_21, L_22, /*hidden argument*/NULL);
		// if (FuelLevel == 0) StopMovement();
		int32_t L_23 = __this->get_FuelLevel_42();
		if (L_23)
		{
			goto IL_00b5;
		}
	}
	{
		// if (FuelLevel == 0) StopMovement();
		MilitaryTankUI_StopMovement_m71DFBBBF554A760D64BF87AC5E0F6ABB4BD5F199(__this, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		// if (CurrentBall != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_CurrentBall_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0101;
		}
	}
	{
		// if (!speedachieved)
		bool L_26 = __this->get_speedachieved_39();
		if (L_26)
		{
			goto IL_00d2;
		}
	}
	{
		// speedachieved = false;
		__this->set_speedachieved_39((bool)0);
	}

IL_00d2:
	{
		// if (CurrentBall.GetComponent<Rigidbody>().IsSleeping())
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_CurrentBall_16();
		NullCheck(L_27);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_28;
		L_28 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_27, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		NullCheck(L_28);
		bool L_29;
		L_29 = Rigidbody_IsSleeping_mD41EDC4429411110D1FE36101C89B0277F8D62BA(L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0101;
		}
	}
	{
		// TeleportButton.GetComponent<Button>().interactable = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_TeleportButton_28();
		NullCheck(L_30);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_31;
		L_31 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_30, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_31);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_31, (bool)1, /*hidden argument*/NULL);
		// TeleportWarning.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_TeleportWarning_33();
		NullCheck(L_32);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_32, (bool)0, /*hidden argument*/NULL);
	}

IL_0101:
	{
		// }
		return;
	}
}
// System.Void MilitaryTankUI::SliderUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_SliderUpdated_m99A2E8F32BF12E71B4E7A4AFFE72D3277764623D (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE62BA2E489D4C16B62A554813DDDCBF139574B1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// PowerText.text = "Power: " + PowerBar.value;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_PowerText_7();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_PowerBar_6();
		NullCheck(L_1);
		float L_2;
		L_2 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralBE62BA2E489D4C16B62A554813DDDCBF139574B1, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void MilitaryTankUI::ResetStage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_ResetStage_m0F6597B43766E0B8888F6C9F83C6B73832A12487 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(SceneNum);
		int32_t L_0 = __this->get_SceneNum_4();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mF4561CC9E8B5EEB0FB813083642A09AA8D60CCB1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MilitaryTankUI::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_PauseGame_mC53D68E7E797A41D089F8837B69D1D6E25E334B6 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	{
		// if (PauseMenu.activeInHierarchy == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_PauseMenu_38();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// PauseMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_PauseMenu_38();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// else if (PauseMenu.activeInHierarchy == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_PauseMenu_38();
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// PauseMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_PauseMenu_38();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void MilitaryTankUI::LevelFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_LevelFinished_mC9810AA210B76D94FF23B7E06036E02161DEF32F (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// levelData.GetComponent<LevelData>().shots = Shots;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_levelData_48();
		NullCheck(L_0);
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_1;
		L_1 = GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13(L_0, /*hidden argument*/GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13_RuntimeMethod_var);
		int32_t L_2 = __this->get_Shots_37();
		NullCheck(L_1);
		L_1->set_shots_5(L_2);
		// levelData.GetComponent<LevelData>().LevelFinished();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_levelData_48();
		NullCheck(L_3);
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_4;
		L_4 = GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13(L_3, /*hidden argument*/GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13_RuntimeMethod_var);
		NullCheck(L_4);
		LevelData_LevelFinished_m2C4517B23A7CB13D09CF75142DB21E7FD20C2782(L_4, /*hidden argument*/NULL);
		// FiringUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_FiringUI_25();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// BallUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_BallUI_26();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MilitaryTankUI::NextStage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_NextStage_mD4DFAE3A49D5C4A8A136AAC89557099ACE596C7F (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(SceneNum + 1);
		int32_t L_0 = __this->get_SceneNum_4();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mF4561CC9E8B5EEB0FB813083642A09AA8D60CCB1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MilitaryTankUI::LevelSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_LevelSelect_m2BEB0785F568CB925017C57746AA272786DA0710 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(2);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mF4561CC9E8B5EEB0FB813083642A09AA8D60CCB1(2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MilitaryTankUI::TurretLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_TurretLeft_mD08B0BB76DA42373CBF99FB4F3DB06DC2D65F4F0 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	{
		// if (CurrentTurretRotation < 90)
		float L_0 = __this->get_CurrentTurretRotation_24();
		if ((!(((float)L_0) < ((float)(90.0f)))))
		{
			goto IL_009d;
		}
	}
	{
		// CurrentTurretRotation = CurrentTurretRotation + 15f;
		float L_1 = __this->get_CurrentTurretRotation_24();
		__this->set_CurrentTurretRotation_24(((float)il2cpp_codegen_add((float)L_1, (float)(15.0f))));
		// TurretPivot.transform.rotation = Quaternion.Euler(0f, 0f, CurrentTurretRotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_TurretPivot_18();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_CurrentTurretRotation_24();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_3, L_5, /*hidden argument*/NULL);
		// if (CurrentTurretRotation > 0)
		float L_6 = __this->get_CurrentTurretRotation_24();
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_009d;
		}
	}
	{
		// TurretObject.transform.rotation = Quaternion.Euler(0f, 180f, 0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_TurretObject_19();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_8, L_9, /*hidden argument*/NULL);
		// TurretPivot.transform.rotation = Quaternion.Euler(0f, 0f, CurrentTurretRotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_TurretPivot_18();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		float L_12 = __this->get_CurrentTurretRotation_24();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_11, L_13, /*hidden argument*/NULL);
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void MilitaryTankUI::TurretRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_TurretRight_m6C48299F4B785F8432E1C7554E336274C0BFEDE6 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	{
		// if (CurrentTurretRotation > -85)
		float L_0 = __this->get_CurrentTurretRotation_24();
		if ((!(((float)L_0) > ((float)(-85.0f)))))
		{
			goto IL_009d;
		}
	}
	{
		// CurrentTurretRotation = CurrentTurretRotation - 15f;
		float L_1 = __this->get_CurrentTurretRotation_24();
		__this->set_CurrentTurretRotation_24(((float)il2cpp_codegen_subtract((float)L_1, (float)(15.0f))));
		// TurretPivot.transform.rotation = Quaternion.Euler(0f, 0f, CurrentTurretRotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_TurretPivot_18();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_CurrentTurretRotation_24();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_3, L_5, /*hidden argument*/NULL);
		// if (CurrentTurretRotation < 0)
		float L_6 = __this->get_CurrentTurretRotation_24();
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_009d;
		}
	}
	{
		// TurretObject.transform.rotation = Quaternion.Euler(0f, 0f, 0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_TurretObject_19();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_8, L_9, /*hidden argument*/NULL);
		// TurretPivot.transform.rotation = Quaternion.Euler(0f, 0f, CurrentTurretRotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_TurretPivot_18();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		float L_12 = __this->get_CurrentTurretRotation_24();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_11, L_13, /*hidden argument*/NULL);
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void MilitaryTankUI::FireBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_FireBall_m110EBC6D59BD0571424F30AB65295F43B3525C19 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0_mC9399A70630B7AA20D42A414A2B1C47CD05336E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral189955CDBD1BC487E61591A4724B1BB433DB070E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFECE5150801691657425A6EE0640B8DC6472AF3);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (BallType == 1 || BallType == 0) CurrentBall = GameObject.Instantiate(GolfBall, ShootPoint.position, TurretPivot.transform.rotation);
		int32_t L_0 = __this->get_BallType_46();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_BallType_46();
		if (L_1)
		{
			goto IL_003d;
		}
	}

IL_0011:
	{
		// if (BallType == 1 || BallType == 0) CurrentBall = GameObject.Instantiate(GolfBall, ShootPoint.position, TurretPivot.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_GolfBall_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_ShootPoint_17();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_TurretPivot_18();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_2, L_4, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		__this->set_CurrentBall_16(L_8);
	}

IL_003d:
	{
		// if (BallType == 2) CurrentBall = GameObject.Instantiate(PlatBall, ShootPoint.position, TurretPivot.transform.rotation);
		int32_t L_9 = __this->get_BallType_46();
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0072;
		}
	}
	{
		// if (BallType == 2) CurrentBall = GameObject.Instantiate(PlatBall, ShootPoint.position, TurretPivot.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_PlatBall_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_ShootPoint_17();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_TurretPivot_18();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_10, L_12, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		__this->set_CurrentBall_16(L_16);
	}

IL_0072:
	{
		// if (BallType == 3) CurrentBall = GameObject.Instantiate(WallBall, ShootPoint.position, TurretPivot.transform.rotation);
		int32_t L_17 = __this->get_BallType_46();
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_00a7;
		}
	}
	{
		// if (BallType == 3) CurrentBall = GameObject.Instantiate(WallBall, ShootPoint.position, TurretPivot.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_WallBall_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = __this->get_ShootPoint_17();
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_TurretPivot_18();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_18, L_20, L_23, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		__this->set_CurrentBall_16(L_24);
	}

IL_00a7:
	{
		// if (BallType == 4) CurrentBall = GameObject.Instantiate(SpikeBall, ShootPoint.position, TurretPivot.transform.rotation);
		int32_t L_25 = __this->get_BallType_46();
		if ((!(((uint32_t)L_25) == ((uint32_t)4))))
		{
			goto IL_00dc;
		}
	}
	{
		// if (BallType == 4) CurrentBall = GameObject.Instantiate(SpikeBall, ShootPoint.position, TurretPivot.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_SpikeBall_13();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = __this->get_ShootPoint_17();
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_TurretPivot_18();
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31;
		L_31 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_26, L_28, L_31, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		__this->set_CurrentBall_16(L_32);
	}

IL_00dc:
	{
		// XLevel = PowerBar.value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_33 = __this->get_PowerBar_6();
		NullCheck(L_33);
		float L_34;
		L_34 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_33);
		__this->set_XLevel_22(L_34);
		// direction = transform.right * XLevel;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_35, /*hidden argument*/NULL);
		float L_37 = __this->get_XLevel_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_36, L_37, /*hidden argument*/NULL);
		__this->set_direction_20(L_38);
		// CurrentBall.GetComponent<Rigidbody>().AddForce(CurrentBall.transform.up * XLevel, ForceMode.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = __this->get_CurrentBall_16();
		NullCheck(L_39);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_40;
		L_40 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_39, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_CurrentBall_16();
		NullCheck(L_41);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_42, /*hidden argument*/NULL);
		float L_44 = __this->get_XLevel_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_43, L_44, /*hidden argument*/NULL);
		NullCheck(L_40);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_40, L_45, 1, /*hidden argument*/NULL);
		// CurrentBall.transform.rotation = Quaternion.Euler(0.0f, 0.0f, WindDirection);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = __this->get_CurrentBall_16();
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_46, /*hidden argument*/NULL);
		int32_t L_48 = __this->get_WindDirection_52();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_49;
		L_49 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), ((float)((float)L_48)), /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_47, L_49, /*hidden argument*/NULL);
		// CurrentBall.GetComponent<Rigidbody>().AddForce(CurrentBall.transform.up * WindPower, ForceMode.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = __this->get_CurrentBall_16();
		NullCheck(L_50);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_51;
		L_51 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_50, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = __this->get_CurrentBall_16();
		NullCheck(L_52);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_53, /*hidden argument*/NULL);
		int32_t L_55 = __this->get_WindPower_51();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_54, ((float)((float)L_55)), /*hidden argument*/NULL);
		NullCheck(L_51);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_51, L_56, 1, /*hidden argument*/NULL);
		// TeleportButton.GetComponent<Button>().interactable = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57 = __this->get_TeleportButton_28();
		NullCheck(L_57);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_58;
		L_58 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_57, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_58);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_58, (bool)0, /*hidden argument*/NULL);
		// TeleportWarning.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = __this->get_TeleportWarning_33();
		NullCheck(L_59);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_59, (bool)1, /*hidden argument*/NULL);
		// CameraTarget.GetComponent<BallChaser>().Follow(CurrentBall);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60 = __this->get_CameraTarget_23();
		NullCheck(L_60);
		BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * L_61;
		L_61 = GameObject_GetComponent_TisBallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0_mC9399A70630B7AA20D42A414A2B1C47CD05336E0(L_60, /*hidden argument*/GameObject_GetComponent_TisBallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0_mC9399A70630B7AA20D42A414A2B1C47CD05336E0_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = __this->get_CurrentBall_16();
		NullCheck(L_61);
		BallChaser_Follow_m2EA8FFA25D3EB9C6F113B02E0CFAB9526BAAE793(L_61, L_62, /*hidden argument*/NULL);
		// FiringUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_63 = __this->get_FiringUI_25();
		NullCheck(L_63);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_63, (bool)0, /*hidden argument*/NULL);
		// BallUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = __this->get_BallUI_26();
		NullCheck(L_64);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_64, (bool)1, /*hidden argument*/NULL);
		// if (BallType == 1 || BallType == 0)
		int32_t L_65 = __this->get_BallType_46();
		if ((((int32_t)L_65) == ((int32_t)1)))
		{
			goto IL_01e4;
		}
	}
	{
		int32_t L_66 = __this->get_BallType_46();
		if (L_66)
		{
			goto IL_0208;
		}
	}

IL_01e4:
	{
		// ExplodeButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67 = __this->get_ExplodeButton_29();
		NullCheck(L_67);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_67, (bool)1, /*hidden argument*/NULL);
		// PlatformButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = __this->get_PlatformButton_30();
		NullCheck(L_68);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_68, (bool)0, /*hidden argument*/NULL);
		// WallButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69 = __this->get_WallButton_31();
		NullCheck(L_69);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_69, (bool)0, /*hidden argument*/NULL);
	}

IL_0208:
	{
		// if (BallType == 2)
		int32_t L_70 = __this->get_BallType_46();
		if ((!(((uint32_t)L_70) == ((uint32_t)2))))
		{
			goto IL_0235;
		}
	}
	{
		// ExplodeButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71 = __this->get_ExplodeButton_29();
		NullCheck(L_71);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_71, (bool)0, /*hidden argument*/NULL);
		// PlatformButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = __this->get_PlatformButton_30();
		NullCheck(L_72);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_72, (bool)1, /*hidden argument*/NULL);
		// WallButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = __this->get_WallButton_31();
		NullCheck(L_73);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_73, (bool)0, /*hidden argument*/NULL);
	}

IL_0235:
	{
		// if (BallType == 3)
		int32_t L_74 = __this->get_BallType_46();
		if ((!(((uint32_t)L_74) == ((uint32_t)3))))
		{
			goto IL_0262;
		}
	}
	{
		// ExplodeButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_75 = __this->get_ExplodeButton_29();
		NullCheck(L_75);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_75, (bool)0, /*hidden argument*/NULL);
		// PlatformButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = __this->get_PlatformButton_30();
		NullCheck(L_76);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_76, (bool)0, /*hidden argument*/NULL);
		// WallButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77 = __this->get_WallButton_31();
		NullCheck(L_77);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_77, (bool)1, /*hidden argument*/NULL);
	}

IL_0262:
	{
		// if (BallType == 4)
		int32_t L_78 = __this->get_BallType_46();
		if ((!(((uint32_t)L_78) == ((uint32_t)4))))
		{
			goto IL_028f;
		}
	}
	{
		// ExplodeButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79 = __this->get_ExplodeButton_29();
		NullCheck(L_79);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_79, (bool)1, /*hidden argument*/NULL);
		// PlatformButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80 = __this->get_PlatformButton_30();
		NullCheck(L_80);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_80, (bool)0, /*hidden argument*/NULL);
		// WallButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_81 = __this->get_WallButton_31();
		NullCheck(L_81);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_81, (bool)0, /*hidden argument*/NULL);
	}

IL_028f:
	{
		// movement = new Vector3(0f, 0f, 0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		memset((&L_82), 0, sizeof(L_82));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_82), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_movement_41(L_82);
		// FuelLevel = (int)FuelMax;
		float L_83 = __this->get_FuelMax_43();
		__this->set_FuelLevel_42(il2cpp_codegen_cast_double_to_int<int32_t>(L_83));
		// FuelTank.text = "Fuel: " + FuelLevel;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_84 = __this->get_FuelTank_44();
		int32_t* L_85 = __this->get_address_of_FuelLevel_42();
		String_t* L_86;
		L_86 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_85, /*hidden argument*/NULL);
		String_t* L_87;
		L_87 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralAFECE5150801691657425A6EE0640B8DC6472AF3, L_86, /*hidden argument*/NULL);
		NullCheck(L_84);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_84, L_87);
		// float FuelPercent = (FuelLevel / FuelMax);
		int32_t L_88 = __this->get_FuelLevel_42();
		float L_89 = __this->get_FuelMax_43();
		V_0 = ((float)((float)((float)((float)L_88))/(float)L_89));
		// FuelGauge.size = FuelPercent;
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_90 = __this->get_FuelGauge_45();
		float L_91 = V_0;
		NullCheck(L_90);
		Scrollbar_set_size_m93B8718BD965E7188796F588928D240730CE22E6(L_90, L_91, /*hidden argument*/NULL);
		// Shots++;
		int32_t L_92 = __this->get_Shots_37();
		__this->set_Shots_37(((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1)));
		// ShotCounter.text = "Strokes: " + Shots;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_93 = __this->get_ShotCounter_36();
		int32_t* L_94 = __this->get_address_of_Shots_37();
		String_t* L_95;
		L_95 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_94, /*hidden argument*/NULL);
		String_t* L_96;
		L_96 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral189955CDBD1BC487E61591A4724B1BB433DB070E, L_95, /*hidden argument*/NULL);
		NullCheck(L_93);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_93, L_96);
		// if (Balls < 2)
		int32_t L_97 = __this->get_Balls_35();
		if ((((int32_t)L_97) >= ((int32_t)2)))
		{
			goto IL_03a4;
		}
	}
	{
		// if (BallType == 1 || BallType == 0) ExplodeButton.GetComponent<Button>().interactable = false;
		int32_t L_98 = __this->get_BallType_46();
		if ((((int32_t)L_98) == ((int32_t)1)))
		{
			goto IL_0339;
		}
	}
	{
		int32_t L_99 = __this->get_BallType_46();
		if (L_99)
		{
			goto IL_034a;
		}
	}

IL_0339:
	{
		// if (BallType == 1 || BallType == 0) ExplodeButton.GetComponent<Button>().interactable = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100 = __this->get_ExplodeButton_29();
		NullCheck(L_100);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_101;
		L_101 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_100, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_101);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_101, (bool)0, /*hidden argument*/NULL);
	}

IL_034a:
	{
		// if (BallType == 2) PlatformButton.GetComponent<Button>().interactable = false;
		int32_t L_102 = __this->get_BallType_46();
		if ((!(((uint32_t)L_102) == ((uint32_t)2))))
		{
			goto IL_0364;
		}
	}
	{
		// if (BallType == 2) PlatformButton.GetComponent<Button>().interactable = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_103 = __this->get_PlatformButton_30();
		NullCheck(L_103);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_104;
		L_104 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_103, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_104);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_104, (bool)0, /*hidden argument*/NULL);
	}

IL_0364:
	{
		// if (BallType == 3) WallButton.GetComponent<Button>().interactable = false;
		int32_t L_105 = __this->get_BallType_46();
		if ((!(((uint32_t)L_105) == ((uint32_t)3))))
		{
			goto IL_037e;
		}
	}
	{
		// if (BallType == 3) WallButton.GetComponent<Button>().interactable = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_106 = __this->get_WallButton_31();
		NullCheck(L_106);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_107;
		L_107 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_106, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_107);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_107, (bool)0, /*hidden argument*/NULL);
	}

IL_037e:
	{
		// if (BallType == 4) ExplodeButton.GetComponent<Button>().interactable = false;
		int32_t L_108 = __this->get_BallType_46();
		if ((!(((uint32_t)L_108) == ((uint32_t)4))))
		{
			goto IL_0398;
		}
	}
	{
		// if (BallType == 4) ExplodeButton.GetComponent<Button>().interactable = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_109 = __this->get_ExplodeButton_29();
		NullCheck(L_109);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_110;
		L_110 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_109, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_110);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_110, (bool)0, /*hidden argument*/NULL);
	}

IL_0398:
	{
		// ExplodeWarning.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_111 = __this->get_ExplodeWarning_32();
		NullCheck(L_111);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_111, (bool)1, /*hidden argument*/NULL);
	}

IL_03a4:
	{
		// }
		return;
	}
}
// System.Void MilitaryTankUI::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_Explode_mB684B969540F5AE087A6338B7655C61710DC620F (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_mDB85AB7B0E848FB670787AACE9F6412274FDDCD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8224EB348914F18B459158B0498D27694A7CD12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD69796AFCAE5DA2487132D2132AFC2BC3AB2532);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BallType == 1 || BallType == 0)
		int32_t L_0 = __this->get_BallType_46();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_BallType_46();
		if (L_1)
		{
			goto IL_0063;
		}
	}

IL_0011:
	{
		// Instantiate(Explosion, CurrentBall.transform.position, CurrentBall.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Explosion_14();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_CurrentBall_16();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_CurrentBall_16();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_2, L_5, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		// if (HeadManager.Instance != null)
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_10;
		L_10 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		// HeadManager.Instance.gameObject.GetComponent<AudioManager>().PlaySound("bomb");
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_12;
		L_12 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_14;
		L_14 = GameObject_GetComponent_TisAudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_mDB85AB7B0E848FB670787AACE9F6412274FDDCD9(L_13, /*hidden argument*/GameObject_GetComponent_TisAudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_mDB85AB7B0E848FB670787AACE9F6412274FDDCD9_RuntimeMethod_var);
		NullCheck(L_14);
		AudioManager_PlaySound_mC2A55DCCB9581CE5B6C04F592D049F3C50620707(L_14, _stringLiteralD8224EB348914F18B459158B0498D27694A7CD12, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// if (BallType == 2) Instantiate(Platform, CurrentBall.transform.position, Tank.transform.rotation);
		int32_t L_15 = __this->get_BallType_46();
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_0098;
		}
	}
	{
		// if (BallType == 2) Instantiate(Platform, CurrentBall.transform.position, Tank.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_Platform_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_CurrentBall_16();
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_Tank_5();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_16, L_19, L_22, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
	}

IL_0098:
	{
		// if (BallType == 3) Instantiate(Wall, CurrentBall.transform.position, Quaternion.Euler(0f, 0f, 90f));
		int32_t L_24 = __this->get_BallType_46();
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_00d1;
		}
	}
	{
		// if (BallType == 3) Instantiate(Wall, CurrentBall.transform.position, Quaternion.Euler(0f, 0f, 90f));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_Wall_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_CurrentBall_16();
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
		L_29 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_25, L_28, L_29, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
	}

IL_00d1:
	{
		// if (BallType == 4) Instantiate(Explosion, CurrentBall.transform.position, CurrentBall.transform.rotation);
		int32_t L_31 = __this->get_BallType_46();
		if ((!(((uint32_t)L_31) == ((uint32_t)4))))
		{
			goto IL_0106;
		}
	}
	{
		// if (BallType == 4) Instantiate(Explosion, CurrentBall.transform.position, CurrentBall.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_Explosion_14();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_CurrentBall_16();
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_CurrentBall_16();
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38;
		L_38 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_32, L_35, L_38, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
	}

IL_0106:
	{
		// Destroy(CurrentBall);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = __this->get_CurrentBall_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_40, /*hidden argument*/NULL);
		// if (BallType == 1 || BallType == 4 && ScreenShakeOn)
		int32_t L_41 = __this->get_BallType_46();
		if ((((int32_t)L_41) == ((int32_t)1)))
		{
			goto IL_012b;
		}
	}
	{
		int32_t L_42 = __this->get_BallType_46();
		if ((!(((uint32_t)L_42) == ((uint32_t)4))))
		{
			goto IL_0138;
		}
	}
	{
		bool L_43 = __this->get_ScreenShakeOn_50();
		if (!L_43)
		{
			goto IL_0138;
		}
	}

IL_012b:
	{
		// StartCoroutine(ScreenShake());
		RuntimeObject* L_44;
		L_44 = MilitaryTankUI_ScreenShake_mAF01F94215BBB954D0EEDB31EAE6E4063C737C63(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_45;
		L_45 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_44, /*hidden argument*/NULL);
	}

IL_0138:
	{
		// Balls--;
		int32_t L_46 = __this->get_Balls_35();
		__this->set_Balls_35(((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)1)));
		// BallCounter.text = "Balls: " + Balls;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_47 = __this->get_BallCounter_34();
		int32_t* L_48 = __this->get_address_of_Balls_35();
		String_t* L_49;
		L_49 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_48, /*hidden argument*/NULL);
		String_t* L_50;
		L_50 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralFD69796AFCAE5DA2487132D2132AFC2BC3AB2532, L_49, /*hidden argument*/NULL);
		NullCheck(L_47);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_47, L_50);
		// FiringUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = __this->get_FiringUI_25();
		NullCheck(L_51);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_51, (bool)1, /*hidden argument*/NULL);
		// BallUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = __this->get_BallUI_26();
		NullCheck(L_52);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_52, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MilitaryTankUI::ScreenShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MilitaryTankUI_ScreenShake_mAF01F94215BBB954D0EEDB31EAE6E4063C737C63 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3 * L_0 = (U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3 *)il2cpp_codegen_object_new(U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3_il2cpp_TypeInfo_var);
		U3CScreenShakeU3Ed__63__ctor_m851482DC9BF1E9D9D37A49EA82CE7E86C739A001(L_0, 0, /*hidden argument*/NULL);
		U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void MilitaryTankUI::NoEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_NoEffect_m44C7FF19E96E235397E5B4B8994326D4D8986EAF (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD69796AFCAE5DA2487132D2132AFC2BC3AB2532);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(CurrentBall);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_CurrentBall_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_0, /*hidden argument*/NULL);
		// Balls--;
		int32_t L_1 = __this->get_Balls_35();
		__this->set_Balls_35(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		// BallCounter.text = "Balls: " + Balls;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_BallCounter_34();
		int32_t* L_3 = __this->get_address_of_Balls_35();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralFD69796AFCAE5DA2487132D2132AFC2BC3AB2532, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// FiringUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_FiringUI_25();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// BallUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_BallUI_26();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// if (Balls == 0)
		int32_t L_8 = __this->get_Balls_35();
		if (L_8)
		{
			goto IL_006b;
		}
	}
	{
		// FiringUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_FiringUI_25();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// StageLost();
		MilitaryTankUI_StageLost_m5A9EF5DABAAEAD540227F27DFBE615C60FCF226D(__this, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void MilitaryTankUI::StageLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_StageLost_m5A9EF5DABAAEAD540227F27DFBE615C60FCF226D (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral514C5B323EB8FE02AD37D6142C456C4BFE073CA4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Stage lost, idiot!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral514C5B323EB8FE02AD37D6142C456C4BFE073CA4, /*hidden argument*/NULL);
		// GameOverUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GameOverUI_27();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MilitaryTankUI::Teleport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_Teleport_m8CEDD58A7FE77D107733ED7297B38A347F3E5450 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(TeleportEffect, CurrentBall.transform.position, CurrentBall.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_TeleportEffect_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_CurrentBall_16();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_CurrentBall_16();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_0, L_3, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		// Tank.transform.position = CurrentBall.transform.position + new Vector3(0, 1, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_Tank_5();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_CurrentBall_16();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_14, /*hidden argument*/NULL);
		// Destroy(CurrentBall);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_CurrentBall_16();
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_15, /*hidden argument*/NULL);
		// FiringUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_FiringUI_25();
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)1, /*hidden argument*/NULL);
		// BallUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_BallUI_26();
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MilitaryTankUI::MoveLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_MoveLeft_mC2B1C2BA28AF672C4A7656E767B2F360AA6E752B (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_mDB85AB7B0E848FB670787AACE9F6412274FDDCD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91C0C3D47449DB2E96449F1DAA6C34E8FCC2A37D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (FuelLevel > 0)
		int32_t L_0 = __this->get_FuelLevel_42();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		// movement = new Vector3(-5f, 0f, 0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (-5.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_movement_41(L_1);
		// if (HeadManager.Instance != null)
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_2;
		L_2 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		// HeadManager.Instance.gameObject.GetComponent<AudioManager>().PlaySound("TreadSound");
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_4;
		L_4 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_6;
		L_6 = GameObject_GetComponent_TisAudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_mDB85AB7B0E848FB670787AACE9F6412274FDDCD9(L_5, /*hidden argument*/GameObject_GetComponent_TisAudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_mDB85AB7B0E848FB670787AACE9F6412274FDDCD9_RuntimeMethod_var);
		NullCheck(L_6);
		AudioManager_PlaySound_mC2A55DCCB9581CE5B6C04F592D049F3C50620707(L_6, _stringLiteral91C0C3D47449DB2E96449F1DAA6C34E8FCC2A37D, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void MilitaryTankUI::MoveRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_MoveRight_m67D43149F4D0C9C118A57A0CC125915C2E4FCE29 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_mDB85AB7B0E848FB670787AACE9F6412274FDDCD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91C0C3D47449DB2E96449F1DAA6C34E8FCC2A37D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (FuelLevel > 0)
		int32_t L_0 = __this->get_FuelLevel_42();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		// movement = new Vector3(5f, 0f, 0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (5.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_movement_41(L_1);
		// if (HeadManager.Instance != null)
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_2;
		L_2 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		// HeadManager.Instance.gameObject.GetComponent<AudioManager>().PlaySound("TreadSound");
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_4;
		L_4 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_6;
		L_6 = GameObject_GetComponent_TisAudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_mDB85AB7B0E848FB670787AACE9F6412274FDDCD9(L_5, /*hidden argument*/GameObject_GetComponent_TisAudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_mDB85AB7B0E848FB670787AACE9F6412274FDDCD9_RuntimeMethod_var);
		NullCheck(L_6);
		AudioManager_PlaySound_mC2A55DCCB9581CE5B6C04F592D049F3C50620707(L_6, _stringLiteral91C0C3D47449DB2E96449F1DAA6C34E8FCC2A37D, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void MilitaryTankUI::StopMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_StopMovement_m71DFBBBF554A760D64BF87AC5E0F6ABB4BD5F199 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_mDB85AB7B0E848FB670787AACE9F6412274FDDCD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91C0C3D47449DB2E96449F1DAA6C34E8FCC2A37D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movement = new Vector3(0f, 0f, 0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_movement_41(L_0);
		// if (HeadManager.Instance != null)
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_1;
		L_1 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// HeadManager.Instance.gameObject.GetComponent<AudioManager>().StopSound("TreadSound");
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_3;
		L_3 = HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline(/*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_5;
		L_5 = GameObject_GetComponent_TisAudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_mDB85AB7B0E848FB670787AACE9F6412274FDDCD9(L_4, /*hidden argument*/GameObject_GetComponent_TisAudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_mDB85AB7B0E848FB670787AACE9F6412274FDDCD9_RuntimeMethod_var);
		NullCheck(L_5);
		AudioManager_StopSound_m12550FA2C7345075AF9064F1DA4FC7C695018608(L_5, _stringLiteral91C0C3D47449DB2E96449F1DAA6C34E8FCC2A37D, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void MilitaryTankUI::ToggleFiringUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_ToggleFiringUI_mE1505E3A6BC5A085FD44F3325F7B334E09BCF0A1 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	{
		// if (FiringUI.activeInHierarchy == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_FiringUI_25();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// FiringUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_FiringUI_25();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// else if (FiringUI.activeInHierarchy == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_FiringUI_25();
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// FiringUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_FiringUI_25();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void MilitaryTankUI::ToggleSecrets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_ToggleSecrets_mD1CAA236EC5C882EB7075141A3ED56A4D617584E (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	{
		// if (SecretMenu.activeInHierarchy == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_SecretMenu_47();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// SecretMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_SecretMenu_47();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// else if (SecretMenu.activeInHierarchy == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_SecretMenu_47();
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// SecretMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_SecretMenu_47();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void MilitaryTankUI::InfiniteBalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_InfiniteBalls_mB009D4529C4C30A7A4BFF17A098045A26C94BE5C (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9BAE9F05831E99523DAFF4E1B43454063ABEB53);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Balls = 9999;
		__this->set_Balls_35(((int32_t)9999));
		// BallCounter.text = "Infinite Balls";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_BallCounter_34();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralE9BAE9F05831E99523DAFF4E1B43454063ABEB53);
		// }
		return;
	}
}
// System.Void MilitaryTankUI::BallTypeSet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	{
		// BallType = num;
		int32_t L_0 = ___num0;
		__this->set_BallType_46(L_0);
		// }
		return;
	}
}
// System.Void MilitaryTankUI::GainBall(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_GainBall_m9BFA0204BCF5041AFEB319FDC5E9BE45574C5F48 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, int32_t ___ballgain0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD69796AFCAE5DA2487132D2132AFC2BC3AB2532);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Balls += ballgain;
		int32_t L_0 = __this->get_Balls_35();
		int32_t L_1 = ___ballgain0;
		__this->set_Balls_35(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// BallCounter.text = "Balls: " + Balls;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_BallCounter_34();
		int32_t* L_3 = __this->get_address_of_Balls_35();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralFD69796AFCAE5DA2487132D2132AFC2BC3AB2532, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void MilitaryTankUI::LoseStrokes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI_LoseStrokes_m1669F95B813B8664D34C9B35BD11798A55985115 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, int32_t ___strokelost0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral189955CDBD1BC487E61591A4724B1BB433DB070E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Shots -= strokelost;
		int32_t L_0 = __this->get_Shots_37();
		int32_t L_1 = ___strokelost0;
		__this->set_Shots_37(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// ShotCounter.text = "Strokes: " + Shots;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_ShotCounter_36();
		int32_t* L_3 = __this->get_address_of_Shots_37();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral189955CDBD1BC487E61591A4724B1BB433DB070E, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void MilitaryTankUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MilitaryTankUI__ctor_m5FAED1A3503FE6A04F386946D2F391FE025C8682 (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, const RuntimeMethod* method)
{
	{
		// private float CurrentTurretRotation = -45;
		__this->set_CurrentTurretRotation_24((-45.0f));
		// private int Balls = 10;
		__this->set_Balls_35(((int32_t)10));
		// private int FuelLevel = 50;
		__this->set_FuelLevel_42(((int32_t)50));
		// private float FuelMax = 250;
		__this->set_FuelMax_43((250.0f));
		// private int BallType = 1;
		__this->set_BallType_46(1);
		// private bool ScreenShakeOn = true;
		__this->set_ScreenShakeOn_50((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OutofBounds::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutofBounds_Start_mD1AD289962B620D809AFE4F66AC1A1D9B0DEF096 (OutofBounds_t1A6BD6295712FB12F161A4E09AF6FCE96092EE23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6E50D3F729B11B2ABE38C96352EB1059A766059);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Tank = GameObject.Find("Tank");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D, /*hidden argument*/NULL);
		__this->set_Tank_4(L_0);
		// RespawnPoint = GameObject.Find("RespawnPoint");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteralE6E50D3F729B11B2ABE38C96352EB1059A766059, /*hidden argument*/NULL);
		__this->set_RespawnPoint_5(L_1);
		// }
		return;
	}
}
// System.Void OutofBounds::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutofBounds_OnTriggerEnter_m06F6A41E6DB4ADF8485EEF12D380C6D9E85862F4 (OutofBounds_t1A6BD6295712FB12F161A4E09AF6FCE96092EE23 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Ball")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_2, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		// if (Tank.GetComponent<TankUI>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Tank_4();
		NullCheck(L_4);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_5;
		L_5 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_4, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// Tank.GetComponent<TankUI>().NoEffect();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_Tank_4();
		NullCheck(L_7);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_8;
		L_8 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_7, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		NullCheck(L_8);
		TankUI_NoEffect_m3426B6CDB870E7C4A7A302C63D844E35DA8EBD44(L_8, /*hidden argument*/NULL);
		// }
		goto IL_004c;
	}

IL_003c:
	{
		// Tank.GetComponent<MilitaryTankUI>().NoEffect();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_Tank_4();
		NullCheck(L_9);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_10;
		L_10 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_9, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_10);
		MilitaryTankUI_NoEffect_m44C7FF19E96E235397E5B4B8994326D4D8986EAF(L_10, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// if (other.gameObject == Tank)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_11 = ___other0;
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_Tank_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00b3;
		}
	}
	{
		// Tank.transform.position = RespawnPoint.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_Tank_4();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_RespawnPoint_5();
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_19, /*hidden argument*/NULL);
		// if (Tank.GetComponent<TankUI>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_Tank_4();
		NullCheck(L_20);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_21;
		L_21 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_20, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_21, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00a3;
		}
	}
	{
		// Tank.GetComponent<TankUI>().StopMovement();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_Tank_4();
		NullCheck(L_23);
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_24;
		L_24 = GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2(L_23, /*hidden argument*/GameObject_GetComponent_TisTankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08_m2EA45E0492185C7B5A77F9770DC9CAE5F470E3B2_RuntimeMethod_var);
		NullCheck(L_24);
		TankUI_StopMovement_mC91CEDF22B4C4172FFEF1299312B1724E272C984(L_24, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a3:
	{
		// Tank.GetComponent<MilitaryTankUI>().StopMovement();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_Tank_4();
		NullCheck(L_25);
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_26;
		L_26 = GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C(L_25, /*hidden argument*/GameObject_GetComponent_TisMilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113_m3493C5D1A325E47A6BC093D3C76505AAA6953E8C_RuntimeMethod_var);
		NullCheck(L_26);
		MilitaryTankUI_StopMovement_m71DFBBBF554A760D64BF87AC5E0F6ABB4BD5F199(L_26, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Void OutofBounds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutofBounds__ctor_m8F5A3AAEDAEB568B995F95BECA8095CB6EC734A4 (OutofBounds_t1A6BD6295712FB12F161A4E09AF6FCE96092EE23 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rotate::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_FixedUpdate_mF0A3C36692B5A43C722469B4F0851FD87B471CCB (Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789 * __this, const RuntimeMethod* method)
{
	{
		// twist += 1;
		float L_0 = __this->get_twist_4();
		__this->set_twist_4(((float)il2cpp_codegen_add((float)L_0, (float)(1.0f))));
		// this.transform.eulerAngles = new Vector3(0f, twist, 0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_2 = __this->get_twist_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (0.0f), L_2, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Rotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate__ctor_mAB2884DA9234D7A6485C5662D97205C92CA9B9C4 (Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sand::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sand_OnTriggerEnter_m58841FAE9DA4FEA0F6A519AEFC19AB15A8944161 (Sand_tCCCADCA1E08FB833B428151FCBD533F723C155CD * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Ball")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_2, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// Ball = other.gameObject;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___other0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		__this->set_Ball_5(L_5);
		// Ball.GetComponent<Rigidbody>().drag = 5f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_Ball_5();
		NullCheck(L_6);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_7;
		L_7 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_6, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		NullCheck(L_7);
		Rigidbody_set_drag_m60E39BE31529DE5163116785A69FACC77C52DA98(L_7, (5.0f), /*hidden argument*/NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Sand::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sand_OnTriggerExit_m4AE592AC4FF6947E3406D939309249B37565CE8F (Sand_tCCCADCA1E08FB833B428151FCBD533F723C155CD * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Ball")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_2, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// Ball = other.gameObject;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___other0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		__this->set_Ball_5(L_5);
		// Ball.GetComponent<Rigidbody>().drag = 0.6f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_Ball_5();
		NullCheck(L_6);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_7;
		L_7 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_6, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		NullCheck(L_7);
		Rigidbody_set_drag_m60E39BE31529DE5163116785A69FACC77C52DA98(L_7, (0.600000024f), /*hidden argument*/NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Sand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sand__ctor_m2349B6639D92124F3747573CD027C84C0C5E37A8 (Sand_tCCCADCA1E08FB833B428151FCBD533F723C155CD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sound__ctor_mEA0B0D2FBD514F91C21900B0BB8679CD78843FCD (Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StarUpProcess::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarUpProcess_Start_mA93AA43EF9A1BA4AFF40A4A3B826726246A11AF6 (StarUpProcess_tF1E82E0D3882535952A8C97B3BCEF3077E13D3BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mF4561CC9E8B5EEB0FB813083642A09AA8D60CCB1(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StarUpProcess::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarUpProcess_Update_mB964AD7CDF80416925FABCD54CAF2E03ED535F38 (StarUpProcess_tF1E82E0D3882535952A8C97B3BCEF3077E13D3BF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void StarUpProcess::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarUpProcess__ctor_m1B32A44C0826547A62DFF8E47D3FF93A697F5ACC (StarUpProcess_tF1E82E0D3882535952A8C97B3BCEF3077E13D3BF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TankUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_Awake_m1A4AD9EEC4A4EB8BC7C3D8E9BFEE05B31186DBD7 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AECF0377C1CBC5351D8AC05FD10EDD525281DE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E695981582357762AA73756E8B4E67C77308A9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32EADFF94258C3734CED2CDE70F4733B9D5611A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FiringUI = GameObject.Find("Movement UI");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteralC32EADFF94258C3734CED2CDE70F4733B9D5611A, /*hidden argument*/NULL);
		__this->set_FiringUI_24(L_0);
		// BallUI = GameObject.Find("BallUI");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral5E695981582357762AA73756E8B4E67C77308A9E, /*hidden argument*/NULL);
		__this->set_BallUI_25(L_1);
		// GameOverUI = GameObject.Find("GameOverUI");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral5AECF0377C1CBC5351D8AC05FD10EDD525281DE8, /*hidden argument*/NULL);
		__this->set_GameOverUI_26(L_2);
		// LevelName = levelData.GetComponent<LevelData>().LevelName;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_levelData_47();
		NullCheck(L_3);
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_4;
		L_4 = GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13(L_3, /*hidden argument*/GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5 = L_4->get_LevelName_7();
		__this->set_LevelName_48(L_5);
		// }
		return;
	}
}
// System.Void TankUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_Start_m31CA87406BE3395F3F9B8D8E396849468BFDDAEF (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m525EA90F66B89CBDB092C15CE0CBE4480F723A6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E90B9C92D2811F01D6D3722E851CAA0E563AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral488AFFD1B4F87A447F078869FB10399780A338D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral514A8AD09809280423A1825FBE8D19B2AB1AD4F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral577DDC14703310DA10F7B7338964154C73A53042);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7976B8660EF1C71B6EE59C5AD2D870287AEB2474);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D44B231B21B8C5C862F11B3FD9AC3DE7AFCCC78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F15E73C308C9440A4A66E65A54F37A6862F5072);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF4E5C44812D75AB3C52AB9CBE4D316AC514BE09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF516EC7240CA160FD729299C926B5EDB246658A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movementSpeed = 1;
		__this->set_movementSpeed_39(1);
		// FuelLevel = 250;
		__this->set_FuelLevel_41(((int32_t)250));
		// Tank = this.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		__this->set_Tank_5(L_0);
		// TurretPivot = GameObject.Find("Turret Pivot");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral7D44B231B21B8C5C862F11B3FD9AC3DE7AFCCC78, /*hidden argument*/NULL);
		__this->set_TurretPivot_18(L_1);
		// CameraTarget = GameObject.Find("Camera Target");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteralEF516EC7240CA160FD729299C926B5EDB246658A, /*hidden argument*/NULL);
		__this->set_CameraTarget_22(L_2);
		// TeleportButton = GameObject.Find("Teleport");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral9F15E73C308C9440A4A66E65A54F37A6862F5072, /*hidden argument*/NULL);
		__this->set_TeleportButton_27(L_3);
		// ExplodeButton = GameObject.Find("Explode");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral514A8AD09809280423A1825FBE8D19B2AB1AD4F4, /*hidden argument*/NULL);
		__this->set_ExplodeButton_28(L_4);
		// PlatformButton = GameObject.Find("Platform");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28, /*hidden argument*/NULL);
		__this->set_PlatformButton_29(L_5);
		// WallButton = GameObject.Find("WallButton");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral14E90B9C92D2811F01D6D3722E851CAA0E563AD0, /*hidden argument*/NULL);
		__this->set_WallButton_30(L_6);
		// ExplodeWarning = GameObject.Find("Explode Notice");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral7976B8660EF1C71B6EE59C5AD2D870287AEB2474, /*hidden argument*/NULL);
		__this->set_ExplodeWarning_31(L_7);
		// TeleportWarning = GameObject.Find("Teleport Notice");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral577DDC14703310DA10F7B7338964154C73A53042, /*hidden argument*/NULL);
		__this->set_TeleportWarning_32(L_8);
		// ExplodeWarning.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_ExplodeWarning_31();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// TeleportWarning.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_TeleportWarning_32();
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// PauseMenu = GameObject.Find("PauseMenu");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral488AFFD1B4F87A447F078869FB10399780A338D7, /*hidden argument*/NULL);
		__this->set_PauseMenu_37(L_11);
		// PauseMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_PauseMenu_37();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// SecretMenu = GameObject.Find("SecretMenu");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteralDF4E5C44812D75AB3C52AB9CBE4D316AC514BE09, /*hidden argument*/NULL);
		__this->set_SecretMenu_46(L_13);
		// SecretMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_SecretMenu_46();
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
		// BallUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_BallUI_25();
		NullCheck(L_15);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)0, /*hidden argument*/NULL);
		// GameOverUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_GameOverUI_26();
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)0, /*hidden argument*/NULL);
		// MainCamera = GameObject.FindObjectOfType<Camera>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_17;
		L_17 = Object_FindObjectOfType_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m525EA90F66B89CBDB092C15CE0CBE4480F723A6C(/*hidden argument*/Object_FindObjectOfType_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m525EA90F66B89CBDB092C15CE0CBE4480F723A6C_RuntimeMethod_var);
		__this->set_MainCamera_50(L_17);
		// }
		return;
	}
}
// System.Void TankUI::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_FixedUpdate_m9A9B8BBA399A8829B929423DA2823F2E48144888 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFECE5150801691657425A6EE0640B8DC6472AF3);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (movement.x > 0 || movement.x < 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_movement_40();
		float L_1 = L_0->get_x_2();
		if ((((float)L_1) > ((float)(0.0f))))
		{
			goto IL_0027;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_movement_40();
		float L_3 = L_2->get_x_2();
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_00b5;
		}
	}

IL_0027:
	{
		// Tank.transform.position += (movement * Time.deltaTime * movementSpeed);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Tank_5();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = L_5;
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_movement_40();
		float L_9;
		L_9 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_8, L_9, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_movementSpeed_39();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_10, ((float)((float)L_11)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_7, L_12, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_13, /*hidden argument*/NULL);
		// FuelLevel--;
		int32_t L_14 = __this->get_FuelLevel_41();
		__this->set_FuelLevel_41(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)));
		// FuelTank.text = "Fuel: " + FuelLevel;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_FuelTank_43();
		int32_t* L_16 = __this->get_address_of_FuelLevel_41();
		String_t* L_17;
		L_17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralAFECE5150801691657425A6EE0640B8DC6472AF3, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_18);
		// float FuelPercent = (FuelLevel / FuelMax);
		int32_t L_19 = __this->get_FuelLevel_41();
		float L_20 = __this->get_FuelMax_42();
		V_0 = ((float)((float)((float)((float)L_19))/(float)L_20));
		// FuelGauge.size = FuelPercent;
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_21 = __this->get_FuelGauge_44();
		float L_22 = V_0;
		NullCheck(L_21);
		Scrollbar_set_size_m93B8718BD965E7188796F588928D240730CE22E6(L_21, L_22, /*hidden argument*/NULL);
		// if (FuelLevel == 0) StopMovement();
		int32_t L_23 = __this->get_FuelLevel_41();
		if (L_23)
		{
			goto IL_00b5;
		}
	}
	{
		// if (FuelLevel == 0) StopMovement();
		TankUI_StopMovement_mC91CEDF22B4C4172FFEF1299312B1724E272C984(__this, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		// if (CurrentBall != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_CurrentBall_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0101;
		}
	}
	{
		// if (!speedachieved)
		bool L_26 = __this->get_speedachieved_38();
		if (L_26)
		{
			goto IL_00d2;
		}
	}
	{
		// speedachieved = false;
		__this->set_speedachieved_38((bool)0);
	}

IL_00d2:
	{
		// if (CurrentBall.GetComponent<Rigidbody>().IsSleeping())
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_CurrentBall_16();
		NullCheck(L_27);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_28;
		L_28 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_27, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		NullCheck(L_28);
		bool L_29;
		L_29 = Rigidbody_IsSleeping_mD41EDC4429411110D1FE36101C89B0277F8D62BA(L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0101;
		}
	}
	{
		// TeleportButton.GetComponent<Button>().interactable = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_TeleportButton_27();
		NullCheck(L_30);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_31;
		L_31 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_30, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_31);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_31, (bool)1, /*hidden argument*/NULL);
		// TeleportWarning.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_TeleportWarning_32();
		NullCheck(L_32);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_32, (bool)0, /*hidden argument*/NULL);
	}

IL_0101:
	{
		// }
		return;
	}
}
// System.Void TankUI::SliderUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_SliderUpdated_mFBED5B3FCAB0E795FA831EEDF1DA13C8DC254C81 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE62BA2E489D4C16B62A554813DDDCBF139574B1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// PowerText.text = "Power: " + PowerBar.value;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_PowerText_7();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_PowerBar_6();
		NullCheck(L_1);
		float L_2;
		L_2 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralBE62BA2E489D4C16B62A554813DDDCBF139574B1, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void TankUI::ResetStage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_ResetStage_mFA015E1668C4A1A3C354137A759C0CA1975CFF7E (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(SceneNum);
		int32_t L_0 = __this->get_SceneNum_4();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mF4561CC9E8B5EEB0FB813083642A09AA8D60CCB1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankUI::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_PauseGame_mE1BB5E3C5835F547CD882CD0E28E28ECAB606C8A (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	{
		// if (PauseMenu.activeInHierarchy == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_PauseMenu_37();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// PauseMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_PauseMenu_37();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// else if (PauseMenu.activeInHierarchy == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_PauseMenu_37();
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// PauseMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_PauseMenu_37();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void TankUI::LevelFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_LevelFinished_m9E54DAD6C2443EA0FA9407041B29182DAD4260F0 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// levelData.GetComponent<LevelData>().shots = Shots;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_levelData_47();
		NullCheck(L_0);
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_1;
		L_1 = GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13(L_0, /*hidden argument*/GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13_RuntimeMethod_var);
		int32_t L_2 = __this->get_Shots_36();
		NullCheck(L_1);
		L_1->set_shots_5(L_2);
		// levelData.GetComponent<LevelData>().LevelFinished();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_levelData_47();
		NullCheck(L_3);
		LevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A * L_4;
		L_4 = GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13(L_3, /*hidden argument*/GameObject_GetComponent_TisLevelData_tE79D674BC60B6B9F4722EEB9EF7E006E1079EC8A_m310B1F5718569AAFB0903AA06AF7994BAB480D13_RuntimeMethod_var);
		NullCheck(L_4);
		LevelData_LevelFinished_m2C4517B23A7CB13D09CF75142DB21E7FD20C2782(L_4, /*hidden argument*/NULL);
		// FiringUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_FiringUI_24();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// BallUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_BallUI_25();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankUI::NextStage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_NextStage_m3F5FF8EECCF8F07E26D374E4FFCFFFA061FC97FB (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(SceneNum + 1);
		int32_t L_0 = __this->get_SceneNum_4();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mF4561CC9E8B5EEB0FB813083642A09AA8D60CCB1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankUI::LevelSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_LevelSelect_m5F050D9B5E3C67C55107F29BC21176D7059BA97A (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mF4561CC9E8B5EEB0FB813083642A09AA8D60CCB1(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankUI::TurretLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_TurretLeft_m2B05155380E6C397F8E0D15A3A5432B634D5D496 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	{
		// if (CurrentTurretRotation < 90)
		float L_0 = __this->get_CurrentTurretRotation_23();
		if ((!(((float)L_0) < ((float)(90.0f)))))
		{
			goto IL_0044;
		}
	}
	{
		// CurrentTurretRotation = CurrentTurretRotation + 15f;
		float L_1 = __this->get_CurrentTurretRotation_23();
		__this->set_CurrentTurretRotation_23(((float)il2cpp_codegen_add((float)L_1, (float)(15.0f))));
		// TurretPivot.transform.rotation = Quaternion.Euler(0f, 0f, CurrentTurretRotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_TurretPivot_18();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_CurrentTurretRotation_23();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_3, L_5, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void TankUI::TurretRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_TurretRight_m007D4E4EB365ED40654EC65ECAEF4B91457743AD (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	{
		// if (CurrentTurretRotation > -85)
		float L_0 = __this->get_CurrentTurretRotation_23();
		if ((!(((float)L_0) > ((float)(-85.0f)))))
		{
			goto IL_0044;
		}
	}
	{
		// CurrentTurretRotation = CurrentTurretRotation - 15f;
		float L_1 = __this->get_CurrentTurretRotation_23();
		__this->set_CurrentTurretRotation_23(((float)il2cpp_codegen_subtract((float)L_1, (float)(15.0f))));
		// TurretPivot.transform.rotation = Quaternion.Euler(0f, 0f, CurrentTurretRotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_TurretPivot_18();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_CurrentTurretRotation_23();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_3, L_5, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void TankUI::FireBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_FireBall_m9AC51BADCE93ACDD3D4794F6CE42D9142C19365C (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7_m625C01A7AB0D19238D3BD3081BD6FD38A7101207_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0_mC9399A70630B7AA20D42A414A2B1C47CD05336E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral189955CDBD1BC487E61591A4724B1BB433DB070E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFECE5150801691657425A6EE0640B8DC6472AF3);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// MainCamera.GetComponent<CameraMover>().Nudging = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_MainCamera_50();
		NullCheck(L_0);
		CameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7 * L_1;
		L_1 = Component_GetComponent_TisCameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7_m625C01A7AB0D19238D3BD3081BD6FD38A7101207(L_0, /*hidden argument*/Component_GetComponent_TisCameraMover_tF12095C8E5C3AC9E939B5C8D33AC6DABB341D0C7_m625C01A7AB0D19238D3BD3081BD6FD38A7101207_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->set_Nudging_5((bool)0);
		// if (BallType == 1 || BallType == 0) CurrentBall = GameObject.Instantiate(GolfBall, ShootPoint.position, TurretPivot.transform.rotation);
		int32_t L_2 = __this->get_BallType_45();
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_3 = __this->get_BallType_45();
		if (L_3)
		{
			goto IL_004e;
		}
	}

IL_0022:
	{
		// if (BallType == 1 || BallType == 0) CurrentBall = GameObject.Instantiate(GolfBall, ShootPoint.position, TurretPivot.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_GolfBall_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_ShootPoint_17();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_TurretPivot_18();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_4, L_6, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		__this->set_CurrentBall_16(L_10);
	}

IL_004e:
	{
		// if (BallType == 2) CurrentBall = GameObject.Instantiate(PlatBall, ShootPoint.position, TurretPivot.transform.rotation);
		int32_t L_11 = __this->get_BallType_45();
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_0083;
		}
	}
	{
		// if (BallType == 2) CurrentBall = GameObject.Instantiate(PlatBall, ShootPoint.position, TurretPivot.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_PlatBall_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = __this->get_ShootPoint_17();
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_TurretPivot_18();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_12, L_14, L_17, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		__this->set_CurrentBall_16(L_18);
	}

IL_0083:
	{
		// if (BallType == 3) CurrentBall = GameObject.Instantiate(WallBall, ShootPoint.position, TurretPivot.transform.rotation);
		int32_t L_19 = __this->get_BallType_45();
		if ((!(((uint32_t)L_19) == ((uint32_t)3))))
		{
			goto IL_00b8;
		}
	}
	{
		// if (BallType == 3) CurrentBall = GameObject.Instantiate(WallBall, ShootPoint.position, TurretPivot.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_WallBall_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = __this->get_ShootPoint_17();
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_TurretPivot_18();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
		L_25 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_20, L_22, L_25, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		__this->set_CurrentBall_16(L_26);
	}

IL_00b8:
	{
		// if (BallType == 4) CurrentBall = GameObject.Instantiate(SpikeBall, ShootPoint.position, TurretPivot.transform.rotation);
		int32_t L_27 = __this->get_BallType_45();
		if ((!(((uint32_t)L_27) == ((uint32_t)4))))
		{
			goto IL_00ed;
		}
	}
	{
		// if (BallType == 4) CurrentBall = GameObject.Instantiate(SpikeBall, ShootPoint.position, TurretPivot.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_SpikeBall_13();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = __this->get_ShootPoint_17();
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_TurretPivot_18();
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33;
		L_33 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_28, L_30, L_33, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		__this->set_CurrentBall_16(L_34);
	}

IL_00ed:
	{
		// XLevel = PowerBar.value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_35 = __this->get_PowerBar_6();
		NullCheck(L_35);
		float L_36;
		L_36 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_35);
		__this->set_XLevel_21(L_36);
		// direction = transform.right * XLevel;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_37, /*hidden argument*/NULL);
		float L_39 = __this->get_XLevel_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_38, L_39, /*hidden argument*/NULL);
		__this->set_direction_19(L_40);
		// CurrentBall.GetComponent<Rigidbody>().AddForce(CurrentBall.transform.up * XLevel, ForceMode.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_CurrentBall_16();
		NullCheck(L_41);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_42;
		L_42 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_41, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = __this->get_CurrentBall_16();
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_44, /*hidden argument*/NULL);
		float L_46 = __this->get_XLevel_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_42);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_42, L_47, 1, /*hidden argument*/NULL);
		// TeleportButton.GetComponent<Button>().interactable = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = __this->get_TeleportButton_27();
		NullCheck(L_48);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_49;
		L_49 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_48, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_49);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_49, (bool)0, /*hidden argument*/NULL);
		// TeleportWarning.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = __this->get_TeleportWarning_32();
		NullCheck(L_50);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_50, (bool)1, /*hidden argument*/NULL);
		// CameraTarget.GetComponent<BallChaser>().Follow(CurrentBall);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = __this->get_CameraTarget_22();
		NullCheck(L_51);
		BallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0 * L_52;
		L_52 = GameObject_GetComponent_TisBallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0_mC9399A70630B7AA20D42A414A2B1C47CD05336E0(L_51, /*hidden argument*/GameObject_GetComponent_TisBallChaser_t9DBCC1879AB40A3C1C6C6D1EB9044D3B254CA2E0_mC9399A70630B7AA20D42A414A2B1C47CD05336E0_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = __this->get_CurrentBall_16();
		NullCheck(L_52);
		BallChaser_Follow_m2EA8FFA25D3EB9C6F113B02E0CFAB9526BAAE793(L_52, L_53, /*hidden argument*/NULL);
		// FiringUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54 = __this->get_FiringUI_24();
		NullCheck(L_54);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_54, (bool)0, /*hidden argument*/NULL);
		// BallUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = __this->get_BallUI_25();
		NullCheck(L_55);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_55, (bool)1, /*hidden argument*/NULL);
		// if (BallType == 1 || BallType == 0)
		int32_t L_56 = __this->get_BallType_45();
		if ((((int32_t)L_56) == ((int32_t)1)))
		{
			goto IL_01a2;
		}
	}
	{
		int32_t L_57 = __this->get_BallType_45();
		if (L_57)
		{
			goto IL_01c6;
		}
	}

IL_01a2:
	{
		// ExplodeButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = __this->get_ExplodeButton_28();
		NullCheck(L_58);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_58, (bool)1, /*hidden argument*/NULL);
		// PlatformButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = __this->get_PlatformButton_29();
		NullCheck(L_59);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_59, (bool)0, /*hidden argument*/NULL);
		// WallButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60 = __this->get_WallButton_30();
		NullCheck(L_60);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_60, (bool)0, /*hidden argument*/NULL);
	}

IL_01c6:
	{
		// if (BallType == 2)
		int32_t L_61 = __this->get_BallType_45();
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_01f3;
		}
	}
	{
		// ExplodeButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = __this->get_ExplodeButton_28();
		NullCheck(L_62);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_62, (bool)0, /*hidden argument*/NULL);
		// PlatformButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_63 = __this->get_PlatformButton_29();
		NullCheck(L_63);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_63, (bool)1, /*hidden argument*/NULL);
		// WallButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = __this->get_WallButton_30();
		NullCheck(L_64);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_64, (bool)0, /*hidden argument*/NULL);
	}

IL_01f3:
	{
		// if (BallType == 3)
		int32_t L_65 = __this->get_BallType_45();
		if ((!(((uint32_t)L_65) == ((uint32_t)3))))
		{
			goto IL_0220;
		}
	}
	{
		// ExplodeButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66 = __this->get_ExplodeButton_28();
		NullCheck(L_66);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_66, (bool)0, /*hidden argument*/NULL);
		// PlatformButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67 = __this->get_PlatformButton_29();
		NullCheck(L_67);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_67, (bool)0, /*hidden argument*/NULL);
		// WallButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = __this->get_WallButton_30();
		NullCheck(L_68);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_68, (bool)1, /*hidden argument*/NULL);
	}

IL_0220:
	{
		// if (BallType == 4)
		int32_t L_69 = __this->get_BallType_45();
		if ((!(((uint32_t)L_69) == ((uint32_t)4))))
		{
			goto IL_024d;
		}
	}
	{
		// ExplodeButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70 = __this->get_ExplodeButton_28();
		NullCheck(L_70);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_70, (bool)1, /*hidden argument*/NULL);
		// PlatformButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71 = __this->get_PlatformButton_29();
		NullCheck(L_71);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_71, (bool)0, /*hidden argument*/NULL);
		// WallButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = __this->get_WallButton_30();
		NullCheck(L_72);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_72, (bool)0, /*hidden argument*/NULL);
	}

IL_024d:
	{
		// movement = new Vector3(0f, 0f, 0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		memset((&L_73), 0, sizeof(L_73));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_73), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_movement_40(L_73);
		// FuelLevel = (int)FuelMax;
		float L_74 = __this->get_FuelMax_42();
		__this->set_FuelLevel_41(il2cpp_codegen_cast_double_to_int<int32_t>(L_74));
		// FuelTank.text = "Fuel: " + FuelLevel;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_75 = __this->get_FuelTank_43();
		int32_t* L_76 = __this->get_address_of_FuelLevel_41();
		String_t* L_77;
		L_77 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_76, /*hidden argument*/NULL);
		String_t* L_78;
		L_78 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralAFECE5150801691657425A6EE0640B8DC6472AF3, L_77, /*hidden argument*/NULL);
		NullCheck(L_75);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_75, L_78);
		// float FuelPercent = (FuelLevel / FuelMax);
		int32_t L_79 = __this->get_FuelLevel_41();
		float L_80 = __this->get_FuelMax_42();
		V_0 = ((float)((float)((float)((float)L_79))/(float)L_80));
		// FuelGauge.size = FuelPercent;
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_81 = __this->get_FuelGauge_44();
		float L_82 = V_0;
		NullCheck(L_81);
		Scrollbar_set_size_m93B8718BD965E7188796F588928D240730CE22E6(L_81, L_82, /*hidden argument*/NULL);
		// Shots++;
		int32_t L_83 = __this->get_Shots_36();
		__this->set_Shots_36(((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1)));
		// ShotCounter.text = "Strokes: " + Shots;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_84 = __this->get_ShotCounter_35();
		int32_t* L_85 = __this->get_address_of_Shots_36();
		String_t* L_86;
		L_86 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_85, /*hidden argument*/NULL);
		String_t* L_87;
		L_87 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral189955CDBD1BC487E61591A4724B1BB433DB070E, L_86, /*hidden argument*/NULL);
		NullCheck(L_84);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_84, L_87);
		// if (Balls < 2)
		int32_t L_88 = __this->get_Balls_34();
		if ((((int32_t)L_88) >= ((int32_t)2)))
		{
			goto IL_0362;
		}
	}
	{
		// if (BallType == 1 || BallType == 0) ExplodeButton.GetComponent<Button>().interactable = false;
		int32_t L_89 = __this->get_BallType_45();
		if ((((int32_t)L_89) == ((int32_t)1)))
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_90 = __this->get_BallType_45();
		if (L_90)
		{
			goto IL_0308;
		}
	}

IL_02f7:
	{
		// if (BallType == 1 || BallType == 0) ExplodeButton.GetComponent<Button>().interactable = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_91 = __this->get_ExplodeButton_28();
		NullCheck(L_91);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_92;
		L_92 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_91, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_92);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_92, (bool)0, /*hidden argument*/NULL);
	}

IL_0308:
	{
		// if (BallType == 2) PlatformButton.GetComponent<Button>().interactable = false;
		int32_t L_93 = __this->get_BallType_45();
		if ((!(((uint32_t)L_93) == ((uint32_t)2))))
		{
			goto IL_0322;
		}
	}
	{
		// if (BallType == 2) PlatformButton.GetComponent<Button>().interactable = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_94 = __this->get_PlatformButton_29();
		NullCheck(L_94);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_95;
		L_95 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_94, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_95);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_95, (bool)0, /*hidden argument*/NULL);
	}

IL_0322:
	{
		// if (BallType == 3) WallButton.GetComponent<Button>().interactable = false;
		int32_t L_96 = __this->get_BallType_45();
		if ((!(((uint32_t)L_96) == ((uint32_t)3))))
		{
			goto IL_033c;
		}
	}
	{
		// if (BallType == 3) WallButton.GetComponent<Button>().interactable = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_97 = __this->get_WallButton_30();
		NullCheck(L_97);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_98;
		L_98 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_97, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_98);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_98, (bool)0, /*hidden argument*/NULL);
	}

IL_033c:
	{
		// if (BallType == 4) ExplodeButton.GetComponent<Button>().interactable = false;
		int32_t L_99 = __this->get_BallType_45();
		if ((!(((uint32_t)L_99) == ((uint32_t)4))))
		{
			goto IL_0356;
		}
	}
	{
		// if (BallType == 4) ExplodeButton.GetComponent<Button>().interactable = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100 = __this->get_ExplodeButton_28();
		NullCheck(L_100);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_101;
		L_101 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_100, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_101);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_101, (bool)0, /*hidden argument*/NULL);
	}

IL_0356:
	{
		// ExplodeWarning.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_102 = __this->get_ExplodeWarning_31();
		NullCheck(L_102);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_102, (bool)1, /*hidden argument*/NULL);
	}

IL_0362:
	{
		// }
		return;
	}
}
// System.Void TankUI::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_Explode_m5FA36CF4FAB1E7F3F159A704C15788705DDE8739 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD69796AFCAE5DA2487132D2132AFC2BC3AB2532);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BallType == 1 || BallType == 0) Instantiate(Explosion, CurrentBall.transform.position, CurrentBall.transform.rotation);
		int32_t L_0 = __this->get_BallType_45();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_BallType_45();
		if (L_1)
		{
			goto IL_003d;
		}
	}

IL_0011:
	{
		// if (BallType == 1 || BallType == 0) Instantiate(Explosion, CurrentBall.transform.position, CurrentBall.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Explosion_14();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_CurrentBall_16();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_CurrentBall_16();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_2, L_5, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
	}

IL_003d:
	{
		// if (BallType == 2) Instantiate(Platform, CurrentBall.transform.position, Tank.transform.rotation);
		int32_t L_10 = __this->get_BallType_45();
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0072;
		}
	}
	{
		// if (BallType == 2) Instantiate(Platform, CurrentBall.transform.position, Tank.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_Platform_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_CurrentBall_16();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_Tank_5();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_11, L_14, L_17, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
	}

IL_0072:
	{
		// if (BallType == 3) Instantiate(Wall, CurrentBall.transform.position, Quaternion.Euler(0f, 0f, 90f));
		int32_t L_19 = __this->get_BallType_45();
		if ((!(((uint32_t)L_19) == ((uint32_t)3))))
		{
			goto IL_00ab;
		}
	}
	{
		// if (BallType == 3) Instantiate(Wall, CurrentBall.transform.position, Quaternion.Euler(0f, 0f, 90f));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_Wall_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_CurrentBall_16();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_20, L_23, L_24, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
	}

IL_00ab:
	{
		// if (BallType == 4) Instantiate(Explosion, CurrentBall.transform.position, CurrentBall.transform.rotation);
		int32_t L_26 = __this->get_BallType_45();
		if ((!(((uint32_t)L_26) == ((uint32_t)4))))
		{
			goto IL_00e0;
		}
	}
	{
		// if (BallType == 4) Instantiate(Explosion, CurrentBall.transform.position, CurrentBall.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_Explosion_14();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_CurrentBall_16();
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_CurrentBall_16();
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33;
		L_33 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_27, L_30, L_33, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
	}

IL_00e0:
	{
		// Destroy(CurrentBall);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_CurrentBall_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_35, /*hidden argument*/NULL);
		// if (BallType == 1 || BallType == 4 && ScreenShakeOn)
		int32_t L_36 = __this->get_BallType_45();
		if ((((int32_t)L_36) == ((int32_t)1)))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_37 = __this->get_BallType_45();
		if ((!(((uint32_t)L_37) == ((uint32_t)4))))
		{
			goto IL_0112;
		}
	}
	{
		bool L_38 = __this->get_ScreenShakeOn_49();
		if (!L_38)
		{
			goto IL_0112;
		}
	}

IL_0105:
	{
		// StartCoroutine(ScreenShake());
		RuntimeObject* L_39;
		L_39 = TankUI_ScreenShake_m9DCF8B443E1DE8BE1FD44635727C7BCF71F8A9A3(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_40;
		L_40 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_39, /*hidden argument*/NULL);
	}

IL_0112:
	{
		// Balls--;
		int32_t L_41 = __this->get_Balls_34();
		__this->set_Balls_34(((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1)));
		// BallCounter.text = "Balls: " + Balls;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_42 = __this->get_BallCounter_33();
		int32_t* L_43 = __this->get_address_of_Balls_34();
		String_t* L_44;
		L_44 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_43, /*hidden argument*/NULL);
		String_t* L_45;
		L_45 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralFD69796AFCAE5DA2487132D2132AFC2BC3AB2532, L_44, /*hidden argument*/NULL);
		NullCheck(L_42);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_42, L_45);
		// FiringUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = __this->get_FiringUI_24();
		NullCheck(L_46);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_46, (bool)1, /*hidden argument*/NULL);
		// BallUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = __this->get_BallUI_25();
		NullCheck(L_47);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_47, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TankUI::ScreenShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TankUI_ScreenShake_m9DCF8B443E1DE8BE1FD44635727C7BCF71F8A9A3 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4 * L_0 = (U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4 *)il2cpp_codegen_object_new(U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4_il2cpp_TypeInfo_var);
		U3CScreenShakeU3Ed__60__ctor_m34B1B1B658EC9903C18ED3A58076D3FF776A8263(L_0, 0, /*hidden argument*/NULL);
		U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void TankUI::NoEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_NoEffect_m3426B6CDB870E7C4A7A302C63D844E35DA8EBD44 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD69796AFCAE5DA2487132D2132AFC2BC3AB2532);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(CurrentBall);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_CurrentBall_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_0, /*hidden argument*/NULL);
		// Balls--;
		int32_t L_1 = __this->get_Balls_34();
		__this->set_Balls_34(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		// BallCounter.text = "Balls: " + Balls;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_BallCounter_33();
		int32_t* L_3 = __this->get_address_of_Balls_34();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralFD69796AFCAE5DA2487132D2132AFC2BC3AB2532, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// FiringUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_FiringUI_24();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// BallUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_BallUI_25();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// if (Balls == 0)
		int32_t L_8 = __this->get_Balls_34();
		if (L_8)
		{
			goto IL_006b;
		}
	}
	{
		// FiringUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_FiringUI_24();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// StageLost();
		TankUI_StageLost_m5519C75CD064F5C3E1DD7014B063E2208F4776A2(__this, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void TankUI::StageLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_StageLost_m5519C75CD064F5C3E1DD7014B063E2208F4776A2 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral514C5B323EB8FE02AD37D6142C456C4BFE073CA4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Stage lost, idiot!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral514C5B323EB8FE02AD37D6142C456C4BFE073CA4, /*hidden argument*/NULL);
		// GameOverUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GameOverUI_26();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankUI::Teleport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_Teleport_mF4B6FB64CE01835C149D025A0876CA7FF7E994CD (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(TeleportEffect, CurrentBall.transform.position, CurrentBall.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_TeleportEffect_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_CurrentBall_16();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_CurrentBall_16();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_0, L_3, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		// Tank.transform.position = CurrentBall.transform.position + new Vector3(0, 1, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_Tank_5();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_CurrentBall_16();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_14, /*hidden argument*/NULL);
		// Destroy(CurrentBall);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_CurrentBall_16();
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_15, /*hidden argument*/NULL);
		// FiringUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_FiringUI_24();
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)1, /*hidden argument*/NULL);
		// BallUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_BallUI_25();
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankUI::MoveLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_MoveLeft_m70C591157D8583DD2BA225B151F8DFD6D0E77F4F (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	{
		// if (FuelLevel > 0)
		int32_t L_0 = __this->get_FuelLevel_41();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		// movement = new Vector3(-1f, 0f, 0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_movement_40(L_1);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void TankUI::MoveRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_MoveRight_mAB4B6DF13CD62D38FFA0AF6B169855E894DF2FBB (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	{
		// if (FuelLevel > 0)
		int32_t L_0 = __this->get_FuelLevel_41();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		// movement = new Vector3(1f, 0f, 0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_movement_40(L_1);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void TankUI::StopMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_StopMovement_mC91CEDF22B4C4172FFEF1299312B1724E272C984 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	{
		// movement = new Vector3(0f, 0f, 0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_movement_40(L_0);
		// }
		return;
	}
}
// System.Void TankUI::ToggleFiringUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_ToggleFiringUI_mFD6945E3F50F375D4CC64584F921030418CFBAE2 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	{
		// if (FiringUI.activeInHierarchy == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_FiringUI_24();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// FiringUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_FiringUI_24();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// else if (FiringUI.activeInHierarchy == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_FiringUI_24();
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// FiringUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_FiringUI_24();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void TankUI::ToggleSecrets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_ToggleSecrets_m9B2A10D3908B79B5A5B019176D7B070DA3762C81 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	{
		// if (SecretMenu.activeInHierarchy == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_SecretMenu_46();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// SecretMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_SecretMenu_46();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// else if (SecretMenu.activeInHierarchy == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_SecretMenu_46();
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// SecretMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_SecretMenu_46();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void TankUI::InfiniteBalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_InfiniteBalls_m59581F6025E6773D0EA14A5EB8F7D4B6CBE88284 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9BAE9F05831E99523DAFF4E1B43454063ABEB53);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Balls = 9999;
		__this->set_Balls_34(((int32_t)9999));
		// BallCounter.text = "Infinite Balls";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_BallCounter_33();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralE9BAE9F05831E99523DAFF4E1B43454063ABEB53);
		// }
		return;
	}
}
// System.Void TankUI::BallTypeSet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_BallTypeSet_m51CA104A5D9CDF55D0024A2CCB852ADA2F2FD780 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	{
		// BallType = num;
		int32_t L_0 = ___num0;
		__this->set_BallType_45(L_0);
		// }
		return;
	}
}
// System.Void TankUI::GainBall(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_GainBall_m599F0B37721538AA9CBB37382CF300AB6D257592 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, int32_t ___ballgain0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD69796AFCAE5DA2487132D2132AFC2BC3AB2532);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Balls += ballgain;
		int32_t L_0 = __this->get_Balls_34();
		int32_t L_1 = ___ballgain0;
		__this->set_Balls_34(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// BallCounter.text = "Balls: " + Balls;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_BallCounter_33();
		int32_t* L_3 = __this->get_address_of_Balls_34();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralFD69796AFCAE5DA2487132D2132AFC2BC3AB2532, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void TankUI::LoseStrokes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI_LoseStrokes_mBC399DA226D51819BED78C57A50CB708FEB8FFB5 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, int32_t ___strokelost0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral189955CDBD1BC487E61591A4724B1BB433DB070E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Shots -= strokelost;
		int32_t L_0 = __this->get_Shots_36();
		int32_t L_1 = ___strokelost0;
		__this->set_Shots_36(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// ShotCounter.text = "Strokes: " + Shots;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_ShotCounter_35();
		int32_t* L_3 = __this->get_address_of_Shots_36();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral189955CDBD1BC487E61591A4724B1BB433DB070E, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void TankUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankUI__ctor_m61531B6FA1506A6063CFE86742DC7CF375BF5EE9 (TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * __this, const RuntimeMethod* method)
{
	{
		// private float CurrentTurretRotation = -40;
		__this->set_CurrentTurretRotation_23((-40.0f));
		// private int Balls = 10;
		__this->set_Balls_34(((int32_t)10));
		// private int FuelLevel = 50;
		__this->set_FuelLevel_41(((int32_t)50));
		// private float FuelMax = 250;
		__this->set_FuelMax_42((250.0f));
		// private int BallType = 1;
		__this->set_BallType_45(1);
		// private bool ScreenShakeOn = true;
		__this->set_ScreenShakeOn_49((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TeleportDissipate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportDissipate_Start_m1B0D9017FFE7FAEBBD35D624A359F2DFF96B8A8F (TeleportDissipate_t04FF60E2EDE635C984E97DDAD0611803F094C82F * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(DestructionCountdown());
		RuntimeObject* L_0;
		L_0 = TeleportDissipate_DestructionCountdown_m193824F51B3EBF395EEC38D223BF033EC48626AD(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TeleportDissipate::DestructionCountdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TeleportDissipate_DestructionCountdown_m193824F51B3EBF395EEC38D223BF033EC48626AD (TeleportDissipate_t04FF60E2EDE635C984E97DDAD0611803F094C82F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695 * L_0 = (U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695 *)il2cpp_codegen_object_new(U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695_il2cpp_TypeInfo_var);
		U3CDestructionCountdownU3Ed__1__ctor_mC8D6F115AAC030B566C792FAAFF4AE1A1625C57F(L_0, 0, /*hidden argument*/NULL);
		U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void TeleportDissipate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportDissipate__ctor_m75E83F22C93747085BC0978BA7E4A969468CB08D (TeleportDissipate_t04FF60E2EDE635C984E97DDAD0611803F094C82F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TextPurge4::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPurge4_Start_m4321BFBFFA4A36CBC3135EA72FBA14AB0FBC23E8 (TextPurge4_t3FE660073B8143042DFDC938A45E2E91C30ACEFC * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TextPurge4::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPurge4_OnTriggerEnter_mD5FABE1B2827F9255F573F14E98F40E4B0EDB5F3 (TextPurge4_t3FE660073B8143042DFDC938A45E2E91C30ACEFC * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Ball")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// TutorialText5.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_TutorialText5_4();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// TutorialText6.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_TutorialText6_5();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void TextPurge4::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPurge4_Update_m519FD2C33230C3DBA87DDC683C661514CB8339BB (TextPurge4_t3FE660073B8143042DFDC938A45E2E91C30ACEFC * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TextPurge4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPurge4__ctor_m21DC102297777259A01A4CF8963F239A21A0D3CD (TextPurge4_t3FE660073B8143042DFDC938A45E2E91C30ACEFC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TextPurgeScript1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPurgeScript1_Start_m80C9D14CA231D0FB00EE6D761E8A6B0DA65B3954 (TextPurgeScript1_t1D4B6D4604B1B60E85747F816C49001B9D7D340F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TextPurgeScript1::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPurgeScript1_OnTriggerEnter_m807DDF84ECDE5B52118388CA45D0B1D0F64DB636 (TextPurgeScript1_t1D4B6D4604B1B60E85747F816C49001B9D7D340F * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Ball")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// TutorialText.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_TutorialText_4();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// TutorialText2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_TutorialText2_5();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void TextPurgeScript1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPurgeScript1_Update_m7221B0201004662486B2D2B9A614A766B30DBEA8 (TextPurgeScript1_t1D4B6D4604B1B60E85747F816C49001B9D7D340F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TextPurgeScript1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPurgeScript1__ctor_mD6D12098A2433FA085205BCCA7215645899C71B6 (TextPurgeScript1_t1D4B6D4604B1B60E85747F816C49001B9D7D340F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TextPurger2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPurger2_Start_mDAAE8104D3CC97587327B8D2BA1DAE575022D33B (TextPurger2_tB3F45C4271304B274D8C0326025641F24AFB431A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TextPurger2::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPurger2_OnTriggerEnter_m3845199FE93E1A3380049F6136246E2510529F3F (TextPurger2_tB3F45C4271304B274D8C0326025641F24AFB431A * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Ball")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// TutorialText2.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_TutorialText2_4();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// TutorialText3.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_TutorialText3_5();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void TextPurger2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPurger2_Update_mD05AAA383CE45C9757644CC824889F2B6E8FC796 (TextPurger2_tB3F45C4271304B274D8C0326025641F24AFB431A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TextPurger2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPurger2__ctor_m45827E42EB288FE176FF451FC94DC33D3B5868CF (TextPurger2_tB3F45C4271304B274D8C0326025641F24AFB431A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TextPurger3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPurger3_Start_m43558E5E1291CA4700511AE02180A0E79FFE9103 (TextPurger3_t676B22EDB34C1A02896E93B965ED7F39894FA8DF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TextPurger3::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPurger3_OnTriggerEnter_mA57A0C9A44791F4ABB55C87F7752531CBEF370FC (TextPurger3_t676B22EDB34C1A02896E93B965ED7F39894FA8DF * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Ball")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// TutorialText3.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_TutorialText3_4();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// TutorialText4.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_TutorialText4_5();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void TextPurger3::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPurger3_Update_m9B4F4CBE4A3406D1C32C8EAA60B6DAF666DD21CE (TextPurger3_t676B22EDB34C1A02896E93B965ED7F39894FA8DF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TextPurger3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPurger3__ctor_mFAC8840BCDE5896ABB62EC0BBA6A8552268BA713 (TextPurger3_t676B22EDB34C1A02896E93B965ED7F39894FA8DF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIWiggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIWiggle_Start_m8BB198903B99B27326D64735545C0192CB96B6D6 (UIWiggle_tD03AD9DC74D28D7AC244B8E8A8F73CECE79FCE78 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UIWiggle::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIWiggle_FixedUpdate_m3457E5560A2DA03E19953AFDA6C6B0D3F35B3F96 (UIWiggle_tD03AD9DC74D28D7AC244B8E8A8F73CECE79FCE78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rotation++;
		int32_t L_0 = __this->get_rotation_4();
		__this->set_rotation_4(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// rotation++;
		int32_t L_1 = __this->get_rotation_4();
		__this->set_rotation_4(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		// rotation++;
		int32_t L_2 = __this->get_rotation_4();
		__this->set_rotation_4(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// this.gameObject.GetComponent<RectTransform>().eulerAngles = new Vector3(0, rotation, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4;
		L_4 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_3, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		int32_t L_5 = __this->get_rotation_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), ((float)((float)L_5)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIWiggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIWiggle__ctor_mF967D56D01587A9D2EF907EDB3C5753D88D5434F (UIWiggle_tD03AD9DC74D28D7AC244B8E8A8F73CECE79FCE78 * __this, const RuntimeMethod* method)
{
	{
		// private int rotation = -150;
		__this->set_rotation_4(((int32_t)-150));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 WindChanger::GenerateWindDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindChanger_GenerateWindDirection_m3A3D94F125B4C9EF784A9E3AE3946C4FE637842A (WindChanger_tD64A2E22CD06A94DD92472673E664EA8FD6AAC0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF115D5CF569C35D177A246D56167C686E41FFD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Enabled)
		bool L_0 = __this->get_Enabled_8();
		if (!L_0)
		{
			goto IL_0064;
		}
	}
	{
		// wind = Random.Range(-90, 91);
		int32_t L_1;
		L_1 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(((int32_t)-90), ((int32_t)91), /*hidden argument*/NULL);
		__this->set_wind_4(L_1);
		// WindLevel.text = "Wind Level: " + wind;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_WindLevel_5();
		int32_t* L_3 = __this->get_address_of_wind_4();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralBF115D5CF569C35D177A246D56167C686E41FFD8, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// Arrow.rectTransform.rotation = Quaternion.Euler(0, 0, wind);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_6 = __this->get_Arrow_7();
		NullCheck(L_6);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7;
		L_7 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_wind_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_Euler_mD694BA6F38A792C3D728A8BBAFF13000F5F3B64A((0.0f), (0.0f), ((float)((float)L_8)), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_7, L_9, /*hidden argument*/NULL);
		// return wind;
		int32_t L_10 = __this->get_wind_4();
		return L_10;
	}

IL_0064:
	{
		// return 0;
		return 0;
	}
}
// System.Int32 WindChanger::GenerateWindPower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindChanger_GenerateWindPower_mF750B260ED30E22495765917D943677C6C7AA95E (WindChanger_tD64A2E22CD06A94DD92472673E664EA8FD6AAC0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9116BDDA0E335D184074AC97C8BDD9AB1178F0BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Enabled)
		bool L_0 = __this->get_Enabled_8();
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// wind = Random.Range(15, 36);
		int32_t L_1;
		L_1 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(((int32_t)15), ((int32_t)36), /*hidden argument*/NULL);
		__this->set_wind_4(L_1);
		// WindMPH.text = "MPH: " + wind;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_WindMPH_6();
		int32_t* L_3 = __this->get_address_of_wind_4();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral9116BDDA0E335D184074AC97C8BDD9AB1178F0BE, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// return wind;
		int32_t L_6 = __this->get_wind_4();
		return L_6;
	}

IL_003e:
	{
		// return 0;
		return 0;
	}
}
// System.Void WindChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindChanger__ctor_m06CBB30F4CE1A720609F8ADBE0530C74E8C8F789 (WindChanger_tD64A2E22CD06A94DD92472673E664EA8FD6AAC0F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void tutorialtext::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tutorialtext_OnTriggerEnter_m81EE65F10532F1F3C6D5B3F544E1AD025185BF0D (tutorialtext_t63C6A96BE48D1A5E3EB914F01C6E9EF6DA794A5E * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Ball") {
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// TutorialText.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_TutorialText_4();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// TutorialText2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_TutorialText2_5();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void tutorialtext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tutorialtext__ctor_mB79EC3F0D0410563CD88F5292DCA93B41B9A0E59 (tutorialtext_t63C6A96BE48D1A5E3EB914F01C6E9EF6DA794A5E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AudioManager/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m6515C51E8DAA51E532613F8D570C901AA0662366 (U3CU3Ec__DisplayClass2_0_t8BF290F40814A816D4B9EB266488218E96B9F751 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean AudioManager/<>c__DisplayClass2_0::<PlaySound>b__0(Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3CPlaySoundU3Eb__0_mEB933D1FF483D0DE9BE5C7F50C006F4747062A89 (U3CU3Ec__DisplayClass2_0_t8BF290F40814A816D4B9EB266488218E96B9F751 * __this, Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * ___sound0, const RuntimeMethod* method)
{
	{
		// Sound Currentsound = Array.Find(Sounds, sound => sound.Name == SoundName);
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_0 = ___sound0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Name_0();
		String_t* L_2 = __this->get_SoundName_0();
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AudioManager/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m9AA66FE1C8A16E777AC0739B8F84BA9C8A188818 (U3CU3Ec__DisplayClass3_0_t7AEE78B6AD4458F444C79772703B864DB9257CE1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean AudioManager/<>c__DisplayClass3_0::<StopSound>b__0(Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3CStopSoundU3Eb__0_mF04D158913C8E80FDE618C87EF1CDE8D7C00D117 (U3CU3Ec__DisplayClass3_0_t7AEE78B6AD4458F444C79772703B864DB9257CE1 * __this, Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * ___sound0, const RuntimeMethod* method)
{
	{
		// Sound Currentsound = Array.Find(Sounds, sound => sound.Name == SoundName);
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_0 = ___sound0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Name_0();
		String_t* L_2 = __this->get_SoundName_0();
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExplosionDissipate/<DestructionCountdown>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestructionCountdownU3Ed__1__ctor_m11E2BB8D085B0EFCFA1F7BEF9A6F2BD0D18E4328 (U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ExplosionDissipate/<DestructionCountdown>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestructionCountdownU3Ed__1_System_IDisposable_Dispose_mEBFD7E5C0468B2861E8D464B2C5747966374E37E (U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ExplosionDissipate/<DestructionCountdown>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDestructionCountdownU3Ed__1_MoveNext_mD6D5FF0CEFAAF5FF05DF11E81FD4E5DE84FD4952 (U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExplosionDissipate_t54631AF601297033AA8D43E0069B19E94F4A5472 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ExplosionDissipate_t54631AF601297033AA8D43E0069B19E94F4A5472 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Destroy(this.gameObject);
		ExplosionDissipate_t54631AF601297033AA8D43E0069B19E94F4A5472 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_6, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ExplosionDissipate/<DestructionCountdown>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDestructionCountdownU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD8099B64C8B081E1453B6A3768821F5DE2476746 (U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ExplosionDissipate/<DestructionCountdown>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestructionCountdownU3Ed__1_System_Collections_IEnumerator_Reset_mC288820DF9D6BD911FEBDB633044B36EBBC48F33 (U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDestructionCountdownU3Ed__1_System_Collections_IEnumerator_Reset_mC288820DF9D6BD911FEBDB633044B36EBBC48F33_RuntimeMethod_var)));
	}
}
// System.Object ExplosionDissipate/<DestructionCountdown>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDestructionCountdownU3Ed__1_System_Collections_IEnumerator_get_Current_m48AC6C5E8D013AAC6804D6B0D7A3AE06C7CF819D (U3CDestructionCountdownU3Ed__1_t878D546D8B09928FCDEDBAB98D95921A4CACE185 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MilitaryTankUI/<ScreenShake>d__63::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScreenShakeU3Ed__63__ctor_m851482DC9BF1E9D9D37A49EA82CE7E86C739A001 (U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MilitaryTankUI/<ScreenShake>d__63::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScreenShakeU3Ed__63_System_IDisposable_Dispose_mCF4C5F85C93B794E44219B88FC4B8388D60D4590 (U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MilitaryTankUI/<ScreenShake>d__63::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CScreenShakeU3Ed__63_MoveNext_m7CFC34F3347A604D14FA96C90DF5D20750F563B2 (U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0089;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float duration = 0.5f;
		__this->set_U3CdurationU3E5__2_3((0.5f));
		// Vector3 startPosition = transform.position;
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_4 = V_1;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		__this->set_U3CstartPositionU3E5__3_4(L_6);
		// float elapsedTime = 0f;
		__this->set_U3CelapsedTimeU3E5__4_5((0.0f));
		goto IL_0090;
	}

IL_0047:
	{
		// elapsedTime += Time.deltaTime;
		float L_7 = __this->get_U3CelapsedTimeU3E5__4_5();
		float L_8;
		L_8 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		__this->set_U3CelapsedTimeU3E5__4_5(((float)il2cpp_codegen_add((float)L_7, (float)L_8)));
		// CameraTarget.transform.position = startPosition + Random.insideUnitSphere;
		MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * L_9 = V_1;
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9->get_CameraTarget_23();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_U3CstartPositionU3E5__3_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Random_get_insideUnitSphere_m34D2CBC8806C3E47E7C550DE77304E3A48EB2F40(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_14, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0089:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0090:
	{
		// while (elapsedTime < duration)
		float L_15 = __this->get_U3CelapsedTimeU3E5__4_5();
		float L_16 = __this->get_U3CdurationU3E5__2_3();
		if ((((float)L_15) < ((float)L_16)))
		{
			goto IL_0047;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object MilitaryTankUI/<ScreenShake>d__63::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CScreenShakeU3Ed__63_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6469BB51EB8E6978C7224D838AA9D5011EE35F7D (U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MilitaryTankUI/<ScreenShake>d__63::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScreenShakeU3Ed__63_System_Collections_IEnumerator_Reset_mA8E3F8BD2DC9F9037055B62AEC2D8F8460C4A393 (U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CScreenShakeU3Ed__63_System_Collections_IEnumerator_Reset_mA8E3F8BD2DC9F9037055B62AEC2D8F8460C4A393_RuntimeMethod_var)));
	}
}
// System.Object MilitaryTankUI/<ScreenShake>d__63::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CScreenShakeU3Ed__63_System_Collections_IEnumerator_get_Current_mD498BE8A1BF3AF0094CB26DE45A5FA60A0D7D6C2 (U3CScreenShakeU3Ed__63_tEBE0F1FC692DF77F1105F19AAA95F4F841D4C1C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TankUI/<ScreenShake>d__60::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScreenShakeU3Ed__60__ctor_m34B1B1B658EC9903C18ED3A58076D3FF776A8263 (U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TankUI/<ScreenShake>d__60::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScreenShakeU3Ed__60_System_IDisposable_Dispose_m3AFD03C363AE628051DADFA68C3127EC3DF0DCA8 (U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TankUI/<ScreenShake>d__60::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CScreenShakeU3Ed__60_MoveNext_mA8AFF286BD9F6E781993BB6868B2DDB0DA8BD8CE (U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0089;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float duration = 0.5f;
		__this->set_U3CdurationU3E5__2_3((0.5f));
		// Vector3 startPosition = transform.position;
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_4 = V_1;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		__this->set_U3CstartPositionU3E5__3_4(L_6);
		// float elapsedTime = 0f;
		__this->set_U3CelapsedTimeU3E5__4_5((0.0f));
		goto IL_0090;
	}

IL_0047:
	{
		// elapsedTime += Time.deltaTime;
		float L_7 = __this->get_U3CelapsedTimeU3E5__4_5();
		float L_8;
		L_8 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		__this->set_U3CelapsedTimeU3E5__4_5(((float)il2cpp_codegen_add((float)L_7, (float)L_8)));
		// CameraTarget.transform.position = startPosition + Random.insideUnitSphere;
		TankUI_tED3E28846F4640B6E834FEA571BCB132C9FBBB08 * L_9 = V_1;
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9->get_CameraTarget_22();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_U3CstartPositionU3E5__3_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Random_get_insideUnitSphere_m34D2CBC8806C3E47E7C550DE77304E3A48EB2F40(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_14, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0089:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0090:
	{
		// while (elapsedTime < duration)
		float L_15 = __this->get_U3CelapsedTimeU3E5__4_5();
		float L_16 = __this->get_U3CdurationU3E5__2_3();
		if ((((float)L_15) < ((float)L_16)))
		{
			goto IL_0047;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object TankUI/<ScreenShake>d__60::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CScreenShakeU3Ed__60_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m94D09DE733F29A52110F87D9F88B9CAFF64C588B (U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TankUI/<ScreenShake>d__60::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScreenShakeU3Ed__60_System_Collections_IEnumerator_Reset_m65ED823C5A7AB857CE656D0808D3A1B1BF015CD6 (U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CScreenShakeU3Ed__60_System_Collections_IEnumerator_Reset_m65ED823C5A7AB857CE656D0808D3A1B1BF015CD6_RuntimeMethod_var)));
	}
}
// System.Object TankUI/<ScreenShake>d__60::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CScreenShakeU3Ed__60_System_Collections_IEnumerator_get_Current_m58C54852B564B5FB98B671CB0E10F4B4299E875F (U3CScreenShakeU3Ed__60_tD134C18D69A361E9F7BB51EE84019DAD583F4FB4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TeleportDissipate/<DestructionCountdown>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestructionCountdownU3Ed__1__ctor_mC8D6F115AAC030B566C792FAAFF4AE1A1625C57F (U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TeleportDissipate/<DestructionCountdown>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestructionCountdownU3Ed__1_System_IDisposable_Dispose_mF6089FF29583B2FE77B50BCEC6D49411B569550A (U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TeleportDissipate/<DestructionCountdown>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDestructionCountdownU3Ed__1_MoveNext_mE8EB15530178198C6432470BA5E3BAAACC26A48A (U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TeleportDissipate_t04FF60E2EDE635C984E97DDAD0611803F094C82F * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TeleportDissipate_t04FF60E2EDE635C984E97DDAD0611803F094C82F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Destroy(this.gameObject);
		TeleportDissipate_t04FF60E2EDE635C984E97DDAD0611803F094C82F * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_6, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object TeleportDissipate/<DestructionCountdown>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDestructionCountdownU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m885D784D133595F2CE98B0A0CB8F7F8F7EB7E137 (U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TeleportDissipate/<DestructionCountdown>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestructionCountdownU3Ed__1_System_Collections_IEnumerator_Reset_mEDCB12ED333D3676765C79F96813C4F5469D6FD5 (U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDestructionCountdownU3Ed__1_System_Collections_IEnumerator_Reset_mEDCB12ED333D3676765C79F96813C4F5469D6FD5_RuntimeMethod_var)));
	}
}
// System.Object TeleportDissipate/<DestructionCountdown>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDestructionCountdownU3Ed__1_System_Collections_IEnumerator_get_Current_mBF34EFC773EB35F3E0BB50E145CFF598776A9C2F (U3CDestructionCountdownU3Ed__1_t1D2A44A01F951613A9C339AF56447177B5364695 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MilitaryTankUI_BallTypeSet_mFBDA09D661E57BF6FFD88491526579669CCB5D8E_inline (MilitaryTankUI_t361D894E92D47B6A48DFFB638D7EC35BEF433113 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	{
		// BallType = num;
		int32_t L_0 = ___num0;
		__this->set_BallType_46(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * HeadManager_get_Instance_m8173FAA7DB3BA0E1A25C560318C83144FC53210E_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static HeadManager Instance { get; private set; }
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_0 = ((HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0_StaticFields*)il2cpp_codegen_static_fields_for(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HeadManager_set_Instance_m388E9B4DA300C04B56B4C4CA168B52DCE406F5D1_inline (HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static HeadManager Instance { get; private set; }
		HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0 * L_0 = ___value0;
		((HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0_StaticFields*)il2cpp_codegen_static_fields_for(HeadManager_t9F9B0FF411AA11051FC1C5BF09E7F9DBB91439C0_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_4(L_0);
		return;
	}
}
