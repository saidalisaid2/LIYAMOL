let handler = async m => m.reply(`
╭─「 Donate • Cash 」
│ • GooglePay [91701274386]
│ • Paytm [91701274386]
╰────

╭─「 Donate 」
│ • Jio, [917012074386]
│ • https://bit.ly/3tpMA3x
╰────
`.trim()) // Tambah sendiri kalo mau
handler.help = ['donasi']
handler.tags = ['info']
handler.command = /^dona(te|si)$/i

module.exports = handler
