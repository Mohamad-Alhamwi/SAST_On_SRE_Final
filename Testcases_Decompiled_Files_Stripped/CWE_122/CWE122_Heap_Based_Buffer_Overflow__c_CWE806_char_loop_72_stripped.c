
void FUN_001031ef(undefined8 param_1)

{
  FUN_0010323c(param_1);
  return;
}




void FUN_001033eb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102d3a(param_3);
  uVar2 = FUN_00102d3a(local_28);
  uVar3 = FUN_00102d3a(local_20);
  uVar1 = FUN_001034d1(uVar3,uVar2,uVar1);
  FUN_00102fb4(&local_30,uVar1);
  return;
}




void FUN_00103cf0(void)

{
  return;
}




void FUN_0010377c(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001033c5(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001034bc(&local_10);
  FUN_00102cba(uVar1);
  return;
}




long FUN_00102baa(long param_1)

{
  return param_1 + 8;
}




void FUN_00102ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102bc0(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018fc(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102c85(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f4a(param_1,param_2,param_3);
  return;
}




int FUN_00103c47(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101d1e(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010261f(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101d98(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102e90(void)

{
  return;
}




void FUN_00101b9c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001024b2(param_2);
  FUN_00102461(&local_31,uVar1);
  uVar1 = FUN_0010243a(param_2);
                    /* try { // try from 00101c02 to 00101c06 has its CatchHandler @ 00101c6f */
  FUN_001024c4(param_1,uVar1,&local_31);
  FUN_0010199e(&local_31);
  uVar2 = FUN_00101d58(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102582(param_2);
  uVar4 = FUN_0010252a(param_2);
                    /* try { // try from 00101c50 to 00101c54 has its CatchHandler @ 00101c8d */
  uVar1 = FUN_001025da(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010243a(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_00102e43(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f2c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fca(param_1,param_2,param_3);
  return;
}




void FUN_00102f2c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void * FUN_00103506(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103857(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a80(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e90(param_1,param_2);
  return;
}




void FUN_001024c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102aaa(param_1,param_3);
                    /* try { // try from 001024fe to 00102502 has its CatchHandler @ 00102505 */
  FUN_00102ae0(param_1,param_2);
  return;
}




void * FUN_00103459(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00101897(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103756("Calling good()...");
  FUN_00101887();
  FUN_00103756("Finished good()");
  FUN_00103756("Calling bad()...");
  FUN_00101529();
  FUN_00103756("Finished bad()");
  return 0;
}




ulong FUN_001028d4(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00102dc0(param_1);
  lVar2 = FUN_0010243a(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010243a(local_40);
  local_30 = FUN_0010243a(local_40);
  plVar3 = (long *)FUN_00102de6(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010243a(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102dc0(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102dc0(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001027fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cba(param_2);
  uVar2 = FUN_00102cba(param_1);
  FUN_00102ccc(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102388(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d98(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001039e6(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong * FUN_00102de6(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103ca3(void)

{
  return;
}




void FUN_00103d06(void)

{
  return;
}




undefined8 FUN_00102582(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010267c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103932(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001037ae(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102fca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031a1(param_1,param_2,param_3);
  return;
}




undefined8 * FUN_00103324(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00103d11(void)

{
  return;
}




undefined8 FUN_0010336f(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010269e(&local_10);
  return *puVar1;
}




void FUN_00103c77(void)

{
  return;
}




void FUN_001034d1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103506(param_1,param_2,param_3);
  return;
}




void FUN_00102dc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024b2(param_1);
  FUN_00102ffb(uVar1);
  return;
}




void FUN_00102e15(undefined8 param_1,undefined8 param_2)

{
  FUN_00103064(param_1,param_2,0);
  return;
}




long FUN_00101e23(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010269e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010269e(param_2);
  return lVar1 - *plVar2 >> 3;
}




long FUN_0010312b(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_0010289f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d8a(param_1,param_2,param_3);
  return;
}




void FUN_00101a10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d58(param_1);
  FUN_00101d6a(*param_1,param_1[1],uVar1);
  FUN_001019be(param_1);
  return;
}




ulong * FUN_0010320d(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00103c38(void)

{
  return 0;
}




void FUN_00102c0f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f18(param_1,param_2);
  return;
}




undefined8 FUN_00102c39(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f2c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102aaa(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a80(param_1,param_2);
  FUN_00101cdc(param_1);
  return;
}




void FUN_00103f22(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102cba(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cda(void)

{
  return;
}




void FUN_00101952(undefined8 param_1)

{
  FUN_00101932(param_1);
  return;
}




void FUN_00103756(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101972(undefined8 param_1)

{
  FUN_00101cbc(param_1);
  FUN_00101cdc(param_1);
  return;
}




void FUN_001037d6(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102710(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102baa(param_1);
  FUN_00102c0f(*param_1,uVar1);
  return;
}




undefined8 FUN_00102ffb(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001031ef(param_1);
  puVar1 = (undefined8 *)FUN_0010320d(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_00103e86(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010284e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d3a(param_2);
  uVar2 = FUN_00102d3a(param_1);
  FUN_00102d4c(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001018fc(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001034bc(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102bc0(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cae(void)

{
  return;
}




void FUN_00102ea3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030aa(param_1,param_2,param_3);
  return;
}




void FUN_00102ae0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_001029c4(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103d1c(void)

{
  return;
}




void FUN_00101ad6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00101dcc(param_1);
  local_18 = FUN_00101e23(&local_38,&local_20);
  local_20 = FUN_00102388(local_30);
  uVar1 = FUN_001023d4(&local_20,local_18);
  FUN_00101e68(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102388(local_30);
  FUN_001023d4(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f4a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030fa(param_1,param_2,param_3);
  return;
}




void FUN_00103569(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  ulong local_60;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00103732(param_1,2);
  __s = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_18 = 0;
  sVar2 = strlen(__s);
  for (local_60 = 0; local_60 < sVar2; local_60 = local_60 + 1) {
    local_48[local_60] = __s[local_60];
  }
  local_18 = local_18 & 0xff;
  FUN_00103756(__s);
  free(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103254(undefined8 param_1)

{
  return param_1;
}




void FUN_001030fa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032d4(param_1,param_2,param_3);
  return;
}




void FUN_00103c98(void)

{
  return;
}




void FUN_001016d8(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101952(local_58);
  local_68 = malloc(100);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_68,0x41,0x31);
  *(undefined *)((long)local_68 + 0x31) = 0;
  local_60 = FUN_00101a58(local_58);
  FUN_00101aa8(local_38,&local_60);
                    /* try { // try from 0010177c to 00101811 has its CatchHandler @ 0010185d */
  FUN_00101ad6(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a58(local_58);
  FUN_00101aa8(local_38,&local_60);
  FUN_00101ad6(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a58(local_58);
  FUN_00101aa8(local_38,&local_60);
  FUN_00101ad6(local_58,local_38[0],1,&local_68);
  FUN_00101b9c(local_38,local_58);
                    /* try { // try from 00101819 to 0010181d has its CatchHandler @ 00101848 */
  FUN_0010364d(local_38);
  FUN_00101a10(local_38);
  FUN_00101a10(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103985(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101aa8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101dba(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00102d3a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001024b2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b97(void)

{
  return;
}




void FUN_00103cb9(void)

{
  return;
}




void FUN_001032d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033c5(param_2);
  uVar2 = FUN_001033c5(param_1);
  FUN_001033eb(uVar2,uVar1,param_3);
  return;
}




void FUN_00101529(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101952(local_58);
  local_68 = malloc(100);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_68,0x41,99);
  *(undefined *)((long)local_68 + 99) = 0;
  local_60 = FUN_00101a58(local_58);
  FUN_00101aa8(local_38,&local_60);
                    /* try { // try from 001015cd to 00101662 has its CatchHandler @ 001016ae */
  FUN_00101ad6(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a58(local_58);
  FUN_00101aa8(local_38,&local_60);
  FUN_00101ad6(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a58(local_58);
  FUN_00101aa8(local_38,&local_60);
  FUN_00101ad6(local_58,local_38[0],1,&local_68);
  FUN_00101b9c(local_38,local_58);
                    /* try { // try from 0010166a to 0010166e has its CatchHandler @ 00101699 */
  FUN_00103569(local_38);
  FUN_00101a10(local_38);
  FUN_00101a10(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cbc(undefined8 param_1)

{
  FUN_00102610(param_1);
  return;
}




ulong FUN_00103b4a(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




bool FUN_00103e2b(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_00104000(void)

{
  return;
}




void FUN_00103802(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103d27(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103064(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010323c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_001029c4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102e15(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102d3a(param_3);
  uVar2 = FUN_00102d3a(local_28);
  uVar3 = FUN_00102d3a(local_20);
  uVar1 = FUN_00102f7f(uVar3,uVar2,uVar1);
  FUN_00102fb4(&local_30,uVar1);
  return;
}




void FUN_00103390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103459(param_1,param_2,param_3);
  return;
}




void FUN_001019be(long *param_1)

{
  FUN_00101d1e(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101912(param_1);
  return;
}




void FUN_00102610(void)

{
  return;
}




void FUN_00103cc4(void)

{
  return;
}




void FUN_00103ce5(void)

{
  return;
}




undefined8 FUN_00103d5e(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d27,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_001025da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b3a(param_1,param_2,param_3);
  return;
}




void FUN_00103c82(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00102f18(void)

{
  return;
}




void FUN_001027a6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c39(param_2);
  uVar2 = FUN_00102c39(param_1);
  FUN_00102c85(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001038d8(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f41(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




ulong FUN_00103a46(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010267c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001029fb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e43(param_2);
  uVar2 = FUN_00102e43(param_1);
  FUN_00102c85(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010364d(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  ulong local_60;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00103732(param_1,2);
  __s = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_18 = 0;
  sVar2 = strlen(__s);
  for (local_60 = 0; local_60 < sVar2; local_60 = local_60 + 1) {
    local_48[local_60] = __s[local_60];
  }
  local_18 = local_18 & 0xff;
  FUN_00103756(__s);
  free(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001030aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103254(param_2);
  uVar2 = FUN_00103254(param_1);
  FUN_00103266(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c6c(void)

{
  return;
}




undefined8 FUN_0010269e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c8d(void)

{
  return;
}




void FUN_0010382c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103c29(void)

{
  return 1;
}




undefined8 FUN_00102a53(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a80(param_1,param_2);
  return param_1;
}




void FUN_00102d4c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




long FUN_00102762(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101dba(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101dba(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00102fb4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001031a1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102d3a(param_1);
  uVar1 = FUN_00103324(uVar1,param_2,param_3);
  FUN_00102fb4(&local_10,uVar1);
  return;
}




void FUN_001026b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102bc0(param_3);
  uVar2 = FUN_00102baa(param_1);
  FUN_00102bd2(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103266(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102d3a(param_3);
  uVar2 = FUN_0010336f(local_28);
  uVar3 = FUN_0010336f(local_20);
  uVar1 = FUN_00103390(uVar3,uVar2,uVar1);
  FUN_00102fb4(&local_30,uVar1);
  return;
}




void FUN_00101887(void)

{
  FUN_001016d8();
  return;
}




void FUN_00101932(undefined8 param_1)

{
  FUN_00101972(param_1);
  return;
}




undefined8 FUN_00101a58(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d98(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ea3(param_1,param_2,param_3);
  return;
}




void FUN_001039b3(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00102651(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b97(param_1,param_2);
  return;
}




void FUN_0010199e(undefined8 param_1)

{
  FUN_00101d0e(param_1);
  return;
}




undefined8 FUN_00103ea9(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_0010395a(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103f90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_00103c61(void)

{
  return;
}




undefined8 FUN_00102461(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a53(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_0010252a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010267c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010261f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b70(param_1,param_2,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101470();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_001038ad(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010323c(void)

{
  return 0xfffffffffffffff;
}




undefined8 FUN_00101d58(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed0)();
  return;
}




void FUN_00103cfb(void)

{
  return;
}




void FUN_00101d0e(void)

{
  return;
}




void FUN_00101e68(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_001028d4(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102388(local_80);
      local_60 = FUN_00102762(&local_88,&local_78);
      local_70 = FUN_001029c4(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101d58(local_80);
                    /* try { // try from 00102172 to 001021fd has its CatchHandler @ 001022b5 */
      FUN_0010289f(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101d58(local_80);
      puVar2 = (undefined8 *)FUN_00101dba(&local_88);
      local_70 = FUN_001029fb(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101d58(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101dba(&local_88);
      local_70 = FUN_001029fb(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101d58(local_80);
      FUN_00101d6a(*local_80,local_80[1],uVar1);
      FUN_00101d1e(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001026b0(local_38,param_1,param_4);
                    /* try { // try from 00101ef2 to 001020c5 has its CatchHandler @ 00102297 */
      local_50 = FUN_00102744(local_38);
      local_78 = FUN_00101a58(local_80);
      local_48 = FUN_00102762(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101d58(local_80);
        FUN_001027a6(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101dba(&local_88);
        FUN_001027fe(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101dba(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101dba(&local_88);
        FUN_0010284e(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101d58(local_80);
        lVar4 = FUN_0010289f(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101d58(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101dba(&local_88);
        FUN_001027a6(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101dba(&local_88);
        FUN_0010284e(*puVar2,local_40,local_50);
      }
      FUN_00102710(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f60(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102f7f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010312b(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101dcc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010267c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101cdc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00101912(undefined8 param_1)

{
  FUN_0010199e(param_1);
  return;
}




long FUN_00103732(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_00101dba(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b70(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102744(undefined8 param_1)

{
  FUN_00102baa(param_1);
  return;
}




void FUN_00101d6a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102651(param_1,param_2);
  return;
}




void FUN_00103882(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103ccf(void)

{
  return;
}




undefined8 FUN_001023d4(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101d98(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102bd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102bc0(param_3);
  FUN_00102ed4(param_1,param_2,uVar1);
  return;
}



