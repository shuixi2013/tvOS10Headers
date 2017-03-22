/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AXAssertionWorkItem : NSObject {

	BOOL _acquire;
	NSString* _type;
	NSString* _identifier;
	unsigned long long _retries;

}

@property (nonatomic,readonly) NSString * type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL acquire;                          //@synthesize acquire=_acquire - In the implementation block
@property (assign,nonatomic) unsigned long long retries;              //@synthesize retries=_retries - In the implementation block
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)type;
-(id)initWithType:(id)arg1 identifier:(id)arg2 isAcquisition:(BOOL)arg3 ;
-(BOOL)acquire;
-(unsigned long long)retries;
-(void)setRetries:(unsigned long long)arg1 ;
@end

