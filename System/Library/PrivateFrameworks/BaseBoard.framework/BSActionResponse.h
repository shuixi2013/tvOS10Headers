/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSSettings, NSError, NSString;

@interface BSActionResponse : NSObject <NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding> {

	BSSettings* _info;
	NSError* _error;

}

@property (nonatomic,copy,readonly) BSSettings * info;              //@synthesize info=_info - In the implementation block
@property (nonatomic,retain,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)response;
+(id)responseWithInfo:(id)arg1 ;
+(id)responseForError:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BSSettings *)info;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithInfo:(id)arg1 error:(id)arg2 ;
-(NSError *)error;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

