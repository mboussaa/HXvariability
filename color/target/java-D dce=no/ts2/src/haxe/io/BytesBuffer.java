// Generated by Haxe 3.3.0
package haxe.io;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class BytesBuffer extends haxe.lang.HxObject
{
	public BytesBuffer(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public BytesBuffer()
	{
		//line 45 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		haxe.io.BytesBuffer.__hx_ctor_haxe_io_BytesBuffer(this);
	}
	
	
	public static void __hx_ctor_haxe_io_BytesBuffer(haxe.io.BytesBuffer __temp_me39)
	{
		//line 58 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		__temp_me39.b = new java.io.ByteArrayOutputStream();
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		return new haxe.io.BytesBuffer(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		return new haxe.io.BytesBuffer();
	}
	
	
	public java.io.ByteArrayOutputStream b;
	
	
	
	public final int get_length()
	{
		//line 70 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		return this.b.size();
	}
	
	
	public final void addByte(int _byte)
	{
		//line 88 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		try 
		{
			//line 88 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			this.b.write(((int) (_byte) ));
		}
		catch (java.lang.Throwable typedException)
		{
			//line 76 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			throw haxe.lang.HaxeException.wrap(typedException);
		}
		
		
	}
	
	
	public final void add(haxe.io.Bytes src)
	{
		//line 104 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		try 
		{
			//line 104 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			this.b.write(((byte[]) (src.b) ), ((int) (0) ), ((int) (src.length) ));
		}
		catch (java.lang.Throwable typedException)
		{
			//line 94 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			throw haxe.lang.HaxeException.wrap(typedException);
		}
		
		
	}
	
	
	public final void addString(java.lang.String v)
	{
		//line 124 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		try 
		{
			//line 124 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			haxe.io.Bytes src = haxe.io.Bytes.ofString(v);
			//line 124 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			this.b.write(((byte[]) (src.b) ), ((int) (0) ), ((int) (src.length) ));
		}
		catch (java.lang.Throwable typedException)
		{
			//line 118 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			throw haxe.lang.HaxeException.wrap(typedException);
		}
		
		
	}
	
	
	public void addInt32(int v)
	{
		//line 128 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		try 
		{
			//line 132 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			this.b.write(((int) (( v & 255 )) ));
			//line 133 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			this.b.write(((int) (( ( v >> 8 ) & 255 )) ));
			//line 134 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			this.b.write(((int) (( ( v >> 16 ) & 255 )) ));
			//line 135 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			this.b.write(((int) (( v >>> 24 )) ));
		}
		catch (java.lang.Throwable typedException)
		{
			//line 128 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			throw haxe.lang.HaxeException.wrap(typedException);
		}
		
		
	}
	
	
	public void addInt64(long v)
	{
		//line 140 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		this.addInt32(((int) (((long) (v) )) ));
		//line 141 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		this.addInt32(((int) (((long) (( ((long) (v) ) >> 32 )) )) ));
	}
	
	
	public final void addFloat(double v)
	{
		//line 148 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		this.addInt32(haxe.io.FPHelper.floatToI32(v));
	}
	
	
	public final void addDouble(double v)
	{
		//line 156 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		this.addInt64(haxe.io.FPHelper.doubleToI64(v));
	}
	
	
	public final void addBytes(haxe.io.Bytes src, int pos, int len)
	{
		//line 160 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		try 
		{
			//line 162 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			if (( ( ( pos < 0 ) || ( len < 0 ) ) || ( ( pos + len ) > src.length ) )) 
			{
				//line 162 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
				throw haxe.lang.HaxeException.wrap(haxe.io.Error.OutsideBounds);
			}
			
			//line 173 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			this.b.write(((byte[]) (src.b) ), ((int) (pos) ), ((int) (len) ));
		}
		catch (java.lang.Throwable typedException)
		{
			//line 160 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			throw haxe.lang.HaxeException.wrap(typedException);
		}
		
		
	}
	
	
	public haxe.io.Bytes getBytes()
	{
		//line 204 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		byte[] buf = this.b.toByteArray();
		//line 205 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		haxe.io.Bytes bytes = new haxe.io.Bytes(buf.length, buf);
		//line 214 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		this.b = null;
		//line 215 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		return bytes;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		{
			//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			boolean __temp_executeDef1 = true;
			//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			switch (field.hashCode())
			{
				case 98:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("b")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						this.b = ((java.io.ByteArrayOutputStream) (value) );
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						return value;
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
			}
			
			//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			if (__temp_executeDef1) 
			{
				//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		{
			//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			boolean __temp_executeDef1 = true;
			//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			switch (field.hashCode())
			{
				case 1950049973:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("getBytes")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getBytes")) );
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case 98:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("b")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						return this.b;
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case -1262447542:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("addBytes")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addBytes")) );
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case -1106363674:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("length")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						return this.get_length();
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case -433118254:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("addDouble")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addDouble")) );
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case 974314479:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("get_length")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_length")) );
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case -1259145669:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("addFloat")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addFloat")) );
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case -1149102775:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("addByte")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addByte")) );
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case -1256312116:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("addInt64")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addInt64")) );
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case 96417:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("add")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "add")) );
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case -1256312211:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("addInt32")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addInt32")) );
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case 854034:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("addString")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addString")) );
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
			}
			
			//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			if (__temp_executeDef1) 
			{
				//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		{
			//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			boolean __temp_executeDef1 = true;
			//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			switch (field.hashCode())
			{
				case -1106363674:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("length")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						return ((double) (this.get_length()) );
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
			}
			
			//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			if (__temp_executeDef1) 
			{
				//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		{
			//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			boolean __temp_executeDef1 = true;
			//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			switch (field.hashCode())
			{
				case 1950049973:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("getBytes")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						return this.getBytes();
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case 974314479:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("get_length")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						return this.get_length();
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case -1262447542:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("addBytes")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						this.addBytes(((haxe.io.Bytes) (dynargs.__get(0)) ), ((int) (haxe.lang.Runtime.toInt(dynargs.__get(1))) ), ((int) (haxe.lang.Runtime.toInt(dynargs.__get(2))) ));
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case -1149102775:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("addByte")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						this.addByte(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ));
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case -433118254:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("addDouble")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						this.addDouble(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case 96417:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("add")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						this.add(((haxe.io.Bytes) (dynargs.__get(0)) ));
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case -1259145669:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("addFloat")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						this.addFloat(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case 854034:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("addString")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						this.addString(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case -1256312116:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("addInt64")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						this.addInt64(haxe.lang.Runtime.toLong(dynargs.__get(0)));
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
				case -1256312211:
				{
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					if (field.equals("addInt32")) 
					{
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						__temp_executeDef1 = false;
						//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
						this.addInt32(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ));
					}
					
					//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
					break;
				}
				
				
			}
			
			//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			if (__temp_executeDef1) 
			{
				//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		baseArr.push("length");
		//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		baseArr.push("b");
		//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
		{
			//line 24 "/usr/lib/haxe/std/haxe/io/BytesBuffer.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


