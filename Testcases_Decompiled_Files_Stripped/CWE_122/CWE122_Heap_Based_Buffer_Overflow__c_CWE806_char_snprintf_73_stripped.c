
void FUN_00101aec(undefined8 param_1)

{
  FUN_00101b98(param_1);
  return;
}




undefined8 FUN_001016b2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101744(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101fb0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102294(param_1,param_2);
  return;
}




void FUN_00101744(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102550(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101bb8(undefined8 param_1)

{
  FUN_00101d1a(param_1);
  FUN_00101aec(param_1);
  return;
}




void FUN_001027ad(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102a87(void)

{
  return;
}




void FUN_00102d1c(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102d90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101d0a(void)

{
  return;
}




ulong FUN_00102944(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010309c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102ca3(undefined8 *param_1)

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




void FUN_00102b21(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102433(undefined8 param_1,undefined8 param_2)

{
  FUN_001024d6(param_1,param_2,0);
  return;
}




undefined8 FUN_00102009(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101e94(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021bc(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101fda(undefined8 param_1,undefined8 param_2)

{
  FUN_001022a7(param_1,param_2,1);
  return;
}




void FUN_0010272c(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102651(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_001021da(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102224(&local_18);
    FUN_00102246(local_10,uVar2);
    FUN_00102200(&local_18);
  }
  return;
}




void FUN_001021bc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a66(void)

{
  return;
}




void FUN_00101b2c(undefined8 param_1)

{
  FUN_00101b0c(param_1);
  return;
}




void FUN_001026d2(undefined4 param_1)

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




undefined8 FUN_00101a1a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102550("Calling good()...");
  FUN_00101a0a();
  FUN_00102550("Finished good()");
  FUN_00102550("Calling bad()...");
  FUN_001017b4();
  FUN_00102550("Finished bad()");
  return 0;
}




undefined8 FUN_00102526(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ab3(void)

{
  return;
}




void FUN_0010240c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ee8)();
  return;
}




undefined8 FUN_00102461(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c80(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102d3b(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102ac9(void)

{
  return;
}




void FUN_001022a7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010240c(param_1,param_2,param_3);
  return;
}




void FUN_001022fe(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102461(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001024b8(undefined8 param_1)

{
  FUN_00102526(param_1);
  return;
}




undefined8 FUN_00101a7f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102ad4(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




undefined8 * FUN_00102200(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102754(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101f8e(void)

{
  return;
}




void FUN_00101a0a(void)

{
  FUN_001018df();
  return;
}




void FUN_00102b0b(void)

{
  return;
}




undefined8 FUN_00102a23(void)

{
  return 1;
}




void FUN_00102b00(void)

{
  return;
}




void FUN_00101762(long param_1)

{
  FUN_00101784(param_1 + 0x10);
  return;
}




undefined8 FUN_0010201c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001022da(param_1);
  uVar2 = FUN_00101f9e(param_1);
  FUN_001022fe(local_38,uVar2,uVar1);
  uVar3 = FUN_00102009(param_2);
  uVar4 = FUN_00101762(uVar1);
  FUN_00102377(uVar2,uVar4,uVar3);
  FUN_001023b4(local_38,0);
  FUN_00102338(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101654(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001016b2(param_1);
  FUN_001016fe(&local_18);
  FUN_00101722(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001024d6(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102538(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_0010158e(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t __maxlen;
  long in_FS_OFFSET;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101654(param_1);
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
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  __maxlen = strlen(__s);
  snprintf(local_48,__maxlen,"%s",__s);
  FUN_00102550(__s);
  free(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001014c9(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t __maxlen;
  long in_FS_OFFSET;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101654(param_1);
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
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  __maxlen = strlen(__s);
  snprintf(local_48,__maxlen,"%s",__s);
  FUN_00102550(__s);
  free(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101722(undefined8 *param_1)

{
  FUN_00101762(*param_1);
  return;
}




void FUN_00102b16(void)

{
  return;
}




int FUN_00102a41(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102246(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102009(param_2);
  uVar2 = FUN_001016b2(param_1);
  FUN_00101d98(param_1,uVar2,uVar1);
  return;
}




void FUN_00102576(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101f9e(undefined8 param_1)

{
  return param_1;
}




void FUN_001023d6(void)

{
  return;
}




undefined8 FUN_00102b58(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102b21,local_18);
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




undefined8 FUN_001017a2(undefined8 param_1)

{
  return param_1;
}




void FUN_001017b4(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b2c(local_58);
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
                    /* try { // try from 0010182c to 00101869 has its CatchHandler @ 001018b5 */
  FUN_00101be4(local_58,&local_60);
  FUN_00101be4(local_58,&local_60);
  FUN_00101be4(local_58,&local_60);
  FUN_00101c1e(local_38,local_58);
                    /* try { // try from 00101871 to 00101875 has its CatchHandler @ 001018a0 */
  FUN_001014c9(local_38);
  FUN_00101b4c(local_38);
  FUN_00101b4c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_00101ab6(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00102a32(void)

{
  return 0;
}




void FUN_001025fc(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102a5b(void)

{
  return;
}




void FUN_00101b4c(undefined8 param_1)

{
  FUN_00101bb8(param_1);
  return;
}




void FUN_00102474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102009(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a7f(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102abe(void)

{
  return;
}




void FUN_00101a96(undefined8 param_1)

{
  FUN_00101ab6(param_1);
  return;
}




undefined8 FUN_00101df9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102110(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101e5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102168(param_2);
  FUN_0010217a(param_1,uVar1);
  return;
}




void FUN_00101cea(undefined8 param_1)

{
  FUN_00101f8e(param_1);
  return;
}




ulong FUN_00102840(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010213e(undefined8 param_1,undefined8 param_2)

{
  FUN_001023d6(param_1,param_2);
  return;
}




void FUN_00102a9d(void)

{
  return;
}




void FUN_00102e00(void)

{
  return;
}




void FUN_00101d98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102009(param_3);
  p_Var2 = (_List_node_base *)FUN_0010201c(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001020e6(param_1,1);
  return;
}




void FUN_00102294(void)

{
  return;
}




void FUN_00102626(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b98(undefined8 param_1)

{
  FUN_00101d0a(param_1);
  return;
}




void FUN_00101c1e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101e4a(param_2);
  FUN_00101df9(&local_21,uVar1);
  FUN_00101e5c(param_1,&local_21);
  FUN_00101b98(&local_21);
  uVar1 = FUN_00101ee4(param_2);
  uVar2 = FUN_00101e94(param_2);
                    /* try { // try from 00101caa to 00101cae has its CatchHandler @ 00101cb1 */
  FUN_00101f30(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010217a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102168(param_2);
  FUN_0010213e(param_1,uVar1);
  FUN_00101a96(param_1);
  return;
}




void FUN_001023ea(long param_1)

{
  FUN_001024b8(param_1 + 0x10);
  return;
}




void FUN_00102a7c(void)

{
  return;
}




void FUN_00102adf(void)

{
  return;
}




void FUN_00102af5(void)

{
  return;
}




void FUN_00102a71(void)

{
  return;
}




void FUN_00102a92(void)

{
  return;
}




void FUN_00102377(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102009(param_3);
  FUN_00102474(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102538(void)

{
  return 0x555555555555555;
}




bool FUN_00102c25(pthread_t *param_1)

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




undefined8 FUN_00102168(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102110(undefined8 param_1,undefined8 param_2)

{
  FUN_0010213e(param_1,param_2);
  return param_1;
}




void FUN_00101784(undefined8 param_1)

{
  FUN_001017a2(param_1);
  return;
}




void FUN_001018df(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b2c(local_58);
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,0x31);
  *(undefined *)((long)local_60 + 0x31) = 0;
                    /* try { // try from 00101957 to 00101994 has its CatchHandler @ 001019e0 */
  FUN_00101be4(local_58,&local_60);
  FUN_00101be4(local_58,&local_60);
  FUN_00101be4(local_58,&local_60);
  FUN_00101c1e(local_38,local_58);
                    /* try { // try from 0010199c to 001019a0 has its CatchHandler @ 001019cb */
  FUN_0010158e(local_38);
  FUN_00101b4c(local_38);
  FUN_00101b4c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001025a8(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102338(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001022a7(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102aea(void)

{
  return;
}




long * FUN_001016fe(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00101ee4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021bc(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001020e6(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101d1a(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101762(local_20);
    uVar3 = FUN_00101f9e(param_1);
    FUN_00101fb0(uVar3,uVar2);
    FUN_00101fda(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102224(undefined8 *param_1)

{
  FUN_001023ea(*param_1);
  return;
}




void FUN_001027e0(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001021da(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001022da(undefined8 param_1)

{
  FUN_00102433(param_1,1);
  return;
}




void FUN_001025d0(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010277f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102d5a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




long FUN_001023b4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101410();
    DAT_00106020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101e4a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b0c(undefined8 param_1)

{
  FUN_00101b6c(param_1);
  return;
}




void FUN_00101b6c(undefined8 param_1)

{
  FUN_00101cea(param_1);
  FUN_00101a96(param_1);
  return;
}




void FUN_00101be4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001016b2(param_1);
  FUN_00101d98(param_1,uVar1,param_2);
  return;
}




void FUN_001026a7(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010267c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102aa8(void)

{
  return;
}



