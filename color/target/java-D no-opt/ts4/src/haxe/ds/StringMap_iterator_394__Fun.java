// Generated by Haxe 3.3.0
package haxe.ds;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class StringMap_iterator_394__Fun<T> extends haxe.lang.Function
{
	public StringMap_iterator_394__Fun(int len, int[] i, haxe.ds.StringMap<T> _gthis)
	{
		//line 394 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
		super(0, 0);
		//line 394 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
		this.len = len;
		//line 394 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
		this.i = i;
		//line 394 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
		this._gthis = _gthis;
	}
	
	
	@Override public java.lang.Object __hx_invoke0_o()
	{
		//line 395 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
		{
			//line 395 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
			int _g1 = this.i[0];
			//line 395 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
			int _g = this.len;
			//line 395 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
			while (( _g1 < _g ))
			{
				//line 395 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
				int j = _g1++;
				//line 397 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
				if (( (( this._gthis.hashes[j] & -2 )) != 0 )) 
				{
					//line 399 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
					this.i[0] = j;
					//line 400 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
					return true;
				}
				
			}
			
		}
		
		//line 403 "/usr/lib/haxe/std/java/_std/haxe/ds/StringMap.hx"
		return false;
	}
	
	
	public int len;
	
	public int[] i;
	
	public haxe.ds.StringMap<T> _gthis;
	
}


