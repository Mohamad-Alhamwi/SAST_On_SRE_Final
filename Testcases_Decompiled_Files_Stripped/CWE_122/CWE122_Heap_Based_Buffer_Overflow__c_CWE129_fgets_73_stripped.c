
void FUN_00102c82(void)

{
  return;
}




void FUN_0010196e(undefined8 param_1)

{
  FUN_001019da(param_1);
  return;
}




void FUN_00102c8d(void)

{
  return;
}




void FUN_00102fa0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101cca(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102016(param_2);
  FUN_00102028(param_1,uVar1);
  return;
}




undefined8 FUN_00101eca(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001021a6(param_1);
  uVar2 = FUN_00101e2e(param_1);
  FUN_001021ca(local_38,uVar2,uVar1);
  uVar3 = FUN_00101eb8(param_2);
  uVar4 = FUN_00101e0c(uVar1);
  FUN_00102243(uVar2,uVar4,uVar3);
  FUN_00102280(local_38,0);
  FUN_00102204(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001022a2(void)

{
  return;
}




void FUN_001022ea(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101d9e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102088(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001020d2(&local_18);
    FUN_001020f4(local_10,uVar2);
    FUN_001020ae(&local_18);
  }
  return;
}




long FUN_00102280(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102c6c(void)

{
  return;
}




void FUN_001021a6(undefined8 param_1)

{
  FUN_00102311(param_1,1);
  return;
}




undefined8 FUN_0010183d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102761("Calling good()...");
  FUN_00101828();
  FUN_00102761("Finished good()");
  FUN_00102761("Calling bad()...");
  FUN_001014a9();
  FUN_00102761("Finished bad()");
  return 0;
}




void FUN_001028e3(undefined4 param_1)

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




void FUN_0010293d(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102965(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101c06(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101eb8(param_3);
  p_Var2 = (_List_node_base *)FUN_00101eca(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101f94(param_1,1);
  return;
}




void FUN_00102d32(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101b0c(undefined8 param_1)

{
  FUN_00101dfc(param_1);
  return;
}




void FUN_00101e6a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102173(param_1,param_2,1);
  return;
}




undefined8 FUN_00101bba(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e9a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010192e(undefined8 param_1)

{
  FUN_0010198e(param_1);
  return;
}




undefined8 FUN_00102016(undefined8 param_1)

{
  return param_1;
}




void FUN_00101828(void)

{
  FUN_001015ed();
  FUN_001016e4();
  return;
}




undefined8 FUN_001018a2(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102243(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101eb8(param_3);
  FUN_00102352(param_1,param_2,uVar1);
  return;
}




void FUN_001022b6(long param_1)

{
  FUN_00102394(param_1 + 0x10);
  return;
}




void FUN_0010206a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ef0)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_001018d8(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102761(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




ulong FUN_00102b55(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040f4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102cda(void)

{
  return;
}




undefined8 FUN_00102eb4(undefined8 *param_1)

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




void FUN_001026be(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101bba(param_1);
  FUN_0010271c(&local_18);
  FUN_00102740(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102088(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102394(undefined8 param_1)

{
  FUN_00102402(param_1);
  return;
}




void FUN_00102352(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00101eb8(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_001018a2(4,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00101c67(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101fbe(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102787(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001027e1(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102160(void)

{
  return;
}




void FUN_00101dfc(void)

{
  return;
}




void FUN_00102142(undefined8 param_1)

{
  FUN_001022d8(param_1);
  return;
}




undefined8 FUN_00102d69(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102d32,local_18);
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




void FUN_001029f1(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001029be(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010190e(undefined8 param_1)

{
  FUN_001019ba(param_1);
  return;
}




undefined8 FUN_00102402(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ce5(void)

{
  return;
}




void FUN_00102f6b(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102173(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001022ea(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101e2e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010198e(undefined8 param_1)

{
  FUN_00101b0c(param_1);
  FUN_001018b8(param_1);
  return;
}




void FUN_00102ccf(void)

{
  return;
}




void FUN_00102d1c(void)

{
  return;
}




void FUN_00102c98(void)

{
  return;
}




void FUN_001015ed(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010194e(local_58);
  local_5c = 7;
                    /* try { // try from 00101631 to 0010166e has its CatchHandler @ 001016ba */
  FUN_00101a06(local_58,&local_5c);
  FUN_00101a06(local_58,&local_5c);
  FUN_00101a06(local_58,&local_5c);
  FUN_00101a40(local_38,local_58);
                    /* try { // try from 00101676 to 0010167a has its CatchHandler @ 001016a5 */
  FUN_00102504(local_38);
  FUN_0010196e(local_38);
  FUN_0010196e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001021ca(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010233f(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102f4c(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102cc4(void)

{
  return;
}




void FUN_001023b2(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102414(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101e0c(long param_1)

{
  FUN_00102142(param_1 + 0x10);
  return;
}




ulong FUN_00102a51(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d11(void)

{
  return;
}




void FUN_00101a06(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bba(param_1);
  FUN_00101c06(param_1,uVar1,param_2);
  return;
}




void FUN_00103010(void)

{
  return;
}




void FUN_00101e40(undefined8 param_1,undefined8 param_2)

{
  FUN_00102160(param_1,param_2);
  return;
}




void FUN_001018b8(undefined8 param_1)

{
  FUN_001018d8(param_1);
  return;
}




undefined8 FUN_00102c43(void)

{
  return 0;
}




void FUN_00102028(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102016(param_2);
  FUN_00101fec(param_1,uVar1);
  FUN_001018b8(param_1);
  return;
}




void FUN_001028b8(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102e91(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102c34(void)

{
  return 1;
}




undefined8 FUN_00101d52(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010206a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101fbe(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fec(param_1,param_2);
  return param_1;
}




void FUN_00102311(undefined8 param_1,undefined8 param_2)

{
  FUN_001023b2(param_1,param_2,0);
  return;
}




undefined8 FUN_0010233f(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101cb8(param_2);
  FUN_00101c67(&local_21,uVar1);
  FUN_00101cca(param_1,&local_21);
  FUN_001019ba(&local_21);
  uVar1 = FUN_00101d52(param_2);
  uVar2 = FUN_00101d02(param_2);
                    /* try { // try from 00101acc to 00101ad0 has its CatchHandler @ 00101ad3 */
  FUN_00101d9e(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102cb9(void)

{
  return;
}




void FUN_00102cf0(void)

{
  return;
}




void FUN_001016e4(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_6c;
  undefined local_68 [32];
  undefined local_48 [26];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010194e(local_68);
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
                    /* try { // try from 0010173b to 001017b2 has its CatchHandler @ 001017fe */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_00102761("fgets() failed.");
  }
  else {
    local_6c = atoi(local_2e);
  }
  FUN_00101a06(local_68,&local_6c);
  FUN_00101a06(local_68,&local_6c);
  FUN_00101a06(local_68,&local_6c);
  FUN_00101a40(local_48,local_68);
                    /* try { // try from 001017ba to 001017be has its CatchHandler @ 001017e9 */
  FUN_001025dc(local_48);
  FUN_0010196e(local_48);
  FUN_0010196e(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101eb8(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_001020ae(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001020f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101eb8(param_2);
  uVar2 = FUN_00101bba(param_1);
  FUN_00101c06(param_1,uVar2,uVar1);
  return;
}




void FUN_00101e9a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101f94(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102740(undefined8 *param_1)

{
  FUN_00101e0c(*param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107028 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_001013f0();
    DAT_00107028 = 1;
    return;
  }
  return;
}




void FUN_0010194e(undefined8 param_1)

{
  FUN_0010192e(param_1);
  return;
}




void FUN_00102204(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102173(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102837(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102cae(void)

{
  return;
}




long * FUN_0010271c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102ca3(void)

{
  return;
}




void FUN_001019ba(undefined8 param_1)

{
  FUN_00101b2c(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_001020d2(undefined8 *param_1)

{
  FUN_001022b6(*param_1);
  return;
}




void FUN_00102d27(void)

{
  return;
}




void FUN_0010280d(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001025dc(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001026be(param_1);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00102761("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001027b9(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_001027b9(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102862(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




int FUN_00102c52(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102f2d(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102cfb(void)

{
  return;
}




void FUN_00102c77(void)

{
  return;
}




bool FUN_00102e36(pthread_t *param_1)

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




undefined8 FUN_00101d02(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010206a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010242c(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001026be(param_1);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00102761("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001027b9(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_0010288d(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001022d8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101cb8(undefined8 param_1)

{
  return param_1;
}




void FUN_001019da(undefined8 param_1)

{
  FUN_00101b3c(param_1);
  FUN_0010190e(param_1);
  return;
}




void FUN_00102990(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102d06(void)

{
  return;
}




void FUN_001014a9(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_6c;
  undefined local_68 [32];
  undefined local_48 [26];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010194e(local_68);
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
                    /* try { // try from 00101500 to 00101577 has its CatchHandler @ 001015c3 */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_00102761("fgets() failed.");
  }
  else {
    local_6c = atoi(local_2e);
  }
  FUN_00101a06(local_68,&local_6c);
  FUN_00101a06(local_68,&local_6c);
  FUN_00101a06(local_68,&local_6c);
  FUN_00101a40(local_48,local_68);
                    /* try { // try from 0010157f to 00101583 has its CatchHandler @ 001015ae */
  FUN_0010242c(local_48);
  FUN_0010196e(local_48);
  FUN_0010196e(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102414(void)

{
  return 0x555555555555555;
}




void FUN_00102504(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001026be(param_1);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00102761("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001027b9(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00101b3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101e0c(local_20);
    uVar3 = FUN_00101e2e(param_1);
    FUN_00101e40(uVar3,uVar2);
    FUN_00101e6a(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101b2c(void)

{
  return;
}




void FUN_00101fec(undefined8 param_1,undefined8 param_2)

{
  FUN_001022a2(param_1,param_2);
  return;
}



