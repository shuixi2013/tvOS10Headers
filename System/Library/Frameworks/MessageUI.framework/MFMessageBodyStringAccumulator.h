/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <libobjc.A.dylib/MFMessageBodyStringAccumulator.h>

@protocol MFMessageBodyStringAccumulator <NSObject>
@required
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
-(void)appendString:(id)arg1;
-(void)appendInnerTextWithConsumableNode:(id)arg1;
-(id)accumulatedString;
-(void)appendNewline;
-(void)appendRange:(NSRange)arg1 ofString:(id)arg2;
-(BOOL)isFull;
-(void)appendCustomEntityWithTag:(unsigned long long)arg1 stringRepresentation:(id)arg2;

@end


@class NSMutableString, NSString;

@interface MFMessageBodyStringAccumulator : NSObject <MFMessageBodyStringAccumulator> {

	NSMutableString* _accumulatedString;
	unsigned long long _remainingLength;
	int _options;
	int _lastEntity;
	unsigned long long _lastCustomEntityTag;
	BOOL _isFull;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)appendString:(id)arg1 ;
-(id)initWithOptions:(int)arg1 lengthLimit:(unsigned long long)arg2 ;
-(void)appendInnerTextWithConsumableNode:(id)arg1 ;
-(id)accumulatedString;
-(void)appendNewline;
-(void)appendRange:(NSRange)arg1 ofString:(id)arg2 ;
-(BOOL)isFull;
-(void)appendCustomEntityWithTag:(unsigned long long)arg1 stringRepresentation:(id)arg2 ;
@end

