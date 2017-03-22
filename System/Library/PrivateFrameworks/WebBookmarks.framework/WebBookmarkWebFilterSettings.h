/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFUserSettings;

@interface WebBookmarkWebFilterSettings : NSObject {

	WFUserSettings* _userSettings;

}

@property (nonatomic,readonly) WFUserSettings * userSettings; 
@property (getter=isWebFilterEnabled,nonatomic,readonly) BOOL webFilterEnabled; 
@property (getter=isWebFilterWhiteListOnlyModeEnabled,nonatomic,readonly) BOOL webFilterWhiteListOnlyModeEnabled; 
+(id)sharedWebFilterSettings;
-(void)dealloc;
-(id)init;
-(BOOL)isWebFilterWhiteListOnlyModeEnabled;
-(BOOL)isWebFilterEnabled;
-(void)reloadSettings;
-(WFUserSettings *)userSettings;
@end

