/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDoubleLinkedListNode : NSObject {

	IMDoubleLinkedListNode* _prev;
	IMDoubleLinkedListNode* _next;
	id _object;

}

@property (retain) IMDoubleLinkedListNode * prev;              //@synthesize prev=_prev - In the implementation block
@property (retain) IMDoubleLinkedListNode * next;              //@synthesize next=_next - In the implementation block
@property (retain) id object;                                  //@synthesize object=_object - In the implementation block
-(IMDoubleLinkedListNode *)next;
-(void)dealloc;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(void)orphan;
-(IMDoubleLinkedListNode *)prev;
-(void)setPrev:(IMDoubleLinkedListNode *)arg1 ;
-(void)setNext:(IMDoubleLinkedListNode *)arg1 ;
-(void)removeFromList;
@end

