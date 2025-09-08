
void FUN_00102cda(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101c9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101700(local_20);
    uVar3 = FUN_00101f20(param_1);
    FUN_00101f32(uVar3,uVar2);
    FUN_00101f5c(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102d10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00102092(undefined8 param_1,undefined8 param_2)

{
  FUN_001020c0(param_1,param_2);
  return param_1;
}




void FUN_0010225c(undefined8 param_1)

{
  FUN_001023b5(param_1,1);
  return;
}




void FUN_001025d1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102652(undefined4 param_1)

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




undefined8 FUN_00101f9e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010225c(param_1);
  uVar2 = FUN_00101f20(param_1);
  FUN_00102280(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f8b(param_2);
  uVar4 = FUN_00101700(uVar1);
  FUN_001022f9(uVar2,uVar4,uVar3);
  FUN_00102336(local_38,0);
  FUN_001022ba(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001020fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020ea(param_2);
  FUN_001020c0(param_1,uVar1);
  FUN_00101a18(param_1);
  return;
}




void FUN_001025a6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102c9c(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001024f6(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101aee(undefined8 param_1)

{
  FUN_00101c6c(param_1);
  FUN_00101a18(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_00102a5f(void)

{
  return;
}




void FUN_00102a6a(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_00102a75(void)

{
  return;
}




void FUN_00101f32(undefined8 param_1,undefined8 param_2)

{
  FUN_00102216(param_1,param_2);
  return;
}




undefined8 FUN_00101e66(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010213e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001016c0(undefined8 *param_1)

{
  FUN_00101700(*param_1);
  return;
}




void FUN_001021c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f8b(param_2);
  uVar2 = FUN_00101650(param_1);
  FUN_00101d1a(param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00101f20(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c6c(undefined8 param_1)

{
  FUN_00101f10(param_1);
  return;
}




void FUN_00102358(void)

{
  return;
}




void FUN_00101ace(undefined8 param_1)

{
  FUN_00101b3a(param_1);
  return;
}




void FUN_00101b1a(undefined8 param_1)

{
  FUN_00101c8c(param_1);
  return;
}




void FUN_0010257c(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001025fc(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010238e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101896(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aae(local_58);
  local_5c = 0x14;
                    /* try { // try from 001018da to 00101917 has its CatchHandler @ 00101963 */
  FUN_00101b66(local_58,&local_5c);
  FUN_00101b66(local_58,&local_5c);
  FUN_00101b66(local_58,&local_5c);
  FUN_00101ba0(local_38,local_58);
                    /* try { // try from 0010191f to 00101923 has its CatchHandler @ 0010194e */
  FUN_0010155d(local_38);
  FUN_00101ace(local_38);
  FUN_00101ace(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101a02(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101b66(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101650(param_1);
  FUN_00101d1a(param_1,uVar1,param_2);
  return;
}




void FUN_001029fc(void)

{
  return;
}




undefined8 FUN_00102ad8(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102aa1,local_18);
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




void FUN_001029db(void)

{
  return;
}




void FUN_001023b5(undefined8 param_1,undefined8 param_2)

{
  FUN_00102456(param_1,param_2,0);
  return;
}




void FUN_0010272d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101700(long param_1)

{
  FUN_00101722(param_1 + 0x10);
  return;
}




void FUN_001026ff(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101f5c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102229(param_1,param_2,1);
  return;
}




void FUN_00102a07(void)

{
  return;
}




void FUN_00102a1d(void)

{
  return;
}




undefined8 FUN_001024a6(undefined8 param_1)

{
  return param_1;
}




void FUN_0010213e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102456(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024b8(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102a96(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00106028 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101410();
    DAT_00106028 = 1;
    return;
  }
  return;
}




void FUN_00102a8b(void)

{
  return;
}




void FUN_00101ba0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101dcc(param_2);
  FUN_00101d7b(&local_21,uVar1);
  FUN_00101dde(param_1,&local_21);
  FUN_00101b1a(&local_21);
  uVar1 = FUN_00101e66(param_2);
  uVar2 = FUN_00101e16(param_2);
                    /* try { // try from 00101c2c to 00101c30 has its CatchHandler @ 00101c33 */
  FUN_00101eb2(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_001027c0(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001024b8(void)

{
  return 0x555555555555555;
}




undefined8 * FUN_00102182(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_00101740(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d1a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f8b(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f9e(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102068(param_1,1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ee8)();
  return;
}




void FUN_00101a8e(undefined8 param_1)

{
  FUN_00101aee(param_1);
  return;
}




void FUN_00102d80(void)

{
  return;
}




void FUN_00102528(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102760(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_0010215c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102aa1(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101dde(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020ea(param_2);
  FUN_001020fc(param_1,uVar1);
  return;
}




void FUN_001021a6(undefined8 *param_1)

{
  FUN_0010236c(*param_1);
  return;
}




void FUN_00101b3a(undefined8 param_1)

{
  FUN_00101c9c(param_1);
  FUN_00101a6e(param_1);
  return;
}




undefined8 FUN_00102c00(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010236c(long param_1)

{
  FUN_00102438(param_1 + 0x10);
  return;
}




void FUN_00102a54(void)

{
  return;
}




bool FUN_00102ba5(pthread_t *param_1)

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




undefined8 FUN_001020ea(undefined8 param_1)

{
  return param_1;
}




void FUN_001015f2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101650(param_1);
  FUN_0010169c(&local_18);
  FUN_001016c0(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001022f9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f8b(param_3);
  FUN_001023f6(param_1,param_2,uVar1);
  return;
}




void FUN_001026ac(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101752(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_6c;
  undefined local_68 [32];
  undefined local_48 [26];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aae(local_68);
  local_6c = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 001017a9 to 00101820 has its CatchHandler @ 0010186c */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001024d0("fgets() failed.");
  }
  else {
    local_6c = atoi(local_2e);
  }
  FUN_00101b66(local_68,&local_6c);
  FUN_00101b66(local_68,&local_6c);
  FUN_00101b66(local_68,&local_6c);
  FUN_00101ba0(local_48,local_68);
                    /* try { // try from 00101828 to 0010182c has its CatchHandler @ 00101857 */
  FUN_001014c9(local_48);
  FUN_00101ace(local_48);
  FUN_00101ace(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101f8b(undefined8 param_1)

{
  return param_1;
}




void FUN_001026d4(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101e16(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010213e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101aae(undefined8 param_1)

{
  FUN_00101a8e(param_1);
  return;
}




long * FUN_0010169c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102229(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010238e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001023e3(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010199d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024d0("Calling good()...");
  FUN_0010198d();
  FUN_001024d0("Finished good()");
  FUN_001024d0("Calling bad()...");
  FUN_00101752();
  FUN_001024d0("Finished bad()");
  return 0;
}




void FUN_00102216(void)

{
  return;
}




void FUN_00102438(undefined8 param_1)

{
  FUN_001024a6(param_1);
  return;
}




void FUN_001022ba(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102229(*param_1,param_1[1],1);
  }
  return;
}




void FUN_001029f1(void)

{
  return;
}




void FUN_00101a38(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101c8c(void)

{
  return;
}




void FUN_00102550(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a33(void)

{
  return;
}




void FUN_0010155d(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_001015f2(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_00102528(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




undefined8 FUN_00101650(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016e2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001029e6(void)

{
  return;
}




undefined8 FUN_00101d7b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102092(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101a18(undefined8 param_1)

{
  FUN_00101a38(param_1);
  return;
}




void FUN_001024d0(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001023f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00101f8b(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101a02(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102a28(void)

{
  return;
}




int FUN_001029c1(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102a12(void)

{
  return;
}




void FUN_00102a3e(void)

{
  return;
}




undefined8 FUN_00102c23(undefined8 *param_1)

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




void FUN_00102cbb(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001014c9(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_001015f2(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_00102528(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




void FUN_00101722(undefined8 param_1)

{
  FUN_00101740(param_1);
  return;
}




void FUN_001020c0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102358(param_1,param_2);
  return;
}




undefined8 FUN_001029a3(void)

{
  return 1;
}




void FUN_00102a49(void)

{
  return;
}




void FUN_001016e2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010198d(void)

{
  FUN_00101896();
  return;
}




undefined8 FUN_00101dcc(undefined8 param_1)

{
  return param_1;
}




void FUN_00102068(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102627(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a80(void)

{
  return;
}




void FUN_00101a6e(undefined8 param_1)

{
  FUN_00101b1a(param_1);
  return;
}




ulong FUN_001028c4(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102280(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023e3(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_001029b2(void)

{
  return 0;
}




void FUN_00101f10(void)

{
  return;
}




void FUN_00101eb2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010215c(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021a6(&local_18);
    FUN_001021c8(local_10,uVar2);
    FUN_00102182(&local_18);
  }
  return;
}




long FUN_00102336(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



