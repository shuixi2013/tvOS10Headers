/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRowAction.h>

@class NSString;

@interface PTSAddGroupSettingsRowAction : PTSRowAction {

	Class _settingsClass;
	NSString* _groupKeyPath;

}

@property (nonatomic,retain) Class settingsClass;                //@synthesize settingsClass=_settingsClass - In the implementation block
@property (nonatomic,copy) NSString * groupKeyPath;              //@synthesize groupKeyPath=_groupKeyPath - In the implementation block
+(id)actionWithGroupKeyPath:(id)arg1 settingsClass:(Class)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)settingsClass;
-(void)setGroupKeyPath:(NSString *)arg1 ;
-(NSString *)groupKeyPath;
-(void)resolveTemplatesWithIndex:(unsigned long long)arg1 ;
-(void)setSettingsClass:(Class)arg1 ;
@end

