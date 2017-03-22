/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary, NSURL;

@interface FBSOpenApplicationOptions : NSObject <NSCopying> {

	NSMutableDictionary* _payload;

}

@property (nonatomic,copy) NSDictionary * dictionary;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain,readonly) NSURL * url; 
+(id)optionsWithDictionary:(id)arg1 ;
-(void)_sanitizeAndValidatePayload;
-(void)dealloc;
-(id)description;
-(NSURL *)url;
-(NSDictionary *)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end
