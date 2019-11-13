# SobotPlatform
智齿（电商平台版） 




=======

1.智齿集成文档(电商版)地址： https://shimo.im/docs/HyQ9crCXWqQxtXKg   

2.智齿 iOS_SDK UI源码 Git下载地址：https://github.com/ZCSDK/sobotKit_UI_iOS  

3.智齿 iOS_SDK 常见问题解答 下载地址：https://github.com/ZCSDK/FAQ_iOS        

=======


### SDK 2.8.0 版本更新说明
1、新增商品订单消息类型  
2、新增商品信息消息模板  
3、统一接入参数  
4、统一UI风格，去掉聊天中的名称和头像显示  


### SDK 2.7.12 版本更新说明
1、【优化】转人工过程不支持发送消息，解决人工聊天时偶发出现机器人消息问题    

2、【新增】直接跳转到留言页面方法   
+(void)openLeanve:(int ) showRecored with:(UIViewController *)byController onItemClick:(void (^)(NSString *msg,int code))CloseBlock;



### SDK 2.7.11 版本更新说明
1、【优化】使用WKWebView替换UIWebView，需要兼容iOS 8.0以前版本客户请联系售后
2、【优化】兼容iOS 13推送
3、【优化】解决@available方法引起的编译问题
4、【优化】仅人工模式不能与机器人发消息


### SDK 2.7.10 版本更新说明   

1、优化iOS 13 UI适配问题  

2、UIWebView加载txt优先使用UTF8编码解析  


### SDK 2.7.9 版本更新说明  

1 [增加] 工单回复富文本优化  

2 [增加] 图片增加二维码识别  

3 [增加] 会话锁定功能  

### SDK 2.6.6 版本更新说明

1 [新增]iOS12适配

2 [新增]增加商户对接id(仅电商版使用)

3 初始化方法中 pageBlock 中原 ZCChatController *object 替换为 id object 

```
[ZCSobot startZCChatVC:uiInfo with:self target:nil pageBlock:^(id object, ZCPageBlockType type) {
                // 点击返回
                if(type==ZCPageBlockGoBack){
//                    NSLog(@"点击了关闭按钮");
                }
                // 页面UI初始化完成，可以获取UIView，自定义UI
                if(type==ZCPageBlockLoadFinish){
//                    NSLog(@"页面加载完成");
                }
    } messageLinkClick:nil];
```