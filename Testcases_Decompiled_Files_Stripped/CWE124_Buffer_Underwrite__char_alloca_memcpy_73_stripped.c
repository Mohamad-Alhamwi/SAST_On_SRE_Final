
void FUN_00102080(void)

{
  return;
}




void FUN_0010175c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101c8a(undefined8 param_1)

{
  FUN_00101dfc(param_1);
  return;
}




void FUN_00102469(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020fb(param_3);
  FUN_00102566(param_1,param_2,uVar1);
  return;
}




void FUN_00101d10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101f3c(param_2);
  FUN_00101eeb(&local_21,uVar1);
  FUN_00101f4e(param_1,&local_21);
  FUN_00101c8a(&local_21);
  uVar1 = FUN_00101fd6(param_2);
  uVar2 = FUN_00101f86(param_2);
                    /* try { // try from 00101d9c to 00101da0 has its CatchHandler @ 00101da3 */
  FUN_00102022(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_00102b33(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001021d8(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102bd1(void)

{
  return;
}




void FUN_00102e0e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010226c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010225a(param_2);
  FUN_00102230(param_1,uVar1);
  FUN_00101b88(param_1);
  return;
}




void FUN_00102bf2(void)

{
  return;
}




undefined8 FUN_001016ca(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010175c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102871(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001024c8(void)

{
  return;
}




void FUN_00102386(void)

{
  return;
}




long FUN_001024a6(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




undefined8 FUN_00101b0c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102642("Calling good()...");
  FUN_00101afc();
  FUN_00102642("Finished good()");
  FUN_00102642("Calling bad()...");
  FUN_001017cc();
  FUN_00102642("Finished bad()");
  return 0;
}




void FUN_00102bb0(void)

{
  return;
}




void FUN_00102b84(void)

{
  return;
}




void FUN_001023cc(undefined8 param_1)

{
  FUN_00102525(param_1,1);
  return;
}




void FUN_001025c8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010262a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




bool FUN_00102d17(pthread_t *param_1)

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




void FUN_001020a2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102386(param_1,param_2);
  return;
}




void FUN_00102ba5(void)

{
  return;
}




void FUN_00101f4e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010225a(param_2);
  FUN_0010226c(param_1,uVar1);
  return;
}




undefined8 FUN_00102b15(void)

{
  return 1;
}




void FUN_00102ef0(void)

{
  return;
}




void FUN_00102846(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101b71(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010289f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001026c2(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102718(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00102932(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




undefined8 FUN_00101f86(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022ae(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010173a(undefined8 *param_1)

{
  FUN_0010177a(*param_1);
  return;
}




void FUN_00101ba8(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_0010262a(void)

{
  return 0x555555555555555;
}




void FUN_00102bbb(void)

{
  return;
}




void FUN_001023f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102553(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00101b88(undefined8 param_1)

{
  FUN_00101ba8(param_1);
  return;
}




undefined8 FUN_00101f3c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102bfd(void)

{
  return;
}




void FUN_00101ddc(undefined8 param_1)

{
  FUN_00102080(param_1);
  return;
}




void FUN_001024dc(long param_1)

{
  FUN_001025aa(param_1 + 0x10);
  return;
}




void FUN_00101c5e(undefined8 param_1)

{
  FUN_00101ddc(param_1);
  FUN_00101b88(param_1);
  return;
}




ulong FUN_00102a36(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c3e(undefined8 param_1)

{
  FUN_00101caa(param_1);
  return;
}




void FUN_00101c1e(undefined8 param_1)

{
  FUN_00101bfe(param_1);
  return;
}




void FUN_00101cd6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001016ca(param_1);
  FUN_00101e8a(param_1,uVar1,param_2);
  return;
}




void FUN_0010166c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001016ca(param_1);
  FUN_00101716(&local_18);
  FUN_0010173a(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001017ba(undefined8 param_1)

{
  return param_1;
}




void FUN_00101469(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_0010166c(param_1);
  puVar1 = (undefined8 *)*plVar2;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)((long)puVar1 + 99) = 0;
  FUN_00102642(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c13(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102668(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102b4d(void)

{
  return;
}




void FUN_0010242a(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102399(*param_1,param_1[1],1);
  }
  return;
}




void FUN_001027c4(undefined4 param_1)

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




void FUN_0010179c(undefined8 param_1)

{
  FUN_001017ba(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




long * FUN_00101716(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101e0c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010177a(local_20);
    uVar3 = FUN_00102090(param_1);
    FUN_001020a2(uVar3,uVar2);
    FUN_001020cc(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101e8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_001020fb(param_3);
  p_Var2 = (_List_node_base *)FUN_0010210e(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001021d8(param_1,1);
  return;
}




void FUN_00101bde(undefined8 param_1)

{
  FUN_00101c8a(param_1);
  return;
}




void FUN_00102022(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_001022cc(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102316(&local_18);
    FUN_00102338(local_10,uVar2);
    FUN_001022f2(&local_18);
  }
  return;
}




void FUN_00102c08(void)

{
  return;
}




void FUN_00102b6e(void)

{
  return;
}




undefined8 FUN_00102c4a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102c13,local_18);
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




void FUN_001020cc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102399(param_1,param_2,1);
  return;
}




void FUN_001028d2(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010156a(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_0010166c(param_1);
  puVar1 = (undefined8 *)*plVar2;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)((long)puVar1 + 99) = 0;
  FUN_00102642(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101fd6(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022ae(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 * FUN_001022f2(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102338(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001020fb(param_2);
  uVar2 = FUN_001016ca(param_1);
  FUN_00101e8a(param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_0010225a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102be7(void)

{
  return;
}




undefined8 FUN_00102553(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e4c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001022cc(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_0010269a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102b79(void)

{
  return;
}




void FUN_001017cc(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  long local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c1e(local_58);
  for (plVar1 = &local_68; plVar1 != &local_68; plVar1 = (long *)((long)plVar1 + -0x1000)) {
    *(undefined8 *)((long)plVar1 + -8) = *(undefined8 *)((long)plVar1 + -8);
  }
  *(undefined8 *)((long)plVar1 + -8) = *(undefined8 *)((long)plVar1 + -8);
  local_60 = (void *)((ulong)((long)plVar1 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x10188f;
  memset((void *)((ulong)((long)plVar1 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_68 = (long)local_60 + -8;
                    /* try { // try from 001018b4 to 001018f1 has its CatchHandler @ 0010193d */
  *(undefined8 *)((long)plVar1 + -0x78) = 0x1018b9;
  FUN_00101cd6(local_58,&local_68);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x1018cc;
  FUN_00101cd6(local_58,&local_68);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x1018df;
  FUN_00101cd6(local_58,&local_68);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x1018f2;
  FUN_00101d10(local_38,local_58);
                    /* try { // try from 001018f9 to 001018fd has its CatchHandler @ 00101928 */
  *(undefined8 *)((long)plVar1 + -0x78) = 0x1018fe;
  FUN_00101469(local_38);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x10190a;
  FUN_00101c3e(local_38);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x101916;
  FUN_00101c3e(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)plVar1 + -0x78) = 0x101960;
  __stack_chk_fail();
}




undefined8 FUN_0010210e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001023cc(param_1);
  uVar2 = FUN_00102090(param_1);
  FUN_001023f0(local_38,uVar2,uVar1);
  uVar3 = FUN_001020fb(param_2);
  uVar4 = FUN_0010177a(uVar1);
  FUN_00102469(uVar2,uVar4,uVar3);
  FUN_001024a6(local_38,0);
  FUN_0010242a(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102230(undefined8 param_1,undefined8 param_2)

{
  FUN_001024c8(param_1,param_2);
  return;
}




void FUN_001025aa(undefined8 param_1)

{
  FUN_00102618(param_1);
  return;
}




void FUN_0010281e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102d95(undefined8 *param_1)

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




undefined8 FUN_00102d72(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102e2d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010276e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102b24(void)

{
  return 0;
}




void FUN_0010177a(long param_1)

{
  FUN_0010179c(param_1 + 0x10);
  return;
}




void FUN_00102566(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001020fb(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101b71(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102525(undefined8 param_1,undefined8 param_2)

{
  FUN_001025c8(param_1,param_2,0);
  return;
}




void FUN_00101dfc(void)

{
  return;
}




undefined8 FUN_00101eeb(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102202(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102b58(void)

{
  return;
}




void FUN_00102743(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101966(void)

{
  void **ppvVar1;
  long in_FS_OFFSET;
  void *local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c1e(local_58);
  for (ppvVar1 = &local_68; ppvVar1 != &local_68; ppvVar1 = (void **)((long)ppvVar1 + -0x1000)) {
    *(undefined8 *)((long)ppvVar1 + -8) = *(undefined8 *)((long)ppvVar1 + -8);
  }
  *(undefined8 *)((long)ppvVar1 + -8) = *(undefined8 *)((long)ppvVar1 + -8);
  local_60 = (void *)((ulong)((long)ppvVar1 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101a29;
  memset((void *)((ulong)((long)ppvVar1 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_68 = local_60;
                    /* try { // try from 00101a4a to 00101a87 has its CatchHandler @ 00101ad3 */
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101a4f;
  FUN_00101cd6(local_58,&local_68);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101a62;
  FUN_00101cd6(local_58,&local_68);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101a75;
  FUN_00101cd6(local_58,&local_68);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101a88;
  FUN_00101d10(local_38,local_58);
                    /* try { // try from 00101a8f to 00101a93 has its CatchHandler @ 00101abe */
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101a94;
  FUN_0010156a(local_38);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101aa0;
  FUN_00101c3e(local_38);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101aac;
  FUN_00101c3e(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101af6;
  __stack_chk_fail();
}




void FUN_00101caa(undefined8 param_1)

{
  FUN_00101e0c(param_1);
  FUN_00101bde(param_1);
  return;
}




void FUN_00102399(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001024fe(param_1,param_2,param_3);
  return;
}




void FUN_001024fe(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001022ae(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102642(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102bdc(void)

{
  return;
}




void FUN_00101afc(void)

{
  FUN_00101966();
  return;
}




undefined8 FUN_00102618(undefined8 param_1)

{
  return param_1;
}




void FUN_001026ee(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102b63(void)

{
  return;
}




void FUN_00102bc6(void)

{
  return;
}




void FUN_00102799(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101bfe(undefined8 param_1)

{
  FUN_00101c5e(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013b0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00102316(undefined8 *param_1)

{
  FUN_001024dc(*param_1);
  return;
}




undefined8 FUN_00102090(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001020fb(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102202(undefined8 param_1,undefined8 param_2)

{
  FUN_00102230(param_1,param_2);
  return param_1;
}




void FUN_00102b9a(void)

{
  return;
}




void FUN_00102b8f(void)

{
  return;
}




void FUN_00102e80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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



