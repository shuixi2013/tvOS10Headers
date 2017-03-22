/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFClientPluginManager;

@interface SiriUISnippetManager : NSObject {

	AFClientPluginManager* _pluginManager;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)_compareObject:(id)arg1 toObject:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_createDebugViewControllerForAceObject:(id)arg1 ;
-(id)filteredDisambiguationListItems:(id)arg1 ;
-(id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2 ;
-(BOOL)_listItem:(id)arg1 isEqualToListItem:(id)arg2 ;
-(BOOL)_listItem:(id)arg1 isPreferredOverListItem:(id)arg2 ;
-(id)transcriptItemForObject:(id)arg1 ;
-(id)listItemToPickInAutodisambiguationForListItems:(id)arg1 ;
-(id)speakableProviderForObject:(id)arg1 ;
@end

