/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TVSStoreMetadataRequestCompletionHandler : NSObject {

	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) id block;              //@synthesize block=_block - In the implementation block
-(void)dealloc;
-(id)init;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)block;
-(void)invokeWithResponse:(id)arg1 error:(id)arg2 ;
@end
