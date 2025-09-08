
void FUN_001029d5(void)

{
  return;
}




undefined8 FUN_00101724(undefined8 param_1)

{
  return param_1;
}




void FUN_001029e0(void)

{
  return;
}




void FUN_00102cf0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101afe(undefined8 param_1)

{
  FUN_00101c70(param_1);
  return;
}




undefined8 FUN_00101dfa(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102122(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001021fa(void)

{
  return;
}




void FUN_00102264(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023c7(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101b84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101db0(param_2);
  FUN_00101d5f(&local_21,uVar1);
  FUN_00101dc2(param_1,&local_21);
  FUN_00101afe(&local_21);
  uVar1 = FUN_00101e4a(param_2);
  uVar2 = FUN_00101dfa(param_2);
                    /* try { // try from 00101c10 to 00101c14 has its CatchHandler @ 00101c17 */
  FUN_00101e96(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001021ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f6f(param_2);
  uVar2 = FUN_00101634(param_1);
  FUN_00101cfe(param_1,uVar2,uVar1);
  return;
}




void FUN_001029bf(void)

{
  return;
}




void FUN_00102122(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001015d6(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101634(param_1);
  FUN_00101680(&local_18);
  FUN_001016a4(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102636(undefined4 param_1)

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




void FUN_00102690(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001026b8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101a92(undefined8 param_1)

{
  FUN_00101a72(param_1);
  return;
}




void FUN_00102a85(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001019fc(undefined8 param_1)

{
  FUN_00101a1c(param_1);
  return;
}




undefined8 FUN_00101d5f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102076(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101a72(undefined8 param_1)

{
  FUN_00101ad2(param_1);
  return;
}




void FUN_001016e4(long param_1)

{
  FUN_00101706(param_1 + 0x10);
  return;
}




undefined8 FUN_00101f04(undefined8 param_1)

{
  return param_1;
}




void FUN_0010153f(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_001015d6(param_1);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_0010250c(*__ptr);
  free(__ptr);
  return;
}




undefined8 FUN_00101634(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016c6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010218a(undefined8 *param_1)

{
  FUN_00102350(*param_1);
  return;
}




void FUN_0010220d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102372(param_1,param_2,param_3);
  return;
}




void FUN_00101f40(undefined8 param_1,undefined8 param_2)

{
  FUN_0010220d(param_1,param_2,1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef0)();
  return;
}




void FUN_001016a4(undefined8 *param_1)

{
  FUN_001016e4(*param_1);
  return;
}




void FUN_001024b4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




ulong FUN_001028a8(long param_1,ulong param_2,long param_3)

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




void FUN_00102a2d(void)

{
  return;
}




undefined8 FUN_00102c07(undefined8 *param_1)

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




void FUN_0010243a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010249c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_00101f6f(undefined8 param_1)

{
  return param_1;
}




void FUN_0010233c(void)

{
  return;
}




long FUN_0010231a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00101ab2(undefined8 param_1)

{
  FUN_00101b1e(param_1);
  return;
}




void FUN_001024da(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102534(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001020ce(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c50(undefined8 param_1)

{
  FUN_00101ef4(param_1);
  return;
}




void FUN_001020a4(undefined8 param_1,undefined8 param_2)

{
  FUN_0010233c(param_1,param_2);
  return;
}




undefined8 FUN_00102abc(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a85,local_18);
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




void FUN_00102744(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102711(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001016c6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102372(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102a38(void)

{
  return;
}




void FUN_00102cbe(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001020e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020ce(param_2);
  FUN_001020a4(param_1,uVar1);
  FUN_001019fc(param_1);
  return;
}




void FUN_00101c80(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016e4(local_20);
    uVar3 = FUN_00101f04(param_1);
    FUN_00101f16(uVar3,uVar2);
    FUN_00101f40(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101736(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_6c;
  undefined local_68 [32];
  undefined local_48 [26];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a92(local_68);
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
                    /* try { // try from 0010178d to 00101804 has its CatchHandler @ 00101850 */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001024b4("fgets() failed.");
  }
  else {
    local_6c = atoi(local_2e);
  }
  FUN_00101b4a(local_68,&local_6c);
  FUN_00101b4a(local_68,&local_6c);
  FUN_00101b4a(local_68,&local_6c);
  FUN_00101b84(local_48,local_68);
                    /* try { // try from 0010180c to 00101810 has its CatchHandler @ 0010183b */
  FUN_001014a9(local_48);
  FUN_00101ab2(local_48);
  FUN_00101ab2(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a22(void)

{
  return;
}




void FUN_00102a6f(void)

{
  return;
}




void FUN_001029eb(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00106028 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013f0();
    DAT_00106028 = 1;
    return;
  }
  return;
}




undefined8 FUN_00102140(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102c9f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102a17(void)

{
  return;
}




void FUN_00102350(long param_1)

{
  FUN_0010241c(param_1 + 0x10);
  return;
}




void FUN_00101c70(void)

{
  return;
}




ulong FUN_001027a4(long param_1,ulong param_2,long param_3)

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




void FUN_00102a64(void)

{
  return;
}




undefined8 FUN_00101981(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024b4("Calling good()...");
  FUN_00101971();
  FUN_001024b4("Finished good()");
  FUN_001024b4("Calling bad()...");
  FUN_00101736();
  FUN_001024b4("Finished bad()");
  return 0;
}




void FUN_00102d60(void)

{
  return;
}




void FUN_00101cfe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f6f(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f82(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010204c(param_1,1);
  return;
}




long * FUN_00101680(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00102996(void)

{
  return 0;
}




void FUN_00101f16(undefined8 param_1,undefined8 param_2)

{
  FUN_001021fa(param_1,param_2);
  return;
}




void FUN_0010260b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102be4(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102987(void)

{
  return 1;
}




void FUN_00101b4a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101634(param_1);
  FUN_00101cfe(param_1,uVar1,param_2);
  return;
}




void FUN_00101e96(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102140(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010218a(&local_18);
    FUN_001021ac(local_10,uVar2);
    FUN_00102166(&local_18);
  }
  return;
}




void FUN_0010229e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010220d(*param_1,param_1[1],1);
  }
  return;
}




void FUN_001022dd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f6f(param_3);
  FUN_001023da(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001019e6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102a0c(void)

{
  return;
}




void FUN_00102a43(void)

{
  return;
}




void FUN_001014a9(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_001015d6(param_1);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_0010250c(*__ptr);
  free(__ptr);
  return;
}




void FUN_00101dc2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020ce(param_2);
  FUN_001020e0(param_1,uVar1);
  return;
}




undefined8 FUN_00101f82(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102240(param_1);
  uVar2 = FUN_00101f04(param_1);
  FUN_00102264(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f6f(param_2);
  uVar4 = FUN_001016e4(uVar1);
  FUN_001022dd(uVar2,uVar4,uVar3);
  FUN_0010231a(local_38,0);
  FUN_0010229e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_00102076(undefined8 param_1,undefined8 param_2)

{
  FUN_001020a4(param_1,param_2);
  return param_1;
}




undefined8 FUN_00101db0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101e4a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102122(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010249c(void)

{
  return 0x555555555555555;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00101706(undefined8 param_1)

{
  FUN_00101724(param_1);
  return;
}




undefined8 * FUN_00102166(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010258a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a01(void)

{
  return;
}




undefined8 FUN_0010248a(undefined8 param_1)

{
  return param_1;
}




void FUN_001029f6(void)

{
  return;
}




void FUN_0010187a(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a92(local_58);
  local_5c = 0x14;
                    /* try { // try from 001018be to 001018fb has its CatchHandler @ 00101947 */
  FUN_00101b4a(local_58,&local_5c);
  FUN_00101b4a(local_58,&local_5c);
  FUN_00101b4a(local_58,&local_5c);
  FUN_00101b84(local_38,local_58);
                    /* try { // try from 00101903 to 00101907 has its CatchHandler @ 00101932 */
  FUN_0010153f(local_38);
  FUN_00101ab2(local_38);
  FUN_00101ab2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010204c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102a7a(void)

{
  return;
}




void FUN_00102560(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010241c(undefined8 param_1)

{
  FUN_0010248a(param_1);
  return;
}




void FUN_0010250c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001025b5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




int FUN_001029a5(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102c80(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102a4e(void)

{
  return;
}




void FUN_001029ca(void)

{
  return;
}




bool FUN_00102b89(pthread_t *param_1)

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




void FUN_00101b1e(undefined8 param_1)

{
  FUN_00101c80(param_1);
  FUN_00101a52(param_1);
  return;
}




undefined8 FUN_001023c7(undefined8 param_1)

{
  return param_1;
}




void FUN_001025e0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102240(undefined8 param_1)

{
  FUN_00102399(param_1,1);
  return;
}




void FUN_00101ad2(undefined8 param_1)

{
  FUN_00101c50(param_1);
  FUN_001019fc(param_1);
  return;
}




void FUN_00101971(void)

{
  FUN_0010187a();
  return;
}




void FUN_001026e3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102a59(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_00102399(undefined8 param_1,undefined8 param_2)

{
  FUN_0010243a(param_1,param_2,0);
  return;
}




void FUN_001023da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00101f6f(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_001019e6(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101a52(undefined8 param_1)

{
  FUN_00101afe(param_1);
  return;
}




void FUN_00101a1c(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101ef4(void)

{
  return;
}



