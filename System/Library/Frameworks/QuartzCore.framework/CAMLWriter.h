/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL;

@interface CAMLWriter : NSObject {

	CAMLWriterPriv* _priv;

}

@property (retain) NSURL * baseURL; 
@property (__weak) id<CAMLWriterDelegate> delegate; 
+(id)writerWithData:(id)arg1 ;
-(void)setElementAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)beginPropertyElement:(id)arg1 ;
-(void)endElement;
-(id)URLStringForResource:(id)arg1 ;
-(void)setElementContent:(id)arg1 ;
-(void)beginElement:(unsigned)arg1 ;
-(void)encodeObject:(id)arg1 conditionally:(BOOL)arg2 ;
-(void)_writeElementTree:(CAMLWriterElement*)arg1 ;
-(void)setDelegate:(id<CAMLWriterDelegate>)arg1 ;
-(void)dealloc;
-(id<CAMLWriterDelegate>)delegate;
-(id)initWithData:(id)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)encodeObject:(id)arg1 ;
@end

