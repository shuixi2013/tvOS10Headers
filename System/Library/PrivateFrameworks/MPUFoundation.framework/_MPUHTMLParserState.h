/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUHTMLParserState.h>

@protocol MPUHTMLParserDelegate;
@class NSData, MPUHTMLParser, NSMutableArray, NSMutableAttributedString, NSString;

@interface _MPUHTMLParserState : NSObject <MPUHTMLParserState> {

	NSData* _data;
	void* _selfRef;
	MPUHTMLParser* _parser;
	id<MPUHTMLParserDelegate> _delegate;
	NSMutableArray* _errors;
	NSMutableAttributedString* _attributedString;
	NSMutableArray* _attributeDictionaries;
	NSMutableArray* _tagStack;
	NSMutableArray* _stringStack;
	SCD_Struct_MP2 _delegateCapabilites;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)attributedString;
-(id)attributes;
-(BOOL)parse:(id*)arg1 ;
-(id)initWithParser:(id)arg1 data:(id)arg2 ;
-(void)_appendString:(id)arg1 ;
-(id)currentTagAttributes;
-(id)tagStack;
-(void)_startDocument;
-(void)_endDocument;
-(void)_startElement:(const char*)arg1 attrs:(const char**)arg2 ;
-(void)_endElement:(const char*)arg1 ;
-(void)_characters:(const char*)arg1 length:(int)arg2 ;
-(void)_error:(long long)arg1 msg:(const char*)arg2 args:(char*)arg3 ;
@end

