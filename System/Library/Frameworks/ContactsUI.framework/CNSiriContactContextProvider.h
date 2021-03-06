/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFContextProvider.h>

@class CNContact, CNContactStore;

@interface CNSiriContactContextProvider : NSObject <AFContextProvider> {

	CNContact* _contact;
	CNContactStore* _store;

}
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithContact:(id)arg1 store:(id)arg2 ;
-(void)_removeContextProviderOnMainThread;
-(id)contextManager;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
@end

