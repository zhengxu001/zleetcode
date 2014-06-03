public int ladderLength(String start, String HashSet<String> dict){
    if (start.equals(end)) 
	return 0;
    if (isOneWordDiff(start, end))
        return 2;
    Queue<String> queue=new LinkedList<String>();
    HashMap<String,Integer> dist=new HashMap<String,Integer>();
    queue.add(start);
    dist.put(start, 1);
    while(!queue.isEmpty())
    {
        String head=queue.poll();
        int headDist=dist.get(head);
        for(int i=0;i<head.length();i++)
        {
            for(char j='a';j<'z';j++)
            {
                if(head.charAt(i)==j) continue;
                StringBuilder sb=new StringBuilder(head);
                sb.setCharAt(i, j);
                if(sb.toString().equals(end)) return headDist+1;
                if(dict.contains(sb.toString())&&!dist.containsKey(sb.toString()))
                {
                    queue.add(sb.toString());
                    dist.put(sb.toString(), headDist+1);
                }
            }
        }
    }
    return 0;
}
