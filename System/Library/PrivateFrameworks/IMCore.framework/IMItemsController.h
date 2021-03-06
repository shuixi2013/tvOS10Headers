/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMCore/IMCore-Structs.h>
@interface IMItemsController : NSObject {

	CFArrayRef _items;
	unsigned long long _capacity;

}

@property (assign,nonatomic) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) BOOL isMoreToLoad; 
+(id)_charactersToIgnoreWhenParsingTextContent;
-(void)dealloc;
-(id)init;
-(id)_items;
-(void)_removeItem:(id)arg1 ;
-(void)_removeAllItems;
-(unsigned long long)capacity;
-(id)_initWithItems:(id)arg1 ;
-(BOOL)_trimIfNeeded;
-(void)_itemsDidChange:(id)arg1 ;
-(void)_replaceStaleTypingMessage;
-(id)_lastIncomingFinishedMessageWithTextContent;
-(void)setCapacity:(unsigned long long)arg1 ;
-(BOOL)isMoreToLoad;
-(void)_handleItem:(id)arg1 ;
-(void)_replaceItems:(id)arg1 ;
-(unsigned long long)_indexOfItem:(id)arg1 ;
-(id)_member:(id)arg1 ;
-(id)_itemForGUID:(id)arg1 ;
-(id)_typingMessage;
-(id)_lastMessage;
-(id)_lastSentMessage;
-(id)_lastFinishedMessage;
-(id)_lastIncomingMessage;
-(id)_lastIncomingFinishedMessage;
-(id)_lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)arg1 ;
@end

