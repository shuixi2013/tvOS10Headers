/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVSDocumentPostprocessor.h>

@class NSString;

@interface TVSDocumentStoreProtocolPostprocessor : NSObject <TVSDocumentPostprocessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)processXMLDocument:(id)arg1 ;
-(id)_processDocument:(id)arg1 ;
-(id)processDocument:(id)arg1 forResponse:(id)arg2 error:(id*)arg3 ;
-(void)_processConditionalGroups:(id)arg1 ;
-(void)_processIncludes:(id)arg1 ;
-(id)_dictionaryFromElement:(id)arg1 ;
-(id)_newDocumentLoaderWithIncludeDictionary:(id)arg1 ;
-(void)_processIncludedDocumentContent:(id)arg1 forElement:(id)arg2 ;
-(void)_replaceElement:(id)arg1 withContainedElementNamed:(id)arg2 ;
-(void)_replaceElement:(id)arg1 withElement:(id)arg2 ;
-(void)_processConditionalGroupElement:(id)arg1 ;
-(BOOL)_processConditionalGroupDictionary:(id)arg1 ;
-(void)_removeElement:(id)arg1 ;
-(BOOL)_evaluateConditional:(id)arg1 ;
-(BOOL)_processConditionalResult:(BOOL)arg1 isAnd:(BOOL)arg2 isOr:(BOOL)arg3 isNot:(BOOL)arg4 ;
-(BOOL)_evaluateKey:(id)arg1 operator:(id)arg2 value:(id)arg3 ;
-(id)postprocessorName;
@end

