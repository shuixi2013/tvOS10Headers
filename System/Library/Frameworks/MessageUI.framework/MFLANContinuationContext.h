/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MFLANContinuationContext : NSObject {

	unsigned short _port;
	NSString* _host;

}

@property (nonatomic,copy) NSString * host;                    //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) unsigned short port;              //@synthesize port=_port - In the implementation block
-(void)dealloc;
-(NSString *)host;
-(unsigned short)port;
-(void)setHost:(NSString *)arg1 ;
-(void)setPort:(unsigned short)arg1 ;
@end

