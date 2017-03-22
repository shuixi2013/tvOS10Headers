/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLTextAreaElement : DOMHTMLElement

@property (assign) BOOL autofocus; 
@property (assign) BOOL disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (copy) NSString * name; 
@property (assign) BOOL readOnly; 
@property (assign) int rows; 
@property (assign) int cols; 
@property (copy,readonly) NSString * type; 
@property (copy) NSString * defaultValue; 
@property (copy) NSString * value; 
@property (readonly) BOOL willValidate; 
@property (assign) int selectionStart; 
@property (assign) int selectionEnd; 
@property (copy) NSString * accessKey; 
-(void)_startAssistingDocumentView:(id)arg1 ;
-(void)_stopAssistingDocumentView:(id)arg1 ;
-(BOOL)_requiresAccessoryView;
-(BOOL)_requiresInputView;
-(BOOL)_supportsAutoFill;
-(id)_textFormElement;
-(BOOL)nodeCanBecomeFirstResponder;
-(BOOL)isEditing;
-(id)textInputTraits;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(BOOL)isTextControl;
-(id)startPosition;
-(id)endPosition;
-(NSString *)accessKey;
-(void)setAccessKey:(NSString *)arg1 ;
-(BOOL)autofocus;
-(void)setAutofocus:(BOOL)arg1 ;
-(BOOL)willValidate;
-(id)validationMessage;
-(BOOL)checkValidity;
-(void)setCustomValidity:(id)arg1 ;
-(id)autocomplete;
-(void)setAutocomplete:(id)arg1 ;
-(void)setAutocorrect:(BOOL)arg1 ;
-(id)autocapitalize;
-(void)setAutocapitalize:(id)arg1 ;
-(int)cols;
-(void)setCols:(int)arg1 ;
-(id)dirName;
-(void)setDirName:(id)arg1 ;
-(id)selectionDirection;
-(void)setSelectionDirection:(id)arg1 ;
-(void)select;
-(void)setRangeText:(id)arg1 ;
-(void)setRangeText:(id)arg1 start:(unsigned)arg2 end:(unsigned)arg3 selectionMode:(id)arg4 ;
-(void)setSelectionRange:(int)arg1 end:(int)arg2 ;
-(id)wrap;
-(void)setWrap:(id)arg1 ;
-(unsigned)textLength;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)type;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setMaxLength:(int)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(DOMHTMLFormElement *)form;
-(int)_autocapitalizeType;
-(BOOL)autocorrect;
-(void)setPlaceholder:(id)arg1 ;
-(id)placeholder;
-(int)rows;
-(BOOL)readOnly;
-(BOOL)_isEdited;
-(int)structuralComplexityContribution;
-(id)labels;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
-(void)setRows:(int)arg1 ;
-(id)validity;
-(BOOL)required;
-(void)setRequired:(BOOL)arg1 ;
-(int)maxLength;
-(int)selectionStart;
-(int)selectionEnd;
-(void)setSelectionStart:(int)arg1 ;
-(void)setSelectionEnd:(int)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
@end

