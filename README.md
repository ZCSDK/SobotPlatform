# SobotPlatform
智齿（电商平台版） 




=======

1.智齿集成文档(电商版)地址： https://shimo.im/docs/HyQ9crCXWqQxtXKg   

2.智齿 iOS_SDK UI源码 Git下载地址：https://github.com/ZCSDK/sobotKit_UI_iOS  

3.智齿 iOS_SDK 常见问题解答 下载地址：https://github.com/ZCSDK/FAQ_iOS        

=======
==============  版本更新说明  =============
### SDK 2.8.3 版本更新说明
1【新增】新增viplevel和userlabel   
2【新增】留言记录回复查询  
3【新增】添加留言添加partnerid  
4【优化】重构导航和横竖屏方案  
5【优化】链接、电话正则表达式可配置  

### SDK 2.8.2 版本更新说明
1、【新增】支持横竖屏动态切换，满足客户多种使用场景   
2、【新增】留言回复功能，留言也可以持续交互沟通   
3、【新增】统一配置连接拦截事件、规范接拦截范围“帮助中心、留言、聊天、留言记录”均可拦截   
4、【新增】当前聊天状态变化监听，"机器人、人工、离线"可以实时获取，更准确的调用人工或机器人接口发送消息   
5、【新增】留言内容中的附件展示   
6、【新增】支持机器人多伦问题引导添加换行   
7、【新增】支持机器人多伦问题可多次回点    
8、【优化】国际化翻译和展示效果   
9、【优化】长连接内部判断是否退出后台，配置是否自动断开保证客户APP后台运行  
10、【优化】个别情况无法关键字转人工  
11、【优化】没有人工欢迎语时，自动发送商品信息失效  
12、【优化】 客服发送特别长内容显示不完整   
13、【优化】 结束会话以后显示的标题不对，变成机器人的了  
14、【优化】验证一些使用场景，解决了一些历史遗留问题  
	留言记录完成状态无法查看(接口优化)  
	第一次留言完成，无法立即查看问题(接口优化)  
	iOS 滑动返回页面数据回收问题  
	历史记录订单卡片信息不全(接口优化)  

### SDK 2.8.1 版本更新说明

1 【优化】替换项目中UIAlertView 。  
2 【优化】解决滑动返回时未读消息数不正确bug。  
3 【优化】新增自定义咨询页标题，可自由选择是否支持显示头像。


### SDK 2.8.0 版本更新说明

1 【优化】去掉聊天标题，双方昵称，标题栏显示客服头像。  
2 【优化】聊天气泡更换，留言样式改变。  
3 【优化】询前表单UI优化，评价页面UI优化。  
4 【新增】询前表单开关isCloseInquiryForm。  



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