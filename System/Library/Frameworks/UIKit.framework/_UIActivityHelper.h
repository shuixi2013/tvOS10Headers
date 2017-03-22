/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIActivityHelperAPI.h>

@protocol _UIActivityHelperDelegate;
@class NSArray, _UIActivityApplicationExtensionDiscovery, NSString;

@interface _UIActivityHelper : NSObject <_UIActivityHelperAPI> {

	id<_UIActivityHelperDelegate> _delegate;
	NSArray* _cachedBuiltinActivities;
	_UIActivityApplicationExtensionDiscovery* _applicationExtensionDiscovery;

}

@property (nonatomic,__weak,readonly) id<_UIActivityHelperDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * cachedBuiltinActivities;                                                   //@synthesize cachedBuiltinActivities=_cachedBuiltinActivities - In the implementation block
@property (nonatomic,retain) _UIActivityApplicationExtensionDiscovery * applicationExtensionDiscovery;              //@synthesize applicationExtensionDiscovery=_applicationExtensionDiscovery - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_UIActivityHelperDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(NSArray *)cachedBuiltinActivities;
-(_UIActivityApplicationExtensionDiscovery *)applicationExtensionDiscovery;
-(void)cancelUpdatesIfNeeded;
-(void)setApplicationExtensionDiscovery:(_UIActivityApplicationExtensionDiscovery *)arg1 ;
-(id)availableActivitiesForItemValues:(id)arg1 applicationExtensionActivities:(id)arg2 withActivity:(id)arg3 sourceIsManaged:(BOOL)arg4 shouldMatchOnlyUserElectedExtensions:(BOOL)arg5 activityItems:(id)arg6 applicationActivities:(id)arg7 activityTypeOrder:(id)arg8 includedActivityTypes:(id)arg9 excludedActivityCategories:(long long)arg10 ;
@end

