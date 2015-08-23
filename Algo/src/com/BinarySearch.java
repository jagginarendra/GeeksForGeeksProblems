package com;

/**
 * Test 
 * @author jaggi
 *
 */
public class BinarySearch {

	private int size;
	private int array[];
	private int i = 0;
	
	public BinarySearch(int n){
		size = n;
		array = new int[size];
	}
	
	public void insert(int item){
		
		if(i < size){
			
			array[i++] = item;
		}
		else
			System.out.println("Array Full");
	}
	
	public void binarySearch(int item){
		
		int first = 0,last = size -1 ,mid = 0;
		int counter  = 0;
		while(first <= last){
			counter++;
			mid  = (first+last)/2;
			if(array[mid] == item)
			{
				System.out.println("Item found @ "+ ++mid);
				System.out.println("Counter "+ counter);
				break;
			}
			else{
				
				if (array[mid] > item)
				{
					last = mid - 1;
				}
				else{
					first = mid + 1;
				}
				
			}
			
		}
		if(first > last)
		{
			System.out.println("Item is not present");
			System.out.println("Counter "+ counter);
		}
	}
	
	
}
