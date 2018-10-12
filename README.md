# SobotPlatform
智齿（电商平台版） 




=======

1.智齿集成文档地址： https://shimo.im/doc/raVxsmOJZJwyBgCC   

2.智齿 iOS_SDK UI源码 Git下载地址：https://github.com/ZCSDK/sobotKit_UI_iOS  

3.智齿 iOS_SDK 常见问题解答 下载地址：https://github.com/ZCSDK/FAQ_iOS        
 
=======


###SDK 2.6.6 版本更新说明

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