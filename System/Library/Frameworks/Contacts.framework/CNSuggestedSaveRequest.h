/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNSaveRequest.h>

@class NSMutableSet, NSSet;

@interface CNSuggestedSaveRequest : CNSaveRequest {

	NSMutableSet* _mutableConfirmedSuggestions;
	NSMutableSet* _mutableRejectedSuggestions;

}

@property (nonatomic,retain) NSMutableSet * mutableConfirmedSuggestions;              //@synthesize mutableConfirmedSuggestions=_mutableConfirmedSuggestions - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableRejectedSuggestions;               //@synthesize mutableRejectedSuggestions=_mutableRejectedSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSSet * confirmedSuggestions; 
@property (nonatomic,copy,readonly) NSSet * rejectedSuggestions; 
-(id)storeIdentifier;
-(void)dealloc;
-(NSMutableSet *)mutableConfirmedSuggestions;
-(void)setMutableConfirmedSuggestions:(NSMutableSet *)arg1 ;
-(NSMutableSet *)mutableRejectedSuggestions;
-(void)setMutableRejectedSuggestions:(NSMutableSet *)arg1 ;
-(void)confirmSuggestion:(id)arg1 ;
-(void)rejectSuggestion:(id)arg1 ;
-(NSSet *)confirmedSuggestions;
-(NSSet *)rejectedSuggestions;
@end

