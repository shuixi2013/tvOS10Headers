/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol INExtensionContextVending <NSObject>
@optional
-(oneway void)confirmationResponseForIntent:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)handleIntent:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)handleIntent:(id)arg1 completion:(/*^block*/id)arg2;
-(void)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
-(void)stopSendingUpdatesForIntent:(id)arg1;
-(oneway void)getApplicationContextWithCompletion:(/*^block*/id)arg1;

@required
-(oneway void)completeTransaction;
-(oneway void)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(oneway void)confirmIntent:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(oneway void)handleIntent:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(oneway void)cancelTransactionDueToTimeout;

@end

