/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCPLogManager : NSObject {

	int _logLevel;

}

@property (readonly) int logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
+(id)sharedLogManager;
-(id)init;
-(int)logLevel;
@end

