/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSURLBag;

@interface VSStoreURLBag : NSObject {

	SSURLBag* _bag;

}

@property (nonatomic,retain) SSURLBag * bag;              //@synthesize bag=_bag - In the implementation block
-(id)init;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(SSURLBag *)bag;
-(void)setBag:(SSURLBag *)arg1 ;
@end

