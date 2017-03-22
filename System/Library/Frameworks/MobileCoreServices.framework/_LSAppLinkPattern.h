/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _LSAppLinkPattern : NSObject {

	BOOL _blocking;
	NSString* _pattern;

}

@property (copy) NSString * pattern;                      //@synthesize pattern=_pattern - In the implementation block
@property (getter=isBlocking) BOOL blocking;              //@synthesize blocking=_blocking - In the implementation block
+(id)_normalizedURLPath:(id)arg1 escapeCharacters:(BOOL)arg2 ;
-(NSString *)pattern;
-(BOOL)isBlocking;
-(id)initWithURLPathPattern:(id)arg1 ;
-(unsigned long long)evaluateWithURLComponents:(id)arg1 ;
-(void)setPattern:(NSString *)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(void)setBlocking:(BOOL)arg1 ;
@end

